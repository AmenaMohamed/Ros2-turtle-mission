#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to turtlesim_interfaces__srv__SetDestination_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDestination_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,

}



impl Default for SetDestination_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetDestination_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetDestination_Request {
  type RmwMsg = super::srv::rmw::SetDestination_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
    }
  }
}


// Corresponds to turtlesim_interfaces__srv__SetDestination_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDestination_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reply: bool,

}



impl Default for SetDestination_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetDestination_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetDestination_Response {
  type RmwMsg = super::srv::rmw::SetDestination_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        reply: msg.reply,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      reply: msg.reply,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      reply: msg.reply,
    }
  }
}






#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtlesim_interfaces__srv__SetDestination() -> *const std::ffi::c_void;
}

// Corresponds to turtlesim_interfaces__srv__SetDestination
#[allow(missing_docs, non_camel_case_types)]
pub struct SetDestination;

impl rosidl_runtime_rs::Service for SetDestination {
    type Request = SetDestination_Request;
    type Response = SetDestination_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtlesim_interfaces__srv__SetDestination() }
    }
}


