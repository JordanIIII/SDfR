#include "steering.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/point_stamped.hpp"

SteerRelbot::SteerRelbot() : Node("steer_relbot") {
    RCLCPP_INFO(this->get_logger(), "Init");

    is_in_simulation = this->declare_parameter<bool>("is_in_simulation", false);
    RCLCPP_INFO(this->get_logger(), "Simulation mode: %s", is_in_simulation ? "true" : "false");

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

    // Position of the detected red object
    target_subscriber = this->create_subscription<geometry_msgs::msg::PointStamped>(
        "red_object_position", 10, [this](const geometry_msgs::msg::PointStamped::SharedPtr msg) {
            target_x_raw = msg->point.x;
            target_y_raw = msg->point.y;
            red_coverage = msg->point.z;
            has_target = true;
            last_target_time_ = msg->header.stamp;
        });
}

void SteerRelbot::calculate_velocity() {
    // Time constant for the controller
    const double tau_w = 100; 
    const double tau_v = 1;
    const double min_red_coverage_val = 0.1; // prevent division by zero and extremely high velocities
    int sign = 1; // changes left wheel velocity depending on simulation or real relbot

    if (has_target) {
        const rclcpp::Time now = this->get_clock()->now();
        const rclcpp::Duration time_since_last_target = now - last_target_time_;
        if (time_since_last_target.seconds() > TARGET_TIMEOUT_SEC) {
            has_target = false;
        }
    }
    
    // safely stop the robot if there is no target
    if (!has_target) {
        left_velocity = 0.0;
        right_velocity = 0.0;
        return;
    }

    if (is_in_simulation) {
        sign = -1;
    }

    // frame 320x240
    const double center_x = 160.0;
    
    // Calculate error between target position and center of the image
    double error_x = target_x_raw - center_x;
    //double error_y = target_y_raw - 240;

    // Smaller target coverage means the object is further away, so relbot should move faster (inverse relationship)
    double v = 1 / (tau_v * std::max(red_coverage, min_red_coverage_val));

    // Angular velocity control proportional to horizontal error
    double w = error_x/tau_w;
    
    left_velocity = sign*(v +w);
    right_velocity = v -w;

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
