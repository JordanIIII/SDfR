## Ensure that each (new) terminal opened is set to the root directory of the workspace
## Additionally, ensure that the build, install, and log folders are removed before running any colcon build command

#### For implementation on the real relbot
First build all packages using
1. colcon build

In another terminal, run:
1. source install/setup.bash
2. sudo ./build/demo/demo

In a third terminal, run:
1. source install/setup.bash
2. ros2 launch relbot_launch relbot_implementation.launch.py

Finally, in a fourth terminal, run:
1. source install/setup.bash
2. ros2 topic pub --once /XenoCmd std_msgs/msg/Int32 "{data: 1}"
-------------------------------
#### For simuation on a laptop
Build all packages excluding demo and xeno bridge:
1. colcon build --packages-skip demo ros_xeno_bridge

Run videoserver.py outside of the vm/wsl (ensure that the socket_ip in /cam2image_vm2ros/config/cam2image.yaml is set correctly. Check if it matches using ipconfig on the host machine.)

In a new terminal, run:
1. source install/setup.bash
2. ros2 launch relbot_launch relbot_simulation.launch.py

#### IF DESIRED: an exact copy of the two edited packages (green_object_detector, relbot_sequence_controller, and relbot_launch) are inside of the Edited_Packages folder. These were added in case it's simpler to only have these two packages for grading, rather than the entire workspace.

