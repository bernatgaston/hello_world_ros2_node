from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='hello_world_package',
            executable='hello_world_node',
            output='screen'
        )
    ])