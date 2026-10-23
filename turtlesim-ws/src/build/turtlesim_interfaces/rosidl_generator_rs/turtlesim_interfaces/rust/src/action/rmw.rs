
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_Goal() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtlesim_interfaces__action__NavigateTo_Goal__init(msg: *mut NavigateTo_Goal) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_Goal>, size: usize) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_Goal>);
    fn turtlesim_interfaces__action__NavigateTo_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTo_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_Goal>) -> bool;
}

// Corresponds to turtlesim_interfaces__action__NavigateTo_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTo_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,

}



impl Default for NavigateTo_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim_interfaces__action__NavigateTo_Goal__init(&mut msg as *mut _) {
        panic!("Call to turtlesim_interfaces__action__NavigateTo_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTo_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTo_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTo_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim_interfaces/action/NavigateTo_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_Goal() }
  }
}


#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_Result() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtlesim_interfaces__action__NavigateTo_Result__init(msg: *mut NavigateTo_Result) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_Result>, size: usize) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_Result>);
    fn turtlesim_interfaces__action__NavigateTo_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTo_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_Result>) -> bool;
}

// Corresponds to turtlesim_interfaces__action__NavigateTo_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTo_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: bool,

}



impl Default for NavigateTo_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim_interfaces__action__NavigateTo_Result__init(&mut msg as *mut _) {
        panic!("Call to turtlesim_interfaces__action__NavigateTo_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTo_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTo_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTo_Result where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim_interfaces/action/NavigateTo_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_Result() }
  }
}


#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtlesim_interfaces__action__NavigateTo_Feedback__init(msg: *mut NavigateTo_Feedback) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_Feedback>, size: usize) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_Feedback>);
    fn turtlesim_interfaces__action__NavigateTo_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTo_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_Feedback>) -> bool;
}

// Corresponds to turtlesim_interfaces__action__NavigateTo_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTo_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,

}



impl Default for NavigateTo_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim_interfaces__action__NavigateTo_Feedback__init(&mut msg as *mut _) {
        panic!("Call to turtlesim_interfaces__action__NavigateTo_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTo_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTo_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTo_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim_interfaces/action/NavigateTo_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_Feedback() }
  }
}


#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtlesim_interfaces__action__NavigateTo_FeedbackMessage__init(msg: *mut NavigateTo_FeedbackMessage) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_FeedbackMessage>, size: usize) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_FeedbackMessage>);
    fn turtlesim_interfaces__action__NavigateTo_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTo_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_FeedbackMessage>) -> bool;
}

// Corresponds to turtlesim_interfaces__action__NavigateTo_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTo_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::NavigateTo_Feedback,

}



impl Default for NavigateTo_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim_interfaces__action__NavigateTo_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to turtlesim_interfaces__action__NavigateTo_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTo_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTo_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTo_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim_interfaces/action/NavigateTo_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_FeedbackMessage() }
  }
}




#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtlesim_interfaces__action__NavigateTo_SendGoal_Request__init(msg: *mut NavigateTo_SendGoal_Request) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_SendGoal_Request>, size: usize) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_SendGoal_Request>);
    fn turtlesim_interfaces__action__NavigateTo_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTo_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_SendGoal_Request>) -> bool;
}

// Corresponds to turtlesim_interfaces__action__NavigateTo_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTo_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::NavigateTo_Goal,

}



impl Default for NavigateTo_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim_interfaces__action__NavigateTo_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to turtlesim_interfaces__action__NavigateTo_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTo_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTo_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTo_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim_interfaces/action/NavigateTo_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_SendGoal_Request() }
  }
}


#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtlesim_interfaces__action__NavigateTo_SendGoal_Response__init(msg: *mut NavigateTo_SendGoal_Response) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_SendGoal_Response>, size: usize) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_SendGoal_Response>);
    fn turtlesim_interfaces__action__NavigateTo_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTo_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_SendGoal_Response>) -> bool;
}

// Corresponds to turtlesim_interfaces__action__NavigateTo_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTo_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for NavigateTo_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim_interfaces__action__NavigateTo_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to turtlesim_interfaces__action__NavigateTo_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTo_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTo_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTo_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim_interfaces/action/NavigateTo_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_SendGoal_Response() }
  }
}


#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtlesim_interfaces__action__NavigateTo_GetResult_Request__init(msg: *mut NavigateTo_GetResult_Request) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_GetResult_Request>, size: usize) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_GetResult_Request>);
    fn turtlesim_interfaces__action__NavigateTo_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTo_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_GetResult_Request>) -> bool;
}

// Corresponds to turtlesim_interfaces__action__NavigateTo_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTo_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for NavigateTo_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim_interfaces__action__NavigateTo_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to turtlesim_interfaces__action__NavigateTo_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTo_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTo_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTo_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim_interfaces/action/NavigateTo_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_GetResult_Request() }
  }
}


#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtlesim_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtlesim_interfaces__action__NavigateTo_GetResult_Response__init(msg: *mut NavigateTo_GetResult_Response) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_GetResult_Response>, size: usize) -> bool;
    fn turtlesim_interfaces__action__NavigateTo_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_GetResult_Response>);
    fn turtlesim_interfaces__action__NavigateTo_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigateTo_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigateTo_GetResult_Response>) -> bool;
}

// Corresponds to turtlesim_interfaces__action__NavigateTo_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigateTo_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::NavigateTo_Result,

}



impl Default for NavigateTo_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtlesim_interfaces__action__NavigateTo_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to turtlesim_interfaces__action__NavigateTo_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigateTo_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtlesim_interfaces__action__NavigateTo_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigateTo_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigateTo_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtlesim_interfaces/action/NavigateTo_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtlesim_interfaces__action__NavigateTo_GetResult_Response() }
  }
}






#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtlesim_interfaces__action__NavigateTo_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to turtlesim_interfaces__action__NavigateTo_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateTo_SendGoal;

impl rosidl_runtime_rs::Service for NavigateTo_SendGoal {
    type Request = NavigateTo_SendGoal_Request;
    type Response = NavigateTo_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtlesim_interfaces__action__NavigateTo_SendGoal() }
    }
}




#[link(name = "turtlesim_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtlesim_interfaces__action__NavigateTo_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to turtlesim_interfaces__action__NavigateTo_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct NavigateTo_GetResult;

impl rosidl_runtime_rs::Service for NavigateTo_GetResult {
    type Request = NavigateTo_GetResult_Request;
    type Response = NavigateTo_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtlesim_interfaces__action__NavigateTo_GetResult() }
    }
}


