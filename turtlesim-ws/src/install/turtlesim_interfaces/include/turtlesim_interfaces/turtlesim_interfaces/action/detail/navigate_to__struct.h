// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_interfaces:action/NavigateTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_interfaces/action/navigate_to.h"


#ifndef TURTLESIM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO__STRUCT_H_
#define TURTLESIM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/NavigateTo in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__action__NavigateTo_Goal
{
  float x;
  float y;
} turtlesim_interfaces__action__NavigateTo_Goal;

// Struct for a sequence of turtlesim_interfaces__action__NavigateTo_Goal.
typedef struct turtlesim_interfaces__action__NavigateTo_Goal__Sequence
{
  turtlesim_interfaces__action__NavigateTo_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__action__NavigateTo_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/NavigateTo in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__action__NavigateTo_Result
{
  bool state;
} turtlesim_interfaces__action__NavigateTo_Result;

// Struct for a sequence of turtlesim_interfaces__action__NavigateTo_Result.
typedef struct turtlesim_interfaces__action__NavigateTo_Result__Sequence
{
  turtlesim_interfaces__action__NavigateTo_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__action__NavigateTo_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/NavigateTo in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__action__NavigateTo_Feedback
{
  float x;
  float y;
} turtlesim_interfaces__action__NavigateTo_Feedback;

// Struct for a sequence of turtlesim_interfaces__action__NavigateTo_Feedback.
typedef struct turtlesim_interfaces__action__NavigateTo_Feedback__Sequence
{
  turtlesim_interfaces__action__NavigateTo_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__action__NavigateTo_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "turtlesim_interfaces/action/detail/navigate_to__struct.h"

/// Struct defined in action/NavigateTo in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__action__NavigateTo_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtlesim_interfaces__action__NavigateTo_Goal goal;
} turtlesim_interfaces__action__NavigateTo_SendGoal_Request;

// Struct for a sequence of turtlesim_interfaces__action__NavigateTo_SendGoal_Request.
typedef struct turtlesim_interfaces__action__NavigateTo_SendGoal_Request__Sequence
{
  turtlesim_interfaces__action__NavigateTo_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__action__NavigateTo_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavigateTo in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__action__NavigateTo_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} turtlesim_interfaces__action__NavigateTo_SendGoal_Response;

// Struct for a sequence of turtlesim_interfaces__action__NavigateTo_SendGoal_Response.
typedef struct turtlesim_interfaces__action__NavigateTo_SendGoal_Response__Sequence
{
  turtlesim_interfaces__action__NavigateTo_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__action__NavigateTo_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  turtlesim_interfaces__action__NavigateTo_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  turtlesim_interfaces__action__NavigateTo_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/NavigateTo in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__action__NavigateTo_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  turtlesim_interfaces__action__NavigateTo_SendGoal_Request__Sequence request;
  turtlesim_interfaces__action__NavigateTo_SendGoal_Response__Sequence response;
} turtlesim_interfaces__action__NavigateTo_SendGoal_Event;

// Struct for a sequence of turtlesim_interfaces__action__NavigateTo_SendGoal_Event.
typedef struct turtlesim_interfaces__action__NavigateTo_SendGoal_Event__Sequence
{
  turtlesim_interfaces__action__NavigateTo_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__action__NavigateTo_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavigateTo in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__action__NavigateTo_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} turtlesim_interfaces__action__NavigateTo_GetResult_Request;

// Struct for a sequence of turtlesim_interfaces__action__NavigateTo_GetResult_Request.
typedef struct turtlesim_interfaces__action__NavigateTo_GetResult_Request__Sequence
{
  turtlesim_interfaces__action__NavigateTo_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__action__NavigateTo_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "turtlesim_interfaces/action/detail/navigate_to__struct.h"

/// Struct defined in action/NavigateTo in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__action__NavigateTo_GetResult_Response
{
  int8_t status;
  turtlesim_interfaces__action__NavigateTo_Result result;
} turtlesim_interfaces__action__NavigateTo_GetResult_Response;

// Struct for a sequence of turtlesim_interfaces__action__NavigateTo_GetResult_Response.
typedef struct turtlesim_interfaces__action__NavigateTo_GetResult_Response__Sequence
{
  turtlesim_interfaces__action__NavigateTo_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__action__NavigateTo_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  turtlesim_interfaces__action__NavigateTo_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  turtlesim_interfaces__action__NavigateTo_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/NavigateTo in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__action__NavigateTo_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  turtlesim_interfaces__action__NavigateTo_GetResult_Request__Sequence request;
  turtlesim_interfaces__action__NavigateTo_GetResult_Response__Sequence response;
} turtlesim_interfaces__action__NavigateTo_GetResult_Event;

// Struct for a sequence of turtlesim_interfaces__action__NavigateTo_GetResult_Event.
typedef struct turtlesim_interfaces__action__NavigateTo_GetResult_Event__Sequence
{
  turtlesim_interfaces__action__NavigateTo_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__action__NavigateTo_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "turtlesim_interfaces/action/detail/navigate_to__struct.h"

/// Struct defined in action/NavigateTo in the package turtlesim_interfaces.
typedef struct turtlesim_interfaces__action__NavigateTo_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtlesim_interfaces__action__NavigateTo_Feedback feedback;
} turtlesim_interfaces__action__NavigateTo_FeedbackMessage;

// Struct for a sequence of turtlesim_interfaces__action__NavigateTo_FeedbackMessage.
typedef struct turtlesim_interfaces__action__NavigateTo_FeedbackMessage__Sequence
{
  turtlesim_interfaces__action__NavigateTo_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_interfaces__action__NavigateTo_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_INTERFACES__ACTION__DETAIL__NAVIGATE_TO__STRUCT_H_
