# Step 1.

Make sure you have the quay.io/pypa/manylinux1_x86_64 image.

```bash
$ docker images
REPOSITORY                       TAG                 IMAGE ID            CREATED             SIZE
quay.io/pypa/manylinux1_x86_64   latest              1c8429c548f2        2 months ago        879MB
hello-world                      latest              4ab4c602aa5e        3 months ago        1.84kB
# My image was old:
$ docker pull quay.io/pypa/manylinux1_x86_64
Using default tag: latest
latest: Pulling from pypa/manylinux1_x86_64
7d0d9526f38a: Already exists
3324bfadf9cb: Pull complete
20f27c7e3062: Pull complete
5bc21fc5fe97: Pull complete
Digest: sha256:a13b2719fb21daebfe25c0173d80f8a85a2326dd994510d7879676e7a2193500
Status: Downloaded newer image for quay.io/pypa/manylinux1_x86_64:latest
```

# Step 2.

This step was inspired by https://dev.to/jibinliu/how-to-persist-data-in-docker-container-2m72
Create a volume for klayout. This is necessary because docker containers don't persist data.

```bash
$ docker volume create klayout-persist
$ docker volume inspect klayout-persist
[
    {
        "CreatedAt": "2018-12-18T15:01:48Z",
        "Driver": "local",
        "Labels": {},
        "Mountpoint": "/var/lib/docker/volumes/klayout-persist/_data",
        "Name": "klayout-persist",
        "Options": {},
        "Scope": "local"
    }
]
```

# Step 3.

Build image `myimage` with:

```bash
$ docker build -t myimage:latest .
```

This creates an image called `myimage` (temporary). This image will not overwrite old ones. Tip: prune old, unused images with `docker image prune`.

Then I run the docker with a terminal shell and load the volume klayout-persist in /persist:

```bash
$ docker run --name klayout --mount source=klayout-persist,target=/persist -it myimage
```

# Step 4.

In the shell, pull master from klayout.

```bash
cd /persist
git clone https://github.com/lightwave-lab/klayout.git
mkdir -p wheelhouse
cd klayout
# make wheel with python 3.6 (for example)
/opt/python/cp36-cp36m/bin/python setup.py bdist_wheel -d /persist/wheelhouse/
cd /persist
auditwheel repair "wheelhouse/klayout-0.26.0.dev8-cp36-cp36m-linux_x86_64.whl" -w wheelhouse/
# Need to manually fix the wheel
#/opt/python/cp36-cp36m/bin/pip install klayout --no-index -f /wheelhouse
```

The produced wheel from auditwheel, klayout-0.26.0.dev8-cp36-cp36m-manylinux1_x86_64.whl, is defective in the following way: dbcore.so etc. have RPATHs reset to `$ORIGIN/.libs`, so we need to move all .so's `lib_*` into `.libs`, as well as `db_plugins`. We also need to change the dist-info/RECORD file paths. This is a bug from auditwheel, it should either have added a new RPATH, $ORIGIN/.libs, where it places libz, libcurl, libexpat, instead of renaming the existing ones, or moved the files to the right place.


Procedure to fix the wheel:

```bash
unzip wheelhouse/klayout-0.26.0.dev8-cp36-cp36m-manylinux1_x86_64.whl -d tempwheel
cd tempwheel/klayout
mv lib_* db_plugins .libs/
cd ../klayout-0.26.0.dev8.dist-info/
sed -i 's/^klayout\/lib_/klayout\/.libs\/lib_/g' RECORD
sed -i 's/^klayout\/db_plugins/klayout\/.libs\/db_plugins/g' RECORD
cd ../
rm -f ../wheelhouse/klayout-0.26.0.dev8-cp36-cp36m-manylinux1_x86_64.whl
zip -r ../wheelhouse/klayout-0.26.0.dev8-cp36-cp36m-manylinux1_x86_64.whl ./*
cd ..
rm -rf tempwheel
```

Now we can install and test:
```bash
/opt/python/cp36-cp36m/bin/pip install klayout --no-index -f /persist/wheelhouse
cd /persist/klayout
/opt/python/cp36-cp36m/bin/python -m unittest testdata/pymod/import_db.py  testdata/pymod/import_rdb.py testdata/pymod/import_tl.py
# Tests passed!
```