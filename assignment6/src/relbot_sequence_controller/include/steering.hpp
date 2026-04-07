#ifndef STEER_RELBOT_HPP_
#define STEER_RELBOT_HPP_

// CPP library headers
#include <cmath>

// ROS Client Library CPP
#include "rclcpp/rclcpp.hpp"

// message type for velocity
#include "example_interfaces/msg/float64.hpp"

// message type for pose
#include "geometry_msgs/msg/pose_stamped.hpp"

// message type for target position
#include "geometry_msgs/msg/point_stamped.hpp"

class SteerRelbot : public rclcpp::Node
{
public:
    SteerRelbot();

    const double DEFAULT_SETPOINT_STREAM = 100;  // How often the velocities are published per second

private:
    static constexpr double TARGET_TIMEOUT_SEC = 0.25;

    rclcpp::Publisher<example_interfaces::msg::Float64>::SharedPtr left_wheel_topic_;
    rclcpp::Publisher<example_interfaces::msg::Float64>::SharedPtr right_wheel_topic_;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_subscriber;
    rclcpp::Subscription<geometry_msgs::msg::PointStamped>::SharedPtr target_subscriber; 

    rclcpp::TimerBase::SharedPtr timer_;

    double target_x_raw = 0.0;
    double target_y_raw = 0.0;
    double green_coverage = 0.0;
    bool has_target = false;

    double left_velocity = 0.0;
    double right_velocity = 0.0;

    double current_angle = 0.0;
    double current_x = 0.0;
    double current_y = 0.0;
    rclcpp::Time last_target_time_{0, 0, RCL_ROS_TIME};

    // TODO: Add variables for the latest detected green-object target here.
    // Examples: target_x, target_y, target_received

    void create_topics();
    void timer_callback();
    void calculate_velocity();
};

#endif /*STEER_RELBOT_HPP_*/
