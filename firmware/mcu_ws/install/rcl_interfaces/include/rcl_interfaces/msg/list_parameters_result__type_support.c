// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rcl_interfaces:msg/ListParametersResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rcl_interfaces/msg/list_parameters_result__rosidl_typesupport_introspection_c.h"
#include "rcl_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rcl_interfaces/msg/list_parameters_result__struct.h"


// Include directives for member types
// Member `names`
// Member `prefixes`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ListParametersResult__rosidl_typesupport_introspection_c__ListParametersResult_message_member_array[2] = {
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__ListParametersResult, names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prefixes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rcl_interfaces__msg__ListParametersResult, prefixes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ListParametersResult__rosidl_typesupport_introspection_c__ListParametersResult_message_members = {
  "rcl_interfaces__msg",  // message namespace
  "ListParametersResult",  // message name
  2,  // number of fields
  sizeof(rcl_interfaces__msg__ListParametersResult),
  ListParametersResult__rosidl_typesupport_introspection_c__ListParametersResult_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ListParametersResult__rosidl_typesupport_introspection_c__ListParametersResult_message_type_support_handle = {
  0,
  &ListParametersResult__rosidl_typesupport_introspection_c__ListParametersResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ListParametersResult)() {
  if (!ListParametersResult__rosidl_typesupport_introspection_c__ListParametersResult_message_type_support_handle.typesupport_identifier) {
    ListParametersResult__rosidl_typesupport_introspection_c__ListParametersResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ListParametersResult__rosidl_typesupport_introspection_c__ListParametersResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
