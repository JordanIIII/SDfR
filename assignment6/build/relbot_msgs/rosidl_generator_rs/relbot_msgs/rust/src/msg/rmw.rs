#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "relbot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__relbot_msgs__msg__RelbotMotors() -> *const std::ffi::c_void;
}

#[link(name = "relbot_msgs__rosidl_generator_c")]
extern "C" {
    fn relbot_msgs__msg__RelbotMotors__init(msg: *mut RelbotMotors) -> bool;
    fn relbot_msgs__msg__RelbotMotors__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RelbotMotors>, size: usize) -> bool;
    fn relbot_msgs__msg__RelbotMotors__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RelbotMotors>);
    fn relbot_msgs__msg__RelbotMotors__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RelbotMotors>, out_seq: *mut rosidl_runtime_rs::Sequence<RelbotMotors>) -> bool;
}

// Corresponds to relbot_msgs__msg__RelbotMotors
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unified motor velocities, rather than two possible out of sync topics

#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !relbot_msgs__msg__RelbotMotors__init(&mut msg as *mut _) {
        panic!("Call to relbot_msgs__msg__RelbotMotors__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RelbotMotors {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { relbot_msgs__msg__RelbotMotors__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { relbot_msgs__msg__RelbotMotors__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { relbot_msgs__msg__RelbotMotors__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RelbotMotors {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RelbotMotors where Self: Sized {
  const TYPE_NAME: &'static str = "relbot_msgs/msg/RelbotMotors";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__relbot_msgs__msg__RelbotMotors() }
  }
}


#[link(name = "relbot_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__relbot_msgs__msg__RelbotMotorsStamped() -> *const std::ffi::c_void;
}

#[link(name = "relbot_msgs__rosidl_generator_c")]
extern "C" {
    fn relbot_msgs__msg__RelbotMotorsStamped__init(msg: *mut RelbotMotorsStamped) -> bool;
    fn relbot_msgs__msg__RelbotMotorsStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RelbotMotorsStamped>, size: usize) -> bool;
    fn relbot_msgs__msg__RelbotMotorsStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RelbotMotorsStamped>);
    fn relbot_msgs__msg__RelbotMotorsStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RelbotMotorsStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<RelbotMotorsStamped>) -> bool;
}

// Corresponds to relbot_msgs__msg__RelbotMotorsStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Stamped Motor command

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RelbotMotorsStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_cmd: super::super::msg::rmw::RelbotMotors,

}



impl Default for RelbotMotorsStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !relbot_msgs__msg__RelbotMotorsStamped__init(&mut msg as *mut _) {
        panic!("Call to relbot_msgs__msg__RelbotMotorsStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RelbotMotorsStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { relbot_msgs__msg__RelbotMotorsStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { relbot_msgs__msg__RelbotMotorsStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { relbot_msgs__msg__RelbotMotorsStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RelbotMotorsStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RelbotMotorsStamped where Self: Sized {
  const TYPE_NAME: &'static str = "relbot_msgs/msg/RelbotMotorsStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__relbot_msgs__msg__RelbotMotorsStamped() }
  }
}


