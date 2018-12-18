#!/bin/bash
# run with docker run --rm -v `pwd`:/io $DOCKER_IMAGE $PRE_CMD /io/ci-scripts/manylinux-docker.sh
# see https://github.com/pypa/python-manylinux-demo/blob/master/.travis.yml
# cache using https://github.com/travis-ci/travis-ci/issues/5358
set -e -x

# Install a system package required by our library
yum install -y zlib-devel
yum install -y ccache
ln -s /usr/bin/ccache /usr/lib64/ccache/c++
ln -s /usr/bin/ccache /usr/lib64/ccache/cc
ln -s /usr/bin/ccache /usr/lib64/ccache/gcc
ln -s /usr/bin/ccache /usr/lib64/ccache/g++
export PATH=/usr/lib64/ccache:$PATH

# Compile wheels
for PYBIN in /opt/python/*/bin; do
    "${PYBIN}/python" setup.py bdist_wheel -d /persist/wheelhouse/
done

# Bundle external shared libraries into the wheels via auditwheel
for whl in /persist/wheelhouse/*linux_*.whl; do
    auditwheel repair "$whl" -w /persist/wheelhouse/
done

# Fix each wheel generated by auditwheel
for whl in /persist/wheelhouse/*manylinux1_*.whl; do
    ./ci-scripts/docker/fix_wheel.sh "$whl"
done

# Install packages and test
TEST_HOME=/persist/klayout/testdata
for PYBIN in /opt/python/*/bin/; do
    "${PYBIN}/pip" install klayout --no-index -f /persist/wheelhouse
    "${PYBIN}/python" $TEST_HOME/pymod/import_db.py  
    "${PYBIN}/python" $TEST_HOME/pymod/import_rdb.py 
    "${PYBIN}/python" $TEST_HOME/pymod/import_tl.py
done
