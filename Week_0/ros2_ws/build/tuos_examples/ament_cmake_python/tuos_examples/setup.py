from setuptools import find_packages
from setuptools import setup

setup(
    name='tuos_examples',
    version='0.0.0',
    packages=find_packages(
        include=('tuos_examples', 'tuos_examples.*')),
)
