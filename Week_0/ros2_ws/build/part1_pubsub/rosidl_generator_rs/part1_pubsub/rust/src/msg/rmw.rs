#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "part1_pubsub__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__part1_pubsub__msg__Example() -> *const std::ffi::c_void;
}

#[link(name = "part1_pubsub__rosidl_generator_c")]
extern "C" {
    fn part1_pubsub__msg__Example__init(msg: *mut Example) -> bool;
    fn part1_pubsub__msg__Example__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Example>, size: usize) -> bool;
    fn part1_pubsub__msg__Example__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Example>);
    fn part1_pubsub__msg__Example__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Example>, out_seq: *mut rosidl_runtime_rs::Sequence<Example>) -> bool;
}

// Corresponds to part1_pubsub__msg__Example
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Example {

    // This member is not documented.
    #[allow(missing_docs)]
    pub info: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time: i32,

}



impl Default for Example {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !part1_pubsub__msg__Example__init(&mut msg as *mut _) {
        panic!("Call to part1_pubsub__msg__Example__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Example {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { part1_pubsub__msg__Example__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { part1_pubsub__msg__Example__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { part1_pubsub__msg__Example__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Example {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Example where Self: Sized {
  const TYPE_NAME: &'static str = "part1_pubsub/msg/Example";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__part1_pubsub__msg__Example() }
  }
}


