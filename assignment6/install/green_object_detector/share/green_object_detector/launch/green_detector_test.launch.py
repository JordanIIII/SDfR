from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    detector_params = os.path.join(
        get_package_share_directory("green_object_detector"),
        "config",
        "detector.yaml",
    )

    cam2image_params = os.path.join(
        get_package_share_directory("cam2image_vm2ros"),
        "config",
        "cam2image.yaml",
    )

    cam2image_node = Node(
        package="cam2image_vm2ros",
        executable="cam2image",
        name="cam2image",
        output="screen",
        parameters=[cam2image_params],
    )

    detector_node = Node(
        package="green_object_detector",
        executable="green_object_detector_node",
        name="green_object_detector",
        output="screen",
        parameters=[detector_params],
    )

    showimage_node = Node(
        package="image_tools",
        executable="showimage",
        name="showimage",
        output="screen",
    )

    return LaunchDescription([
        cam2image_node,
        detector_node,
        showimage_node,
    ])
