from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    params_file = os.path.join(
        get_package_share_directory("cam2image_vm2ros"),
        "config",
        "cam2image_relbot.yaml",
    )

    cam2image_node = Node(
        package="cam2image_vm2ros",
        executable="cam2image",
        name="cam2image",
        parameters=[
            params_file,
            {"show_camera": False},
        ],
        output="screen",
    )

    ros_xeno_bridge = Node(
        package="ros_xeno_bridge",
        executable="RosXenoBridge",
        name="ros_xeno_bridge",
        output="screen",
    )

    relbot_adapter = Node(
        package="relbot_adapter",
        executable="relbot_adapter",
        name="relbot_adapter",
        parameters=[
            {
                "robotmode": "real",
                "use_twist_cmd": False,
                "max_speed_mps": 0.05,
            },
        ],
        output="screen",
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
        output="screen",
    )

    return LaunchDescription([
        cam2image_node,
        ros_xeno_bridge,
        relbot_adapter,
        detector,
        controller,
    ])
