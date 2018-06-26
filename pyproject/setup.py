from setuptools import setup

setup(name='klayout',
  version='0.26.0.alpha',
  description='klayout editor and viewer',
  long_description='Standalone python package for klayout: a high performance GDS viewer and editor',
  author='klayoutmatthias',
  url='https://github.com/klayoutmatthias/klayout',
  packages=['klayout'],
  package_data={
    'klayout': ['*.dylib']
  },
  include_package_data=True,
)