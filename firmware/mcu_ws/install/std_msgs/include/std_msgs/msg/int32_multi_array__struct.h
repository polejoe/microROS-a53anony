// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int32MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__INT32_MULTI_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__INT32_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/Int32MultiArray in the package std_msgs.
typedef struct std_msgs__msg__Int32MultiArray
{
  std_msgs__msg__MultiArrayLayout layout;
  rosidl_generator_c__int32__Sequence data;
} std_msgs__msg__Int32MultiArray;

// Struct for a sequence of std_msgs__msg__Int32MultiArray.
typedef struct std_msgs__msg__Int32MultiArray__Sequence
{
  std_msgs__msg__Int32MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Int32MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__INT32_MULTI_ARRAY__STRUCT_H_
