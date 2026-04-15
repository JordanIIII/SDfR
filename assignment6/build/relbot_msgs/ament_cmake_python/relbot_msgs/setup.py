from setuptools import find_packages
from setuptools import setup

setup(
    name='relbot_msgs',
    version='2025.2.0',
    packages=find_packages(
        include=('relbot_msgs', 'relbot_msgs.*')),
)
