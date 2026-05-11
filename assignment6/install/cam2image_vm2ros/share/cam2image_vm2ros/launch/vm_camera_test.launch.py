from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    params_file = os.path.join(
        get_package_share_directory("cam2image_vm2ros"),
        "config",
        "cam2image.yaml",
    )

    cam2image_node = Node(
        package="cam2image_vm2ros",
        executable="cam2image",
        name="cam2image",
        output="screen",
        parameters=[params_file],
    )

    showimage_node = Node(
        package="image_tools",
        executable="showimage",
        name="showimage",
        output="screen",
    )

    return LaunchDescription([cam2image_node, showimage_node])
