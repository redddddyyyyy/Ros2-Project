from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    talker_node = Node(
        package='py_pubsub',
        executable='talker',
        name='talker',
        parameters=[{'publish_rate': 3.0}],   # override default
        output='screen'
    )

    listener_node = Node(
        package='py_pubsub',
        executable='listener',
        name='listener',
        output='screen'
    )

    return LaunchDescription([talker_node, listener_node])
