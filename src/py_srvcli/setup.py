from glob import glob
from setuptools import setup

package_name = 'py_srvcli'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/action', glob('action/*.action')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='reddy',
    maintainer_email='rajeevreddy1009@gmail.com',
    description='Service & Action demo package',
    license='TODO',                       # change if you have a license
    entry_points={
    'console_scripts': [
        'add_two_ints_server        = py_srvcli.add_two_ints_server:main',
        'retry_add_two_ints_client  = py_srvcli.retry_add_two_ints_client:main',
        'countdown_server           = py_srvcli.countdown_server:main',
        'countdown_client           = py_srvcli.countdown_client:main',
    ],
},
)

