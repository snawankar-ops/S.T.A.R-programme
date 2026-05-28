#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to tuos_interfaces__srv__NumberGame_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NumberGame_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub guess: i32,

}



impl Default for NumberGame_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::NumberGame_Request::default())
  }
}

impl rosidl_runtime_rs::Message for NumberGame_Request {
  type RmwMsg = super::srv::rmw::NumberGame_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        guess: msg.guess,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      guess: msg.guess,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      guess: msg.guess,
    }
  }
}


// Corresponds to tuos_interfaces__srv__NumberGame_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NumberGame_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub guesses: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hint: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for NumberGame_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::NumberGame_Response::default())
  }
}

impl rosidl_runtime_rs::Message for NumberGame_Response {
  type RmwMsg = super::srv::rmw::NumberGame_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        guesses: msg.guesses,
        hint: msg.hint.as_str().into(),
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      guesses: msg.guesses,
        hint: msg.hint.as_str().into(),
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      guesses: msg.guesses,
      hint: msg.hint.to_string(),
      success: msg.success,
    }
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


