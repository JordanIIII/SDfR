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

    relbot_simulator = Node(
        package="relbot_simulator",
        executable="relbot_simulator",
        name="relbot_sim",
        parameters=[{"use_twist_cmd": False}],
    )

    cam2image_node = Node(
        package="cam2image_vm2ros",
        executable="cam2image",
        name="cam2image",
        parameters=[params_file],
    )

    detector = Node(
        package="green_object_detector",
        executable="green_object_detector",
        name="green_object_detector",
        output="screen",
    )

    controller = Node(
        package="relbot_sequence_controller",
        executable="relbot_sequence_controller",
        name="relbot_sequence_controller",
    )

    return LaunchDescription([
        relbot_simulator,
        cam2image_node,
        detector,
        controller,
    ])
