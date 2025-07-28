from launch import LaunchDescription
from launch_ros.actions import Node
from pathlib import Path

pkg_share = Path(__file__).parent.parent   # …/py_params/
params    = pkg_share / 'talker_params.yaml'

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='py_params',
            executable='configurable_talker',
            name='talker',
            parameters=[params],
        ),
        Node(package='py_pubsub', executable='listener',   name='listener'),
        Node(package='py_srvcli', executable='add_two_ints_server', name='srv_server'),
        Node(package='py_srvcli', executable='countdown_client',
             name='action_client', arguments=['7']),
    ])
