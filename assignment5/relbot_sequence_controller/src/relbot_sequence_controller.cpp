//=============================================================================
// Authors : Jordan Nwandu (s3537544) and Steyn Fokkema (s2710714)
// Group   : PPD 1
// License : LGPL open source license
//
// Brief   : Added a subscriber to the robot_pose geometry_msgs topic, to extract angle and position.
//           Also added the control of each of the four sequences in the calculate_velocity function.
//           These sequences are executed sequentially.
//=============================================================================

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

    // subscribe to pose topic, which is sused to extract the current angle and position of the robot
    pose_subscriber = this->create_subscription<geometry_msgs::msg::PoseStamped>(
        "/output/robot_pose", 10, [this](const geometry_msgs::msg::PoseStamped::SharedPtr msg) {
            current_angle = msg->pose.orientation.z;
            current_x = msg->pose.position.x;
            current_y = msg->pose.position.y;
        });
}

// Sequential execution of the four different paths.
void SteerRelbot::calculate_velocity() {
    static rclcpp::Time start_time = this->get_clock()->now();
    double elapsed_time = (this->get_clock()->now() - start_time).seconds();   

    // Straight line, left wheel has to have a negative value, otherwise it turns in the wrong direction
    if (elapsed_time < 5) {
        left_velocity = -10;
        right_velocity = 10;
    }
    // Circle, left wheel simply gets a larger value
    else if (!circle_completed) {
        // angle of 100 can never be reached [-3.14, 3.14], so this only assigns it once at the start
        if (circle_start_angle == 100.0) circle_start_angle = current_angle;
        
        left_velocity = -10;
        right_velocity = 8.5;

        // Turn right by 1.5 full circles, so that it ends up facing to the left. Right turn = negative angle change.
        // 1.5 circles = 3 * pi radians.
        if (current_angle - circle_start_angle <= -3.0 * 3.1415926535) {
            circle_completed = true;
            // To base start time of the straight line on
            circle_end_time = elapsed_time;
        }
    }
    // Straight line, then left turn
    else if (elapsed_time - circle_end_time < 7) {
        double turn_time = elapsed_time - circle_end_time;
        
        // Straight line
        if (turn_time < 3) {
            left_velocity = -10;
            right_velocity = 10;
        }
        // Turn in place (90 deg left)
        else if (!turn_completed) {
            if (start_angle == 100.0) start_angle = current_angle;
            
            left_velocity = 1;
            right_velocity = 1;

            // A 90 deg difference gives std::cos(angle) = 0
            if (std::cos(current_angle - start_angle) <= 0.0) {
                turn_completed = true;
            }
        }
        // Go straight again
        else {
            left_velocity = -10;
            right_velocity = 10;
        }
        turn_end_time = elapsed_time;
    }
    // square-like path, consisting of 4 turns (of course)
    else if (completed_square_turns < 4) {
        // 1000 is an unreachable coordinate, this if statement is used to assign the starting position only once at the start of each edge
        if (square_start_x == 1000.0) {
            square_start_x = current_x;
            square_start_y = current_y;
        }
        
        // Calculate the total distance driven since the start of the current edge
        double distance_driven = std::sqrt(std::pow(current_x - square_start_x, 2) + std::pow(current_y - square_start_y, 2));
        
        if (distance_driven < 1.5) {
            // drive straight
            left_velocity = -10;
            right_velocity = 10;
            square_start_angle = 100.0;
        }
        else {
            // Turn right
            if (square_start_angle == 100.0) square_start_angle = current_angle;
            
            left_velocity = -3;
            right_velocity = 2;

            if (std::cos(current_angle - square_start_angle) <= 0.0) {
                // Reset the distance anchor to current position, distance driven will then be calculated relative to this point
                square_start_x = 1000.0;
                // Increment the number of completed turns
                completed_square_turns++;
            }
        }
    }
    // Finished all sequences, robot stops
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