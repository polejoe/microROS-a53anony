// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:msg/Strings.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__STRINGS__FUNCTIONS_H_
#define TEST_MSGS__MSG__STRINGS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "test_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "test_msgs/msg/strings__struct.h"

/// Initialize msg/Strings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_msgs__msg__Strings
 * )) before or use
 * test_msgs__msg__Strings__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__msg__Strings__init(test_msgs__msg__Strings * msg);

/// Finalize msg/Strings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__msg__Strings__fini(test_msgs__msg__Strings * msg);

/// Create msg/Strings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_msgs__msg__Strings__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__msg__Strings *
test_msgs__msg__Strings__create();

/// Destroy msg/Strings message.
/**
 * It calls
 * test_msgs__msg__Strings__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__msg__Strings__destroy(test_msgs__msg__Strings * msg);


/// Initialize array of msg/Strings messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_msgs__msg__Strings__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
bool
test_msgs__msg__Strings__Sequence__init(test_msgs__msg__Strings__Sequence * array, size_t size);

/// Finalize array of msg/Strings messages.
/**
 * It calls
 * test_msgs__msg__Strings__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__msg__Strings__Sequence__fini(test_msgs__msg__Strings__Sequence * array);

/// Create array of msg/Strings messages.
/**
 * It allocates the memory for the array and calls
 * test_msgs__msg__Strings__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
test_msgs__msg__Strings__Sequence *
test_msgs__msg__Strings__Sequence__create(size_t size);

/// Destroy array of msg/Strings messages.
/**
 * It calls
 * test_msgs__msg__Strings__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_msgs
void
test_msgs__msg__Strings__Sequence__destroy(test_msgs__msg__Strings__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__STRINGS__FUNCTIONS_H_
