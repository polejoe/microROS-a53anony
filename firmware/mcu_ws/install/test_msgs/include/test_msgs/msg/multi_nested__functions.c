// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_msgs:msg/MultiNested.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/multi_nested__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `array_of_arrays`
// Member `bounded_sequence_of_arrays`
// Member `unbounded_sequence_of_arrays`
#include "test_msgs/msg/arrays__functions.h"
// Member `array_of_bounded_sequences`
// Member `bounded_sequence_of_bounded_sequences`
// Member `unbounded_sequence_of_bounded_sequences`
#include "test_msgs/msg/bounded_sequences__functions.h"
// Member `array_of_unbounded_sequences`
// Member `bounded_sequence_of_unbounded_sequences`
// Member `unbounded_sequence_of_unbounded_sequences`
#include "test_msgs/msg/unbounded_sequences__functions.h"

bool
test_msgs__msg__MultiNested__init(test_msgs__msg__MultiNested * msg)
{
  if (!msg) {
    return false;
  }
  // array_of_arrays
  for (size_t i = 0; i < 3; ++i) {
    if (!test_msgs__msg__Arrays__init(&msg->array_of_arrays[i])) {
      test_msgs__msg__MultiNested__fini(msg);
      return false;
    }
  }
  // array_of_bounded_sequences
  for (size_t i = 0; i < 3; ++i) {
    if (!test_msgs__msg__BoundedSequences__init(&msg->array_of_bounded_sequences[i])) {
      test_msgs__msg__MultiNested__fini(msg);
      return false;
    }
  }
  // array_of_unbounded_sequences
  for (size_t i = 0; i < 3; ++i) {
    if (!test_msgs__msg__UnboundedSequences__init(&msg->array_of_unbounded_sequences[i])) {
      test_msgs__msg__MultiNested__fini(msg);
      return false;
    }
  }
  // bounded_sequence_of_arrays
  if (!test_msgs__msg__Arrays__Sequence__init(&msg->bounded_sequence_of_arrays, 0)) {
    test_msgs__msg__MultiNested__fini(msg);
    return false;
  }
  // bounded_sequence_of_bounded_sequences
  if (!test_msgs__msg__BoundedSequences__Sequence__init(&msg->bounded_sequence_of_bounded_sequences, 0)) {
    test_msgs__msg__MultiNested__fini(msg);
    return false;
  }
  // bounded_sequence_of_unbounded_sequences
  if (!test_msgs__msg__UnboundedSequences__Sequence__init(&msg->bounded_sequence_of_unbounded_sequences, 0)) {
    test_msgs__msg__MultiNested__fini(msg);
    return false;
  }
  // unbounded_sequence_of_arrays
  if (!test_msgs__msg__Arrays__Sequence__init(&msg->unbounded_sequence_of_arrays, 0)) {
    test_msgs__msg__MultiNested__fini(msg);
    return false;
  }
  // unbounded_sequence_of_bounded_sequences
  if (!test_msgs__msg__BoundedSequences__Sequence__init(&msg->unbounded_sequence_of_bounded_sequences, 0)) {
    test_msgs__msg__MultiNested__fini(msg);
    return false;
  }
  // unbounded_sequence_of_unbounded_sequences
  if (!test_msgs__msg__UnboundedSequences__Sequence__init(&msg->unbounded_sequence_of_unbounded_sequences, 0)) {
    test_msgs__msg__MultiNested__fini(msg);
    return false;
  }
  return true;
}

void
test_msgs__msg__MultiNested__fini(test_msgs__msg__MultiNested * msg)
{
  if (!msg) {
    return;
  }
  // array_of_arrays
  for (size_t i = 0; i < 3; ++i) {
    test_msgs__msg__Arrays__fini(&msg->array_of_arrays[i]);
  }
  // array_of_bounded_sequences
  for (size_t i = 0; i < 3; ++i) {
    test_msgs__msg__BoundedSequences__fini(&msg->array_of_bounded_sequences[i]);
  }
  // array_of_unbounded_sequences
  for (size_t i = 0; i < 3; ++i) {
    test_msgs__msg__UnboundedSequences__fini(&msg->array_of_unbounded_sequences[i]);
  }
  // bounded_sequence_of_arrays
  test_msgs__msg__Arrays__Sequence__fini(&msg->bounded_sequence_of_arrays);
  // bounded_sequence_of_bounded_sequences
  test_msgs__msg__BoundedSequences__Sequence__fini(&msg->bounded_sequence_of_bounded_sequences);
  // bounded_sequence_of_unbounded_sequences
  test_msgs__msg__UnboundedSequences__Sequence__fini(&msg->bounded_sequence_of_unbounded_sequences);
  // unbounded_sequence_of_arrays
  test_msgs__msg__Arrays__Sequence__fini(&msg->unbounded_sequence_of_arrays);
  // unbounded_sequence_of_bounded_sequences
  test_msgs__msg__BoundedSequences__Sequence__fini(&msg->unbounded_sequence_of_bounded_sequences);
  // unbounded_sequence_of_unbounded_sequences
  test_msgs__msg__UnboundedSequences__Sequence__fini(&msg->unbounded_sequence_of_unbounded_sequences);
}

test_msgs__msg__MultiNested *
test_msgs__msg__MultiNested__create()
{
  test_msgs__msg__MultiNested * msg = (test_msgs__msg__MultiNested *)malloc(sizeof(test_msgs__msg__MultiNested));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_msgs__msg__MultiNested));
  bool success = test_msgs__msg__MultiNested__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_msgs__msg__MultiNested__destroy(test_msgs__msg__MultiNested * msg)
{
  if (msg) {
    test_msgs__msg__MultiNested__fini(msg);
  }
  free(msg);
}


bool
test_msgs__msg__MultiNested__Sequence__init(test_msgs__msg__MultiNested__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_msgs__msg__MultiNested * data = NULL;
  if (size) {
    data = (test_msgs__msg__MultiNested *)calloc(size, sizeof(test_msgs__msg__MultiNested));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_msgs__msg__MultiNested__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_msgs__msg__MultiNested__fini(&data[i - 1]);
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
test_msgs__msg__MultiNested__Sequence__fini(test_msgs__msg__MultiNested__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_msgs__msg__MultiNested__fini(&array->data[i]);
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

test_msgs__msg__MultiNested__Sequence *
test_msgs__msg__MultiNested__Sequence__create(size_t size)
{
  test_msgs__msg__MultiNested__Sequence * array = (test_msgs__msg__MultiNested__Sequence *)malloc(sizeof(test_msgs__msg__MultiNested__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_msgs__msg__MultiNested__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_msgs__msg__MultiNested__Sequence__destroy(test_msgs__msg__MultiNested__Sequence * array)
{
  if (array) {
    test_msgs__msg__MultiNested__Sequence__fini(array);
  }
  free(array);
}
