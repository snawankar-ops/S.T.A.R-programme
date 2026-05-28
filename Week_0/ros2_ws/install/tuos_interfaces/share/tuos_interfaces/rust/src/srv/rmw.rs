#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__srv__NumberGame_Request() -> *const std::ffi::c_void;
}

#[link(name = "tuos_interfaces__rosidl_generator_c")]
extern "C" {
    fn tuos_interfaces__srv__NumberGame_Request__init(msg: *mut NumberGame_Request) -> bool;
    fn tuos_interfaces__srv__NumberGame_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NumberGame_Request>, size: usize) -> bool;
    fn tuos_interfaces__srv__NumberGame_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NumberGame_Request>);
    fn tuos_interfaces__srv__NumberGame_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NumberGame_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NumberGame_Request>) -> bool;
}

// Corresponds to tuos_interfaces__srv__NumberGame_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NumberGame_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub guess: i32,

}



impl Default for NumberGame_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tuos_interfaces__srv__NumberGame_Request__init(&mut msg as *mut _) {
        panic!("Call to tuos_interfaces__srv__NumberGame_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NumberGame_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__srv__NumberGame_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__srv__NumberGame_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__srv__NumberGame_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NumberGame_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NumberGame_Request where Self: Sized {
  const TYPE_NAME: &'static str = "tuos_interfaces/srv/NumberGame_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__srv__NumberGame_Request() }
  }
}


#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__srv__NumberGame_Response() -> *const std::ffi::c_void;
}

#[link(name = "tuos_interfaces__rosidl_generator_c")]
extern "C" {
    fn tuos_interfaces__srv__NumberGame_Response__init(msg: *mut NumberGame_Response) -> bool;
    fn tuos_interfaces__srv__NumberGame_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NumberGame_Response>, size: usize) -> bool;
    fn tuos_interfaces__srv__NumberGame_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NumberGame_Response>);
    fn tuos_interfaces__srv__NumberGame_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NumberGame_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NumberGame_Response>) -> bool;
}

// Corresponds to tuos_interfaces__srv__NumberGame_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NumberGame_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub guesses: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hint: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for NumberGame_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tuos_interfaces__srv__NumberGame_Response__init(&mut msg as *mut _) {
        panic!("Call to tuos_interfaces__srv__NumberGame_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NumberGame_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__srv__NumberGame_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__srv__NumberGame_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__srv__NumberGame_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NumberGame_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NumberGame_Response where Self: Sized {
  const TYPE_NAME: &'static str = "tuos_interfaces/srv/NumberGame_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__srv__NumberGame_Response() }
  }
}






#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__tuos_interfaces__srv__NumberGame() -> *const std::ffi::c_void;
}

// Corresponds to tuos_interfaces__srv__NumberGame
#[allow(missing_docs, non_camel_case_types)]
pub struct NumberGame;

impl rosidl_runtime_rs::Service for NumberGame {
    type Request = NumberGame_Request;
    type Response = NumberGame_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__tuos_interfaces__srv__NumberGame() }
    }
}


