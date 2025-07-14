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
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='reddy',
    maintainer_email='rajeevreddy1009@gmail.com',
    description='AddTwoInts service/client demo',
    license='MIT',            # or keep TODO if you prefer
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'add_two_ints_server = py_srvcli.add_two_ints_server:main',
            'add_two_ints_client = py_srvcli.add_two_ints_client:main',
        ],
    },
)   # ←—— the critical closing parenthesis

