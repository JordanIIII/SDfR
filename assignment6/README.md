First build all packages using
1. cd assignment6 
2. colcon build

In one terminal, run:
1. cd assignment6
2. source install/setup.bash
3. sudo ./build/demo/demo

In a second terminal, run:
1. cd assignment6
2. source install/setup.bash
3. ros2 launch relbot_launch relbot_implementation.launch.py

Finally, in a third terminal, run:
1. cd assignment6
2. source install/setup.bash
3. ros2 topic pub --once /XenoCmd std_msgs/msg/Int32 "{data: 1}"