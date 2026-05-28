
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_Goal() -> *const std::ffi::c_void;
}

#[link(name = "tuos_interfaces__rosidl_generator_c")]
extern "C" {
    fn tuos_interfaces__action__CameraSweep_Goal__init(msg: *mut CameraSweep_Goal) -> bool;
    fn tuos_interfaces__action__CameraSweep_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_Goal>, size: usize) -> bool;
    fn tuos_interfaces__action__CameraSweep_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_Goal>);
    fn tuos_interfaces__action__CameraSweep_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraSweep_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_Goal>) -> bool;
}

// Corresponds to tuos_interfaces__action__CameraSweep_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraSweep_Goal {
    /// Angular sweep (in degrees) over which to capture images
    pub sweep_angle: f32,

    /// Number of images to capture during the sweep
    pub image_count: i32,

}



impl Default for CameraSweep_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tuos_interfaces__action__CameraSweep_Goal__init(&mut msg as *mut _) {
        panic!("Call to tuos_interfaces__action__CameraSweep_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraSweep_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraSweep_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraSweep_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "tuos_interfaces/action/CameraSweep_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_Goal() }
  }
}


#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_Result() -> *const std::ffi::c_void;
}

#[link(name = "tuos_interfaces__rosidl_generator_c")]
extern "C" {
    fn tuos_interfaces__action__CameraSweep_Result__init(msg: *mut CameraSweep_Result) -> bool;
    fn tuos_interfaces__action__CameraSweep_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_Result>, size: usize) -> bool;
    fn tuos_interfaces__action__CameraSweep_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_Result>);
    fn tuos_interfaces__action__CameraSweep_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraSweep_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_Result>) -> bool;
}

// Corresponds to tuos_interfaces__action__CameraSweep_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraSweep_Result {
    /// Full path to each of the captured images
    pub image_paths: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for CameraSweep_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tuos_interfaces__action__CameraSweep_Result__init(&mut msg as *mut _) {
        panic!("Call to tuos_interfaces__action__CameraSweep_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraSweep_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraSweep_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraSweep_Result where Self: Sized {
  const TYPE_NAME: &'static str = "tuos_interfaces/action/CameraSweep_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_Result() }
  }
}


#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "tuos_interfaces__rosidl_generator_c")]
extern "C" {
    fn tuos_interfaces__action__CameraSweep_Feedback__init(msg: *mut CameraSweep_Feedback) -> bool;
    fn tuos_interfaces__action__CameraSweep_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_Feedback>, size: usize) -> bool;
    fn tuos_interfaces__action__CameraSweep_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_Feedback>);
    fn tuos_interfaces__action__CameraSweep_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraSweep_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_Feedback>) -> bool;
}

// Corresponds to tuos_interfaces__action__CameraSweep_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraSweep_Feedback {
    /// Number of images taken
    pub current_image: i32,

    /// Current angular position of the robot (in degrees)
    pub current_angle: f32,

}



impl Default for CameraSweep_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tuos_interfaces__action__CameraSweep_Feedback__init(&mut msg as *mut _) {
        panic!("Call to tuos_interfaces__action__CameraSweep_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraSweep_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraSweep_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraSweep_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "tuos_interfaces/action/CameraSweep_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_Feedback() }
  }
}


#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "tuos_interfaces__rosidl_generator_c")]
extern "C" {
    fn tuos_interfaces__action__CameraSweep_FeedbackMessage__init(msg: *mut CameraSweep_FeedbackMessage) -> bool;
    fn tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_FeedbackMessage>, size: usize) -> bool;
    fn tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_FeedbackMessage>);
    fn tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraSweep_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_FeedbackMessage>) -> bool;
}

// Corresponds to tuos_interfaces__action__CameraSweep_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraSweep_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::CameraSweep_Feedback,

}



impl Default for CameraSweep_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tuos_interfaces__action__CameraSweep_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to tuos_interfaces__action__CameraSweep_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraSweep_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraSweep_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraSweep_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "tuos_interfaces/action/CameraSweep_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_FeedbackMessage() }
  }
}




#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "tuos_interfaces__rosidl_generator_c")]
extern "C" {
    fn tuos_interfaces__action__CameraSweep_SendGoal_Request__init(msg: *mut CameraSweep_SendGoal_Request) -> bool;
    fn tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_SendGoal_Request>, size: usize) -> bool;
    fn tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_SendGoal_Request>);
    fn tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraSweep_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_SendGoal_Request>) -> bool;
}

// Corresponds to tuos_interfaces__action__CameraSweep_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraSweep_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::CameraSweep_Goal,

}



impl Default for CameraSweep_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tuos_interfaces__action__CameraSweep_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to tuos_interfaces__action__CameraSweep_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraSweep_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraSweep_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraSweep_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "tuos_interfaces/action/CameraSweep_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_SendGoal_Request() }
  }
}


#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "tuos_interfaces__rosidl_generator_c")]
extern "C" {
    fn tuos_interfaces__action__CameraSweep_SendGoal_Response__init(msg: *mut CameraSweep_SendGoal_Response) -> bool;
    fn tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_SendGoal_Response>, size: usize) -> bool;
    fn tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_SendGoal_Response>);
    fn tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraSweep_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_SendGoal_Response>) -> bool;
}

// Corresponds to tuos_interfaces__action__CameraSweep_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraSweep_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for CameraSweep_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tuos_interfaces__action__CameraSweep_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to tuos_interfaces__action__CameraSweep_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraSweep_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraSweep_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraSweep_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "tuos_interfaces/action/CameraSweep_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_SendGoal_Response() }
  }
}


#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "tuos_interfaces__rosidl_generator_c")]
extern "C" {
    fn tuos_interfaces__action__CameraSweep_GetResult_Request__init(msg: *mut CameraSweep_GetResult_Request) -> bool;
    fn tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_GetResult_Request>, size: usize) -> bool;
    fn tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_GetResult_Request>);
    fn tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraSweep_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_GetResult_Request>) -> bool;
}

// Corresponds to tuos_interfaces__action__CameraSweep_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraSweep_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for CameraSweep_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tuos_interfaces__action__CameraSweep_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to tuos_interfaces__action__CameraSweep_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraSweep_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraSweep_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraSweep_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "tuos_interfaces/action/CameraSweep_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_GetResult_Request() }
  }
}


#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "tuos_interfaces__rosidl_generator_c")]
extern "C" {
    fn tuos_interfaces__action__CameraSweep_GetResult_Response__init(msg: *mut CameraSweep_GetResult_Response) -> bool;
    fn tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_GetResult_Response>, size: usize) -> bool;
    fn tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_GetResult_Response>);
    fn tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraSweep_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraSweep_GetResult_Response>) -> bool;
}

// Corresponds to tuos_interfaces__action__CameraSweep_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraSweep_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::CameraSweep_Result,

}



impl Default for CameraSweep_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tuos_interfaces__action__CameraSweep_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to tuos_interfaces__action__CameraSweep_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraSweep_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tuos_interfaces__action__CameraSweep_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraSweep_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraSweep_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "tuos_interfaces/action/CameraSweep_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tuos_interfaces__action__CameraSweep_GetResult_Response() }
  }
}






#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__tuos_interfaces__action__CameraSweep_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to tuos_interfaces__action__CameraSweep_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct CameraSweep_SendGoal;

impl rosidl_runtime_rs::Service for CameraSweep_SendGoal {
    type Request = CameraSweep_SendGoal_Request;
    type Response = CameraSweep_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__tuos_interfaces__action__CameraSweep_SendGoal() }
    }
}




#[link(name = "tuos_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__tuos_interfaces__action__CameraSweep_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to tuos_interfaces__action__CameraSweep_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct CameraSweep_GetResult;

impl rosidl_runtime_rs::Service for CameraSweep_GetResult {
    type Request = CameraSweep_GetResult_Request;
    type Response = CameraSweep_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__tuos_interfaces__action__CameraSweep_GetResult() }
    }
}


