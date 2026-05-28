from setuptools import find_packages
from setuptools import setup

setup(
    name='part1_pubsub',
    version='0.0.0',
    packages=find_packages(
        include=('part1_pubsub', 'part1_pubsub.*')),
)
