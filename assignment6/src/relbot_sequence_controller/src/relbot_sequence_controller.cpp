#include "steering.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/point_stamped.hpp"

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

    // Position of the detected green object
    target_subscriber = this->create_subscription<geometry_msgs::msg::PointStamped>(
        "green_object_position", 10, [this](const geometry_msgs::msg::PointStamped::SharedPtr msg) {
            target_x_raw = msg->point.x;
            target_y_raw = msg->point.y;
            has_target = true;
        });
}

void SteerRelbot::calculate_velocity() {
    // Time constant for the controller
    double tau = 0.5; 
    
    // safely stop the robot if there is no target
    if (!has_target) {
        left_velocity = 0.0;
        right_velocity = 0.0;
        return;
    }

    // frame 300x200
    center_x = 150.0;
    center_y = 100.0;
    double target_x = (target_x_raw - center_x) / center_x;
    double target_y = (center_y - target_y_raw) / center_y;

    double error_x = target_x - current_x;
    double error_y = target_y - current_y;

    double desired_angle = atan2(error_y, error_x);
    double angle_error = desired_angle - current_angle;

    double distance_error = sqrt(error_x * error_x + error_y * error_y);

    double v = distance_error/tau;
    double w = angle_error/tau;

    left_velocity = v - w;
    right_velocity = v + w;

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
