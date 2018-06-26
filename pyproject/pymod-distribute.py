#! /usr/bin/env python
# -*- coding: utf-8 -*-
from __future__ import print_function
import os
from os.path import dirname, realpath, join as pjoin, isdir, basename
import sys
import shutil
from glob import iglob

import distutils.core
from delocate.delocating import delocate_wheel  # This is not a builtin package


global binaries_path
global pyproj_path
global pydist_path

def preparation():
    # Set the directories and get into the right one
    global pyproj_path
    global binaries_path
    global pydist_path

    pyproj_path = dirname(realpath(__file__))
    if isdir(pjoin(pyproj_path, 'pyproject')):
        pyproj_path += '/pyproject'
    
    # Right now qt5 release is hard coded,
    # but that would be pretty easy to change
    repoPath = dirname(pyproj_path)
    for d in iglob(repoPath + f'/qt5.bin.*-release'):
        binaries_path = d
    release_info = '.'.join(basename(binaries_path).split('.')[2:])
    
    pydist_path = repoPath + f'/qt5.pydist.{release_info}'

    # Give the project and distribution directories a clean start
    for f in os.listdir(pyproj_path):
        if f in ['setup.py', 'MANIFEST.in', 'mybuild.sh', basename(__file__)]:
            continue
        fullname = pjoin(pyproj_path, f)
        if isdir(fullname):
            shutil.rmtree(fullname)
        else:
            os.remove(fullname)
    if isdir(pydist_path):
        shutil.rmtree(pydist_path)
    os.mkdir(pydist_path)
    os.chdir(pyproj_path)


def copy_into_pyproject():
    # We need the library "libklayout" files found in binary directory
    print('Copying binaries into python project')
    dylib_version = '0'
    for filename in iglob(binaries_path + f'/libklayout_*.{dylib_version}.dylib'):
        if '26.0' in filename:  # because these also end with .0.dylib
            continue
        shutil.copy2(filename, pjoin(pyproj_path, basename(filename)))
    shutil.copytree(binaries_path + '/pymod/klayout', pyproj_path + '/klayout')


def filter_system_and_brew_libs(libname):
    ''' If it is a system library/framework, e.g. Python, returns False.
        See https://github.com/matthew-brett/delocate/blob/master/delocate/delocating.py
    '''
    return not (libname.startswith('/usr/lib') or
                libname.startswith('/System') or
                libname.startswith('/usr/local/opt') or
                libname.startswith('/usr/local/Cellar'))


def distribute_wheel():
    print('Distributing first wheel with hard links')
    distutils.core.run_setup('setup.py', script_args=['bdist_wheel'])
    wheel_file = list(iglob('dist/*.whl'))[0]
    print('Making the wheel portable')
    delocate_wheel(wheel_file, copy_filt_func = filter_system_and_brew_libs)  # Modifies file in place
    print('Wheel delocation finished')
    return wheel_file


if __name__ == '__main__':
    preparation()
    copy_into_pyproject()
    wheel_file = distribute_wheel()
    distro_file = pjoin(pydist_path, basename(wheel_file))
    shutil.copy2(wheel_file, distro_file)
    print('-- You can now reinstall with: --')
    print('pip uninstall klayout')
    print('y')
    print(f'pip install {os.path.relpath(distro_file)}\n')

