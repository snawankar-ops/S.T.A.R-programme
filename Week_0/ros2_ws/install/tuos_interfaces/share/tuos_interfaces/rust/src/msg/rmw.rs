#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__msg__Num() -> *const std::ffi::c_void;
}

#[link(name = "tuos_interfaces__rosidl_generator_c")]
extern "C" {
    fn tuos_interfaces__msg__Num__init(msg: *mut Num) -> bool;
    fn tuos_interfaces__msg__Num__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Num>, size: usize) -> bool;
    fn tuos_interfaces__msg__Num__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Num>);
    fn tuos_interfaces__msg__Num__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Num>, out_seq: *mut rosidl_runtime_rs::Sequence<Num>) -> bool;
}

// Corresponds to tuos_interfaces__msg__Num
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Num {

    // This member is not documented.
    #[allow(missing_docs)]
    pub num: i64,

}



impl Default for Num {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tuos_interfaces__msg__Num__init(&mut msg as *mut _) {
        panic!("Call to tuos_interfaces__msg__Num__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Num {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__msg__Num__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__msg__Num__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__msg__Num__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Num {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Num where Self: Sized {
  const TYPE_NAME: &'static str = "tuos_interfaces/msg/Num";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__msg__Num() }
  }
}


