from setuptools import setup

package_name = 'py_params'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],                # installs py_params/ as a Python pkg
    data_files=[                            # mandatory boiler-plate
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch',      ['launch/demo_system.launch.py']),
        ('share/' + package_name,                  ['talker_params.yaml']),
    ],
    install_requires=['setuptools', 'rclpy', 'std_msgs'],
    zip_safe=True,
    maintainer='reddy',
    maintainer_email='rajeevreddy1009@gmail.com',
    description='Parameter-aware talker example',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'configurable_talker = py_params.configurable_talker:main',
        ],
    },
)
