#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__srv__SetDestination_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtlesim_interfaces__srv__SetDestination_Request__init(msg: *mut SetDestination_Request) -> bool;
    fn turtlesim_interfaces__srv__SetDestination_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetDestination_Request>, size: usize) -> bool;
    fn turtlesim_interfaces__srv__SetDestination_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetDestination_Request>);
    fn turtlesim_interfaces__srv__SetDestination_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetDestination_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetDestination_Request>) -> bool;
}

// Corresponds to turtlesim_interfaces__srv__SetDestination_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim_interfaces__srv__SetDestination_Request__init(&mut msg as *mut _) {
        panic!("Call to turtlesim_interfaces__srv__SetDestination_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetDestination_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__srv__SetDestination_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__srv__SetDestination_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__srv__SetDestination_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetDestination_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetDestination_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim_interfaces/srv/SetDestination_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__srv__SetDestination_Request() }
  }
}


#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__srv__SetDestination_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtlesim_interfaces__srv__SetDestination_Response__init(msg: *mut SetDestination_Response) -> bool;
    fn turtlesim_interfaces__srv__SetDestination_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetDestination_Response>, size: usize) -> bool;
    fn turtlesim_interfaces__srv__SetDestination_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetDestination_Response>);
    fn turtlesim_interfaces__srv__SetDestination_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetDestination_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetDestination_Response>) -> bool;
}

// Corresponds to turtlesim_interfaces__srv__SetDestination_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetDestination_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reply: bool,

}



impl Default for SetDestination_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim_interfaces__srv__SetDestination_Response__init(&mut msg as *mut _) {
        panic!("Call to turtlesim_interfaces__srv__SetDestination_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetDestination_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__srv__SetDestination_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__srv__SetDestination_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__srv__SetDestination_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetDestination_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetDestination_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim_interfaces/srv/SetDestination_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__srv__SetDestination_Response() }
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


