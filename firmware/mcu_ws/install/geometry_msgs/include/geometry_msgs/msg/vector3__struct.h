// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Vector3.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__VECTOR3__STRUCT_H_
#define GEOMETRY_MSGS__MSG__VECTOR3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Vector3 in the package geometry_msgs.
typedef struct geometry_msgs__msg__Vector3
{
  double x;
  double y;
  double z;
} geometry_msgs__msg__Vector3;

// Struct for a sequence of geometry_msgs__msg__Vector3.
typedef struct geometry_msgs__msg__Vector3__Sequence
{
  geometry_msgs__msg__Vector3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Vector3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__VECTOR3__STRUCT_H_
