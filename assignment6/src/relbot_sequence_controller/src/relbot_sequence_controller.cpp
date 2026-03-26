#include "steering.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"

SteerRelbot::SteerRelbot() : Node("steer_relbot") {
    RCLCPP_INFO(this->get_logger(), "Init");

    create_topics();
    RCLCPP_INFO(this->get_logger(), "Created Topics");

    timer_ = this->create_wall_timer(std::chrono::duration<double>(1/DEFAULT_SETPOINT_STREAM),
                                     std::bind(&SteerRelbot::timer_callback, this));
}

void SteerRelbot::create_topics() {
    left_wheel_topic_ = this->create_publisher<example_interfaces::msg::Float64>(
        "/input/left_motor/setpoint_vel", 1);

    right_wheel_topic_ = this->create_publisher<example_interfaces::msg::Float64>(
        "/input/right_motor/setpoint_vel", 1);

    // Keep the RELbot pose updated so the controller can compare robot state to target state.
    pose_subscriber = this->create_subscription<geometry_msgs::msg::PoseStamped>(
        "/output/robot_pose", 10, [this](const geometry_msgs::msg::PoseStamped::SharedPtr msg) {
            current_angle = msg->pose.orientation.z;
            current_x = msg->pose.position.x;
            current_y = msg->pose.position.y;
        });

    // TODO: Add a subscriber to the green-object detector topic here.
    // The callback should store the latest detected target coordinates for use in calculate_velocity().
}

void SteerRelbot::calculate_velocity() {
    // TODO: Replace this placeholder with the assignment 6 control law.
    // Suggested implementation steps:
    // 1. Stop the robot safely until a green-object target has been received.
    // 2. Compute the error between the current robot pose and the target position.
    // 3. Convert that error into left and right wheel setpoints.

    left_velocity = 0.0;
    right_velocity = 0.0;
}

void SteerRelbot::timer_callback() {
    calculate_velocity();

    example_interfaces::msg::Float64 left_wheel;
    left_wheel.data = left_velocity;
    example_interfaces::msg::Float64 right_wheel;
    right_wheel.data = right_velocity;
    left_wheel_topic_->publish(left_wheel);
    right_wheel_topic_->publish(right_wheel);
}

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SteerRelbot>());
    rclcpp::shutdown();
    return 0;
}
