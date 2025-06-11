# Copyright 2019 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# generated from test_interface_files/test_interface_files-extras.cmake.in

set(test_interface_files_MSG_FILES "")
foreach(msg msg/Arrays.msg;msg/BasicTypes.msg;msg/BoundedSequences.msg;msg/Constants.msg;msg/Defaults.msg;msg/Empty.msg;msg/MultiNested.msg;msg/Nested.msg;msg/Strings.msg;msg/UnboundedSequences.msg;msg/WStrings.msg)
  list(APPEND test_interface_files_MSG_FILES
    "/home/zhous/ROS2/micros_ws/firmware/mcu_ws/install/test_interface_files/share/test_interface_files:${msg}")
endforeach()
set(test_interface_files_SRV_FILES "")
foreach(srv srv/Empty.srv;srv/BasicTypes.srv)
  list(APPEND test_interface_files_SRV_FILES
    "/home/zhous/ROS2/micros_ws/firmware/mcu_ws/install/test_interface_files/share/test_interface_files:${srv}")
endforeach()
set(test_interface_files_ACTION_FILES "")
foreach(action action/Fibonacci.action)
  list(APPEND test_interface_files_ACTION_FILES
    "/home/zhous/ROS2/micros_ws/firmware/mcu_ws/install/test_interface_files/share/test_interface_files:${action}")
endforeach()
