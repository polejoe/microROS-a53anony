// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_msgs:msg/Builtins.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/builtins__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `duration_value`
#include "builtin_interfaces/msg/duration__functions.h"
// Member `time_value`
#include "builtin_interfaces/msg/time__functions.h"

bool
test_msgs__msg__Builtins__init(test_msgs__msg__Builtins * msg)
{
  if (!msg) {
    return false;
  }
  // duration_value
  if (!builtin_interfaces__msg__Duration__init(&msg->duration_value)) {
    test_msgs__msg__Builtins__fini(msg);
    return false;
  }
  // time_value
  if (!builtin_interfaces__msg__Time__init(&msg->time_value)) {
    test_msgs__msg__Builtins__fini(msg);
    return false;
  }
  return true;
}

void
test_msgs__msg__Builtins__fini(test_msgs__msg__Builtins * msg)
{
  if (!msg) {
    return;
  }
  // duration_value
  builtin_interfaces__msg__Duration__fini(&msg->duration_value);
  // time_value
  builtin_interfaces__msg__Time__fini(&msg->time_value);
}

test_msgs__msg__Builtins *
test_msgs__msg__Builtins__create()
{
  test_msgs__msg__Builtins * msg = (test_msgs__msg__Builtins *)malloc(sizeof(test_msgs__msg__Builtins));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__msg__Builtins));
  bool success = test_msgs__msg__Builtins__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__msg__Builtins__destroy(test_msgs__msg__Builtins * msg)
{
  if (msg) {
    test_msgs__msg__Builtins__fini(msg);
  }
  free(msg);
}


bool
test_msgs__msg__Builtins__Sequence__init(test_msgs__msg__Builtins__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__msg__Builtins * data = NULL;
  if (size) {
    data = (test_msgs__msg__Builtins *)calloc(size, sizeof(test_msgs__msg__Builtins));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__msg__Builtins__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__msg__Builtins__fini(&data[i - 1]);
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
test_msgs__msg__Builtins__Sequence__fini(test_msgs__msg__Builtins__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__msg__Builtins__fini(&array->data[i]);
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

test_msgs__msg__Builtins__Sequence *
test_msgs__msg__Builtins__Sequence__create(size_t size)
{
  test_msgs__msg__Builtins__Sequence * array = (test_msgs__msg__Builtins__Sequence *)malloc(sizeof(test_msgs__msg__Builtins__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__msg__Builtins__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__msg__Builtins__Sequence__destroy(test_msgs__msg__Builtins__Sequence * array)
{
  if (array) {
    test_msgs__msg__Builtins__Sequence__fini(array);
  }
  free(array);
}
