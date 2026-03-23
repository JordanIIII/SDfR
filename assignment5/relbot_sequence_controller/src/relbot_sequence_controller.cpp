#include "steering.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include <cmath>

SteerRelbot::SteerRelbot() : Node("steer_relbot") {
    RCLCPP_INFO(this->get_logger(), "Init");

    // initialize topics
    create_topics();
    RCLCPP_INFO(this->get_logger(), "Created Topics");

    // initialize timer
    timer_ = this->create_wall_timer(std::chrono::duration<double>(1/DEFAULT_SETPOINT_STREAM),
                                     std::bind(&SteerRelbot::timer_callback, this));
}

void SteerRelbot::create_topics() {
    left_wheel_topic_ = this->create_publisher<example_interfaces::msg::Float64>(
        "/input/left_motor/setpoint_vel", 1);

    right_wheel_topic_ = this->create_publisher<example_interfaces::msg::Float64>(
        "/input/right_motor/setpoint_vel", 1);

    pose_subscriber_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
        "/output/robot_pose", 10, [this](const geometry_msgs::msg::PoseStamped::SharedPtr msg) {
            current_angle_ = msg->pose.orientation.z;
            current_x_ = msg->pose.position.x;
            current_y_ = msg->pose.position.y;
        });
}

void SteerRelbot::calculate_velocity() {
    static rclcpp::Time start_time = this->get_clock()->now();
    double elapsed_time = (this->get_clock()->now() - start_time).seconds();   

    // Straight line, left wheel has to have a negative value, otherwise it turns in the wrong direction
    if (elapsed_time < 5) {
        left_velocity = -10;
        right_velocity = 10;
    }
    // Circle, left wheel simply gets a larger value
    else if (!circle_completed_) {
        // angle of 100 can never be reached [-3.14, 3.14], so this only assigns it once at the start
        if (circle_start_angle_ == 100.0) circle_start_angle_ = current_angle_;
        
        left_velocity = -10;
        right_velocity = 8.5;

        // Turn right by 1.5 full circles. Right turn = negative angle change.
        // 1.5 circles = 3 * pi radians.
        if (current_angle_ - circle_start_angle_ <= -3.0 * 3.1415926535) {
            circle_completed_ = true;
            // To base start time of the straight line on
            circle_end_time_ = elapsed_time;
        }
    }
    // Straight line, then left turn
    else if (elapsed_time - circle_end_time_ < 10) {
        double turn_time = elapsed_time - circle_end_time_;
        
        // Straight line
        if (turn_time < 3) {
            left_velocity = -10;
            right_velocity = 10;
        }
        // Turn in place (90 deg left)
        else if (!turn_completed_) {
            if (start_angle_ == 100.0) start_angle_ = current_angle_;
            
            left_velocity = 1;
            right_velocity = 1;

            // A 90 deg difference gives std::cos(delta) = 0
            if (std::cos(current_angle_ - start_angle_) <= 0.0) {
                turn_completed_ = true;
            }
        }
        // Go straight again
        else {
            left_velocity = -10;
            right_velocity = 10;
        }
        turn_end_time_ = elapsed_time;
    }
    // Drive 1 square
    else if (completed_square_turns_ < 4) {
        // We use physical distance instead of time for perfect consistency!
        if (square_start_x_ == 1000.0) {
            square_start_x_ = current_x_;
            square_start_y_ = current_y_;
        }
        
        double distance_driven = std::sqrt(std::pow(current_x_ - square_start_x_, 2) + std::pow(current_y_ - square_start_y_, 2));
        
        // 1.5 meters straight
        if (distance_driven < 1.5) {
            left_velocity = -10;
            right_velocity = 10;
            square_start_angle_ = 100.0;
        }
        else {
            // Turn right
            if (square_start_angle_ == 100.0) square_start_angle_ = current_angle_;
            
            left_velocity = -3;
            right_velocity = 2;

            if (std::cos(current_angle_ - square_start_angle_) <= 0.0) {
                // Reset the distance anchor to start measuring the next straight line from this new corner!
                square_start_x_ = 1000.0;
                completed_square_turns_++;
            }
        }
    }
    // Finished all sequences! Halt the robot.
    else {
        left_velocity = 0;
        right_velocity = 0;
    }
}

void SteerRelbot::timer_callback() {
    // calculate velocity
    calculate_velocity();

    // publish velocity to simulator
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