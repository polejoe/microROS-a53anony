// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "shape_msgs/msg/plane__rosidl_typesupport_introspection_c.h"
#include "shape_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "shape_msgs/msg/plane__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Plane__rosidl_typesupport_introspection_c__Plane_message_member_array[1] = {
  {
    "coef",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(shape_msgs__msg__Plane, coef),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Plane__rosidl_typesupport_introspection_c__Plane_message_members = {
  "shape_msgs__msg",  // message namespace
  "Plane",  // message name
  1,  // number of fields
  sizeof(shape_msgs__msg__Plane),
  Plane__rosidl_typesupport_introspection_c__Plane_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Plane__rosidl_typesupport_introspection_c__Plane_message_type_support_handle = {
  0,
  &Plane__rosidl_typesupport_introspection_c__Plane_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_shape_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Plane)() {
  if (!Plane__rosidl_typesupport_introspection_c__Plane_message_type_support_handle.typesupport_identifier) {
    Plane__rosidl_typesupport_introspection_c__Plane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Plane__rosidl_typesupport_introspection_c__Plane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
