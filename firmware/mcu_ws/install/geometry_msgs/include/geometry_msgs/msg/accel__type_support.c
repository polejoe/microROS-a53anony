// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geometry_msgs:msg/Accel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geometry_msgs/msg/accel__rosidl_typesupport_introspection_c.h"
#include "geometry_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geometry_msgs/msg/accel__struct.h"


// Include directives for member types
// Member `linear`
// Member `angular`
#include "geometry_msgs/msg/vector3.h"
// Member `linear`
// Member `angular`
#include "geometry_msgs/msg/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Accel__rosidl_typesupport_introspection_c__Accel_message_member_array[2] = {
  {
    "linear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__Accel, linear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__Accel, angular),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Accel__rosidl_typesupport_introspection_c__Accel_message_members = {
  "geometry_msgs__msg",  // message namespace
  "Accel",  // message name
  2,  // number of fields
  sizeof(geometry_msgs__msg__Accel),
  Accel__rosidl_typesupport_introspection_c__Accel_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Accel__rosidl_typesupport_introspection_c__Accel_message_type_support_handle = {
  0,
  &Accel__rosidl_typesupport_introspection_c__Accel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Accel)() {
  Accel__rosidl_typesupport_introspection_c__Accel_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  Accel__rosidl_typesupport_introspection_c__Accel_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!Accel__rosidl_typesupport_introspection_c__Accel_message_type_support_handle.typesupport_identifier) {
    Accel__rosidl_typesupport_introspection_c__Accel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Accel__rosidl_typesupport_introspection_c__Accel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
