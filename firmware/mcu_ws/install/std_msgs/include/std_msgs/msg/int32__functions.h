// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int32.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__INT32__FUNCTIONS_H_
#define STD_MSGS__MSG__INT32__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "std_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "std_msgs/msg/int32__struct.h"

/// Initialize msg/Int32 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * std_msgs__msg__Int32
 * )) before or use
 * std_msgs__msg__Int32__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__Int32__init(std_msgs__msg__Int32 * msg);

/// Finalize msg/Int32 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__Int32__fini(std_msgs__msg__Int32 * msg);

/// Create msg/Int32 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * std_msgs__msg__Int32__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
std_msgs__msg__Int32 *
std_msgs__msg__Int32__create();

/// Destroy msg/Int32 message.
/**
 * It calls
 * std_msgs__msg__Int32__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__Int32__destroy(std_msgs__msg__Int32 * msg);


/// Initialize array of msg/Int32 messages.
/**
 * It allocates the memory for the number of elements and calls
 * std_msgs__msg__Int32__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__Int32__Sequence__init(std_msgs__msg__Int32__Sequence * array, size_t size);

/// Finalize array of msg/Int32 messages.
/**
 * It calls
 * std_msgs__msg__Int32__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__Int32__Sequence__fini(std_msgs__msg__Int32__Sequence * array);

/// Create array of msg/Int32 messages.
/**
 * It allocates the memory for the array and calls
 * std_msgs__msg__Int32__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
std_msgs__msg__Int32__Sequence *
std_msgs__msg__Int32__Sequence__create(size_t size);

/// Destroy array of msg/Int32 messages.
/**
 * It calls
 * std_msgs__msg__Int32__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__Int32__Sequence__destroy(std_msgs__msg__Int32__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__INT32__FUNCTIONS_H_
