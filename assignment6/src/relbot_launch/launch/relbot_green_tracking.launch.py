from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    camera_params = os.path.join(
        get_package_share_directory("cam2image_vm2ros"),
        "config",
        "cam2image_relbot.yaml",
    )

    relbot_simulator = Node(
        package="relbot_simulator",
        executable="relbot_simulator",
        name="relbot_sim",
        parameters=[{"use_twist_cmd": False}],
    )

    relbot2turtlesim = Node(
        package="relbot2turtlesim",
        executable="relbot2turtlesim",
        name="pose_to_TS",
    )

    turtlesim = Node(
        package="turtlesim",
        executable="turtlesim_node",
        name="robotturtle",
    )

    camera = Node(
        package="cam2image_vm2ros",
        executable="cam2image",
        name="cam2image",
        output="screen",
        parameters=[camera_params],
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
        relbot2turtlesim,
        turtlesim,
        camera,
        detector,
        controller,
    ])
