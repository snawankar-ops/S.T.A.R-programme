#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to part1_pubsub__msg__Example

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Example {

    // This member is not documented.
    #[allow(missing_docs)]
    pub info: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time: i32,

}



impl Default for Example {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Example::default())
  }
}

impl rosidl_runtime_rs::Message for Example {
  type RmwMsg = super::msg::rmw::Example;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: msg.info.as_str().into(),
        time: msg.time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: msg.info.as_str().into(),
      time: msg.time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: msg.info.to_string(),
      time: msg.time,
    }
  }
}


