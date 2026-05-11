#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "xrf2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xrf2_msgs__msg__Ros2Xeno() -> *const std::ffi::c_void;
}

#[link(name = "xrf2_msgs__rosidl_generator_c")]
extern "C" {
    fn xrf2_msgs__msg__Ros2Xeno__init(msg: *mut Ros2Xeno) -> bool;
    fn xrf2_msgs__msg__Ros2Xeno__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Ros2Xeno>, size: usize) -> bool;
    fn xrf2_msgs__msg__Ros2Xeno__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Ros2Xeno>);
    fn xrf2_msgs__msg__Ros2Xeno__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Ros2Xeno>, out_seq: *mut rosidl_runtime_rs::Sequence<Ros2Xeno>) -> bool;
}

// Corresponds to xrf2_msgs__msg__Ros2Xeno
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Ros2Xeno {

    // This member is not documented.
    #[allow(missing_docs)]
    pub left_wheel_vel: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub right_wheel_vel: f64,

}



impl Default for Ros2Xeno {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xrf2_msgs__msg__Ros2Xeno__init(&mut msg as *mut _) {
        panic!("Call to xrf2_msgs__msg__Ros2Xeno__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Ros2Xeno {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xrf2_msgs__msg__Ros2Xeno__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xrf2_msgs__msg__Ros2Xeno__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xrf2_msgs__msg__Ros2Xeno__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Ros2Xeno {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Ros2Xeno where Self: Sized {
  const TYPE_NAME: &'static str = "xrf2_msgs/msg/Ros2Xeno";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xrf2_msgs__msg__Ros2Xeno() }
  }
}


#[link(name = "xrf2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xrf2_msgs__msg__Xeno2Ros() -> *const std::ffi::c_void;
}

#[link(name = "xrf2_msgs__rosidl_generator_c")]
extern "C" {
    fn xrf2_msgs__msg__Xeno2Ros__init(msg: *mut Xeno2Ros) -> bool;
    fn xrf2_msgs__msg__Xeno2Ros__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Xeno2Ros>, size: usize) -> bool;
    fn xrf2_msgs__msg__Xeno2Ros__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Xeno2Ros>);
    fn xrf2_msgs__msg__Xeno2Ros__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Xeno2Ros>, out_seq: *mut rosidl_runtime_rs::Sequence<Xeno2Ros>) -> bool;
}

// Corresponds to xrf2_msgs__msg__Xeno2Ros
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Xeno2Ros {

    // This member is not documented.
    #[allow(missing_docs)]
    pub example_c: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub example_d: f64,

}



impl Default for Xeno2Ros {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xrf2_msgs__msg__Xeno2Ros__init(&mut msg as *mut _) {
        panic!("Call to xrf2_msgs__msg__Xeno2Ros__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Xeno2Ros {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xrf2_msgs__msg__Xeno2Ros__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xrf2_msgs__msg__Xeno2Ros__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xrf2_msgs__msg__Xeno2Ros__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Xeno2Ros {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Xeno2Ros where Self: Sized {
  const TYPE_NAME: &'static str = "xrf2_msgs/msg/Xeno2Ros";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xrf2_msgs__msg__Xeno2Ros() }
  }
}


