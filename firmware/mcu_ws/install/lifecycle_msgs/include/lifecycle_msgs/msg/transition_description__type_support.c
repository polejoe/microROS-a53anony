// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lifecycle_msgs:msg/TransitionDescription.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lifecycle_msgs/msg/transition_description__rosidl_typesupport_introspection_c.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lifecycle_msgs/msg/transition_description__struct.h"


// Include directives for member types
// Member `transition`
#include "lifecycle_msgs/msg/transition.h"
// Member `transition`
#include "lifecycle_msgs/msg/transition__rosidl_typesupport_introspection_c.h"
// Member `start_state`
// Member `goal_state`
#include "lifecycle_msgs/msg/state.h"
// Member `start_state`
// Member `goal_state`
#include "lifecycle_msgs/msg/state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember TransitionDescription__rosidl_typesupport_introspection_c__TransitionDescription_message_member_array[3] = {
  {
    "transition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lifecycle_msgs__msg__TransitionDescription, transition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lifecycle_msgs__msg__TransitionDescription, start_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lifecycle_msgs__msg__TransitionDescription, goal_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TransitionDescription__rosidl_typesupport_introspection_c__TransitionDescription_message_members = {
  "lifecycle_msgs__msg",  // message namespace
  "TransitionDescription",  // message name
  3,  // number of fields
  sizeof(lifecycle_msgs__msg__TransitionDescription),
  TransitionDescription__rosidl_typesupport_introspection_c__TransitionDescription_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TransitionDescription__rosidl_typesupport_introspection_c__TransitionDescription_message_type_support_handle = {
  0,
  &TransitionDescription__rosidl_typesupport_introspection_c__TransitionDescription_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lifecycle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, msg, TransitionDescription)() {
  TransitionDescription__rosidl_typesupport_introspection_c__TransitionDescription_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, msg, Transition)();
  TransitionDescription__rosidl_typesupport_introspection_c__TransitionDescription_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, msg, State)();
  TransitionDescription__rosidl_typesupport_introspection_c__TransitionDescription_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, msg, State)();
  if (!TransitionDescription__rosidl_typesupport_introspection_c__TransitionDescription_message_type_support_handle.typesupport_identifier) {
    TransitionDescription__rosidl_typesupport_introspection_c__TransitionDescription_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TransitionDescription__rosidl_typesupport_introspection_c__TransitionDescription_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
