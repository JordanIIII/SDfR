#ifndef STEER_RELBOT_HPP_
#define STEER_RELBOT_HPP_

// CPP library headers

// ROS Client Library CPP
#include "rclcpp/rclcpp.hpp"

// message type for velocity
#include "example_interfaces/msg/float64.hpp"

// message type for pose
#include "geometry_msgs/msg/pose_stamped.hpp"

class SteerRelbot : public rclcpp::Node
{
public:
    SteerRelbot();

    const double DEFAULT_SETPOINT_STREAM = 100;  // How often the velocities are published per second

private:
    rclcpp::Publisher<example_interfaces::msg::Float64>::SharedPtr left_wheel_topic_;
    rclcpp::Publisher<example_interfaces::msg::Float64>::SharedPtr right_wheel_topic_;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_subscriber;
    // TODO: Add a subscriber for the green-object detector output here.

    rclcpp::TimerBase::SharedPtr timer_;

    double left_velocity = 0.0;
    double right_velocity = 0.0;

    double current_angle = 0.0;
    double current_x = 0.0;
    double current_y = 0.0;

    // TODO: Add variables for the latest detected green-object target here.
    // Examples: target_x, target_y, target_received

    void create_topics();
    void timer_callback();
    void calculate_velocity();
};

#endif /*STEER_RELBOT_HPP_*/
