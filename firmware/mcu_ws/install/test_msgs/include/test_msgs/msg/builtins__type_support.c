// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_msgs:msg/Builtins.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_msgs/msg/builtins__rosidl_typesupport_introspection_c.h"
#include "test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_msgs/msg/builtins__struct.h"


// Include directives for member types
// Member `duration_value`
#include "builtin_interfaces/msg/duration.h"
// Member `duration_value`
#include "builtin_interfaces/msg/duration__rosidl_typesupport_introspection_c.h"
// Member `time_value`
#include "builtin_interfaces/msg/time.h"
// Member `time_value`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Builtins__rosidl_typesupport_introspection_c__Builtins_message_member_array[2] = {
  {
    "duration_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Builtins, duration_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__Builtins, time_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Builtins__rosidl_typesupport_introspection_c__Builtins_message_members = {
  "test_msgs__msg",  // message namespace
  "Builtins",  // message name
  2,  // number of fields
  sizeof(test_msgs__msg__Builtins),
  Builtins__rosidl_typesupport_introspection_c__Builtins_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Builtins__rosidl_typesupport_introspection_c__Builtins_message_type_support_handle = {
  0,
  &Builtins__rosidl_typesupport_introspection_c__Builtins_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Builtins)() {
  Builtins__rosidl_typesupport_introspection_c__Builtins_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  Builtins__rosidl_typesupport_introspection_c__Builtins_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Builtins__rosidl_typesupport_introspection_c__Builtins_message_type_support_handle.typesupport_identifier) {
    Builtins__rosidl_typesupport_introspection_c__Builtins_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Builtins__rosidl_typesupport_introspection_c__Builtins_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
