// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_msgs:msg/BoundedSequences.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_msgs/msg/bounded_sequences__rosidl_typesupport_introspection_c.h"
#include "test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_msgs/msg/bounded_sequences__struct.h"


// Include directives for member types
// Member `bool_values`
// Member `byte_values`
// Member `char_values`
// Member `float32_values`
// Member `float64_values`
// Member `int8_values`
// Member `uint8_values`
// Member `int16_values`
// Member `uint16_values`
// Member `int32_values`
// Member `uint32_values`
// Member `int64_values`
// Member `uint64_values`
// Member `bool_values_default`
// Member `byte_values_default`
// Member `char_values_default`
// Member `float32_values_default`
// Member `float64_values_default`
// Member `int8_values_default`
// Member `uint8_values_default`
// Member `int16_values_default`
// Member `uint16_values_default`
// Member `int32_values_default`
// Member `uint32_values_default`
// Member `int64_values_default`
// Member `uint64_values_default`
#include "rosidl_generator_c/primitives_sequence_functions.h"
// Member `string_values`
// Member `string_values_default`
#include "rosidl_generator_c/string_functions.h"
// Member `basic_types_values`
#include "test_msgs/msg/basic_types.h"
// Member `basic_types_values`
#include "test_msgs/msg/basic_types__rosidl_typesupport_introspection_c.h"
// Member `constants_values`
#include "test_msgs/msg/constants.h"
// Member `constants_values`
#include "test_msgs/msg/constants__rosidl_typesupport_introspection_c.h"
// Member `defaults_values`
#include "test_msgs/msg/defaults.h"
// Member `defaults_values`
#include "test_msgs/msg/defaults__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t BoundedSequences__rosidl_typesupport_introspection_c__size_function__BasicTypes__basic_types_values(
  const void * untyped_member)
{
  const test_msgs__msg__BasicTypes__Sequence * member =
    (const test_msgs__msg__BasicTypes__Sequence *)(untyped_member);
  return member->size;
}

const void * BoundedSequences__rosidl_typesupport_introspection_c__get_const_function__BasicTypes__basic_types_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__BasicTypes__Sequence * member =
    (const test_msgs__msg__BasicTypes__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BoundedSequences__rosidl_typesupport_introspection_c__get_function__BasicTypes__basic_types_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__BasicTypes__Sequence * member =
    (test_msgs__msg__BasicTypes__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BoundedSequences__rosidl_typesupport_introspection_c__resize_function__BasicTypes__basic_types_values(
  void * untyped_member, size_t size)
{
  test_msgs__msg__BasicTypes__Sequence * member =
    (test_msgs__msg__BasicTypes__Sequence *)(untyped_member);
  test_msgs__msg__BasicTypes__Sequence__fini(member);
  return test_msgs__msg__BasicTypes__Sequence__init(member, size);
}

size_t BoundedSequences__rosidl_typesupport_introspection_c__size_function__Constants__constants_values(
  const void * untyped_member)
{
  const test_msgs__msg__Constants__Sequence * member =
    (const test_msgs__msg__Constants__Sequence *)(untyped_member);
  return member->size;
}

const void * BoundedSequences__rosidl_typesupport_introspection_c__get_const_function__Constants__constants_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Constants__Sequence * member =
    (const test_msgs__msg__Constants__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BoundedSequences__rosidl_typesupport_introspection_c__get_function__Constants__constants_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Constants__Sequence * member =
    (test_msgs__msg__Constants__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BoundedSequences__rosidl_typesupport_introspection_c__resize_function__Constants__constants_values(
  void * untyped_member, size_t size)
{
  test_msgs__msg__Constants__Sequence * member =
    (test_msgs__msg__Constants__Sequence *)(untyped_member);
  test_msgs__msg__Constants__Sequence__fini(member);
  return test_msgs__msg__Constants__Sequence__init(member, size);
}

size_t BoundedSequences__rosidl_typesupport_introspection_c__size_function__Defaults__defaults_values(
  const void * untyped_member)
{
  const test_msgs__msg__Defaults__Sequence * member =
    (const test_msgs__msg__Defaults__Sequence *)(untyped_member);
  return member->size;
}

const void * BoundedSequences__rosidl_typesupport_introspection_c__get_const_function__Defaults__defaults_values(
  const void * untyped_member, size_t index)
{
  const test_msgs__msg__Defaults__Sequence * member =
    (const test_msgs__msg__Defaults__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BoundedSequences__rosidl_typesupport_introspection_c__get_function__Defaults__defaults_values(
  void * untyped_member, size_t index)
{
  test_msgs__msg__Defaults__Sequence * member =
    (test_msgs__msg__Defaults__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BoundedSequences__rosidl_typesupport_introspection_c__resize_function__Defaults__defaults_values(
  void * untyped_member, size_t size)
{
  test_msgs__msg__Defaults__Sequence * member =
    (test_msgs__msg__Defaults__Sequence *)(untyped_member);
  test_msgs__msg__Defaults__Sequence__fini(member);
  return test_msgs__msg__Defaults__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BoundedSequences__rosidl_typesupport_introspection_c__BoundedSequences_message_member_array[32] = {
  {
    "bool_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, bool_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "byte_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, byte_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "char_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, char_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float32_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, float32_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float64_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, float64_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int8_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, int8_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint8_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, uint8_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int16_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, int16_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint16_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, uint16_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int32_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, int32_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint32_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, uint32_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int64_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, int64_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint64_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, uint64_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, string_values),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "basic_types_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, basic_types_values),  // bytes offset in struct
    NULL,  // default value
    BoundedSequences__rosidl_typesupport_introspection_c__size_function__BasicTypes__basic_types_values,  // size() function pointer
    BoundedSequences__rosidl_typesupport_introspection_c__get_const_function__BasicTypes__basic_types_values,  // get_const(index) function pointer
    BoundedSequences__rosidl_typesupport_introspection_c__get_function__BasicTypes__basic_types_values,  // get(index) function pointer
    BoundedSequences__rosidl_typesupport_introspection_c__resize_function__BasicTypes__basic_types_values  // resize(index) function pointer
  },
  {
    "constants_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, constants_values),  // bytes offset in struct
    NULL,  // default value
    BoundedSequences__rosidl_typesupport_introspection_c__size_function__Constants__constants_values,  // size() function pointer
    BoundedSequences__rosidl_typesupport_introspection_c__get_const_function__Constants__constants_values,  // get_const(index) function pointer
    BoundedSequences__rosidl_typesupport_introspection_c__get_function__Constants__constants_values,  // get(index) function pointer
    BoundedSequences__rosidl_typesupport_introspection_c__resize_function__Constants__constants_values  // resize(index) function pointer
  },
  {
    "defaults_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, defaults_values),  // bytes offset in struct
    NULL,  // default value
    BoundedSequences__rosidl_typesupport_introspection_c__size_function__Defaults__defaults_values,  // size() function pointer
    BoundedSequences__rosidl_typesupport_introspection_c__get_const_function__Defaults__defaults_values,  // get_const(index) function pointer
    BoundedSequences__rosidl_typesupport_introspection_c__get_function__Defaults__defaults_values,  // get(index) function pointer
    BoundedSequences__rosidl_typesupport_introspection_c__resize_function__Defaults__defaults_values  // resize(index) function pointer
  },
  {
    "bool_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, bool_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "byte_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, byte_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "char_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, char_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float32_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, float32_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float64_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, float64_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int8_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, int8_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint8_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, uint8_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int16_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, int16_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint16_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, uint16_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int32_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, int32_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint32_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, uint32_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int64_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, int64_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uint64_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, uint64_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_values_default",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, string_values_default),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alignment_check",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs__msg__BoundedSequences, alignment_check),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BoundedSequences__rosidl_typesupport_introspection_c__BoundedSequences_message_members = {
  "test_msgs__msg",  // message namespace
  "BoundedSequences",  // message name
  32,  // number of fields
  sizeof(test_msgs__msg__BoundedSequences),
  BoundedSequences__rosidl_typesupport_introspection_c__BoundedSequences_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BoundedSequences__rosidl_typesupport_introspection_c__BoundedSequences_message_type_support_handle = {
  0,
  &BoundedSequences__rosidl_typesupport_introspection_c__BoundedSequences_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BoundedSequences)() {
  BoundedSequences__rosidl_typesupport_introspection_c__BoundedSequences_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BasicTypes)();
  BoundedSequences__rosidl_typesupport_introspection_c__BoundedSequences_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Constants)();
  BoundedSequences__rosidl_typesupport_introspection_c__BoundedSequences_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, Defaults)();
  if (!BoundedSequences__rosidl_typesupport_introspection_c__BoundedSequences_message_type_support_handle.typesupport_identifier) {
    BoundedSequences__rosidl_typesupport_introspection_c__BoundedSequences_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BoundedSequences__rosidl_typesupport_introspection_c__BoundedSequences_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
