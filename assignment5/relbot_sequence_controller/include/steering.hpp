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
    /**
     * @brief Construct a new steering object
     */
    SteerRelbot();

    const double DEFAULT_SETPOINT_STREAM = 100;  // How often the velocities are published per second

private:
    // Topics
    rclcpp::Publisher<example_interfaces::msg::Float64>::SharedPtr left_wheel_topic_;
    rclcpp::Publisher<example_interfaces::msg::Float64>::SharedPtr right_wheel_topic_;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_subscriber_;

    // Timer
    rclcpp::TimerBase::SharedPtr timer_;

    // attributes
    double left_velocity;
    double right_velocity;

    // pose tracking attributes
    double current_angle_ = 0.0;
    double current_x_ = 0.0;
    double current_y_ = 0.0;
    double start_angle_ = 100.0;
    double square_start_x_ = 1000.0;
    double square_start_y_ = 1000.0;
    double square_start_angle_ = 100.0;
    int completed_square_turns_ = 0;
    bool turn_completed_ = false;
    double circle_start_angle_ = 100.0;
    bool circle_completed_ = false;
    double circle_end_time_ = 0.0;
    double turn_end_time_ = 0.0;

    // methods
    void create_topics();
    void timer_callback();
    void calculate_velocity();
};

#endif /*STEER_RELBOT_HPP_*/