// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_msgs:msg/WStrings.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/w_strings__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `wstring_value`
// Member `array_of_wstrings`
// Member `bounded_sequence_of_wstrings`
// Member `unbounded_sequence_of_wstrings`
#include "rosidl_generator_c/u16string_functions.h"

bool
test_msgs__msg__WStrings__init(test_msgs__msg__WStrings * msg)
{
  if (!msg) {
    return false;
  }
  // wstring_value
  if (!rosidl_generator_c__U16String__init(&msg->wstring_value)) {
    test_msgs__msg__WStrings__fini(msg);
    return false;
  }
  // array_of_wstrings
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_generator_c__U16String__init(&msg->array_of_wstrings[i])) {
      test_msgs__msg__WStrings__fini(msg);
      return false;
    }
  }
  // bounded_sequence_of_wstrings
  if (!rosidl_generator_c__U16String__Sequence__init(&msg->bounded_sequence_of_wstrings, 0)) {
    test_msgs__msg__WStrings__fini(msg);
    return false;
  }
  // unbounded_sequence_of_wstrings
  if (!rosidl_generator_c__U16String__Sequence__init(&msg->unbounded_sequence_of_wstrings, 0)) {
    test_msgs__msg__WStrings__fini(msg);
    return false;
  }
  return true;
}

void
test_msgs__msg__WStrings__fini(test_msgs__msg__WStrings * msg)
{
  if (!msg) {
    return;
  }
  // wstring_value
  rosidl_generator_c__U16String__fini(&msg->wstring_value);
  // array_of_wstrings
  for (size_t i = 0; i < 3; ++i) {
    rosidl_generator_c__U16String__fini(&msg->array_of_wstrings[i]);
  }
  // bounded_sequence_of_wstrings
  rosidl_generator_c__U16String__Sequence__fini(&msg->bounded_sequence_of_wstrings);
  // unbounded_sequence_of_wstrings
  rosidl_generator_c__U16String__Sequence__fini(&msg->unbounded_sequence_of_wstrings);
}

test_msgs__msg__WStrings *
test_msgs__msg__WStrings__create()
{
  test_msgs__msg__WStrings * msg = (test_msgs__msg__WStrings *)malloc(sizeof(test_msgs__msg__WStrings));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__msg__WStrings));
  bool success = test_msgs__msg__WStrings__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__msg__WStrings__destroy(test_msgs__msg__WStrings * msg)
{
  if (msg) {
    test_msgs__msg__WStrings__fini(msg);
  }
  free(msg);
}


bool
test_msgs__msg__WStrings__Sequence__init(test_msgs__msg__WStrings__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__msg__WStrings * data = NULL;
  if (size) {
    data = (test_msgs__msg__WStrings *)calloc(size, sizeof(test_msgs__msg__WStrings));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__msg__WStrings__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__msg__WStrings__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
test_msgs__msg__WStrings__Sequence__fini(test_msgs__msg__WStrings__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__msg__WStrings__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

test_msgs__msg__WStrings__Sequence *
test_msgs__msg__WStrings__Sequence__create(size_t size)
{
  test_msgs__msg__WStrings__Sequence * array = (test_msgs__msg__WStrings__Sequence *)malloc(sizeof(test_msgs__msg__WStrings__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__msg__WStrings__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__msg__WStrings__Sequence__destroy(test_msgs__msg__WStrings__Sequence * array)
{
  if (array) {
    test_msgs__msg__WStrings__Sequence__fini(array);
  }
  free(array);
}
