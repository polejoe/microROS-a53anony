// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from std_msgs:msg/Int32MultiArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "std_msgs/msg/int32_multi_array__rosidl_typesupport_introspection_c.h"
#include "std_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "std_msgs/msg/int32_multi_array__struct.h"


// Include directives for member types
// Member `layout`
#include "std_msgs/msg/multi_array_layout.h"
// Member `layout`
#include "std_msgs/msg/multi_array_layout__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Int32MultiArray__rosidl_typesupport_introspection_c__Int32MultiArray_message_member_array[2] = {
  {
    "layout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__Int32MultiArray, layout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__Int32MultiArray, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Int32MultiArray__rosidl_typesupport_introspection_c__Int32MultiArray_message_members = {
  "std_msgs__msg",  // message namespace
  "Int32MultiArray",  // message name
  2,  // number of fields
  sizeof(std_msgs__msg__Int32MultiArray),
  Int32MultiArray__rosidl_typesupport_introspection_c__Int32MultiArray_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Int32MultiArray__rosidl_typesupport_introspection_c__Int32MultiArray_message_type_support_handle = {
  0,
  &Int32MultiArray__rosidl_typesupport_introspection_c__Int32MultiArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int32MultiArray)() {
  Int32MultiArray__rosidl_typesupport_introspection_c__Int32MultiArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, MultiArrayLayout)();
  if (!Int32MultiArray__rosidl_typesupport_introspection_c__Int32MultiArray_message_type_support_handle.typesupport_identifier) {
    Int32MultiArray__rosidl_typesupport_introspection_c__Int32MultiArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Int32MultiArray__rosidl_typesupport_introspection_c__Int32MultiArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
