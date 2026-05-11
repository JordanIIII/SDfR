#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to relbot_msgs__msg__RelbotMotors
/// Unified motor velocities, rather than two possible out of sync topics

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RelbotMotors {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_wheel_vel: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_wheel_vel: f64,

}



impl Default for RelbotMotors {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RelbotMotors::default())
  }
}

impl rosidl_runtime_rs::Message for RelbotMotors {
  type RmwMsg = super::msg::rmw::RelbotMotors;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        left_wheel_vel: msg.left_wheel_vel,
        right_wheel_vel: msg.right_wheel_vel,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      left_wheel_vel: msg.left_wheel_vel,
      right_wheel_vel: msg.right_wheel_vel,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      left_wheel_vel: msg.left_wheel_vel,
      right_wheel_vel: msg.right_wheel_vel,
    }
  }
}


// Corresponds to relbot_msgs__msg__RelbotMotorsStamped
/// Stamped Motor command

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RelbotMotorsStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_cmd: super::msg::RelbotMotors,

}



impl Default for RelbotMotorsStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RelbotMotorsStamped::default())
  }
}

impl rosidl_runtime_rs::Message for RelbotMotorsStamped {
  type RmwMsg = super::msg::rmw::RelbotMotorsStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        motor_cmd: super::msg::RelbotMotors::into_rmw_message(std::borrow::Cow::Owned(msg.motor_cmd)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        motor_cmd: super::msg::RelbotMotors::into_rmw_message(std::borrow::Cow::Borrowed(&msg.motor_cmd)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      motor_cmd: super::msg::RelbotMotors::from_rmw_message(msg.motor_cmd),
    }
  }
}


