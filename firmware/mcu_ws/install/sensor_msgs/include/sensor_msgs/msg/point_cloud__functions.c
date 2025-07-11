// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_msgs:msg/PointCloud.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/point_cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `points`
#include "geometry_msgs/msg/point32__functions.h"
// Member `channels`
#include "sensor_msgs/msg/channel_float32__functions.h"

bool
sensor_msgs__msg__PointCloud__init(sensor_msgs__msg__PointCloud * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensor_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point32__Sequence__init(&msg->points, 0)) {
    sensor_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  // channels
  if (!sensor_msgs__msg__ChannelFloat32__Sequence__init(&msg->channels, 0)) {
    sensor_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  return true;
}

void
sensor_msgs__msg__PointCloud__fini(sensor_msgs__msg__PointCloud * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // points
  geometry_msgs__msg__Point32__Sequence__fini(&msg->points);
  // channels
  sensor_msgs__msg__ChannelFloat32__Sequence__fini(&msg->channels);
}

sensor_msgs__msg__PointCloud *
sensor_msgs__msg__PointCloud__create()
{
  sensor_msgs__msg__PointCloud * msg = (sensor_msgs__msg__PointCloud *)malloc(sizeof(sensor_msgs__msg__PointCloud));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_msgs__msg__PointCloud));
  bool success = sensor_msgs__msg__PointCloud__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sensor_msgs__msg__PointCloud__destroy(sensor_msgs__msg__PointCloud * msg)
{
  if (msg) {
    sensor_msgs__msg__PointCloud__fini(msg);
  }
  free(msg);
}


bool
sensor_msgs__msg__PointCloud__Sequence__init(sensor_msgs__msg__PointCloud__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sensor_msgs__msg__PointCloud * data = NULL;
  if (size) {
    data = (sensor_msgs__msg__PointCloud *)calloc(size, sizeof(sensor_msgs__msg__PointCloud));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_msgs__msg__PointCloud__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_msgs__msg__PointCloud__fini(&data[i - 1]);
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
sensor_msgs__msg__PointCloud__Sequence__fini(sensor_msgs__msg__PointCloud__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sensor_msgs__msg__PointCloud__fini(&array->data[i]);
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

sensor_msgs__msg__PointCloud__Sequence *
sensor_msgs__msg__PointCloud__Sequence__create(size_t size)
{
  sensor_msgs__msg__PointCloud__Sequence * array = (sensor_msgs__msg__PointCloud__Sequence *)malloc(sizeof(sensor_msgs__msg__PointCloud__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sensor_msgs__msg__PointCloud__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sensor_msgs__msg__PointCloud__Sequence__destroy(sensor_msgs__msg__PointCloud__Sequence * array)
{
  if (array) {
    sensor_msgs__msg__PointCloud__Sequence__fini(array);
  }
  free(array);
}
