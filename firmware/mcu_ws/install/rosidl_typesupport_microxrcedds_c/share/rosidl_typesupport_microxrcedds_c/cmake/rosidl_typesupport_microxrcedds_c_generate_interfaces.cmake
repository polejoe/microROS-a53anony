# Copyright 2019 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

find_package(microcdr REQUIRED)

set(_output_path "${CMAKE_CURRENT_BINARY_DIR}/rosidl_typesupport_microxrcedds_c/${PROJECT_NAME}")
set(_generated_files "")
foreach(_abs_idl_file ${rosidl_generate_interfaces_ABS_IDL_FILES})
  get_filename_component(_parent_folder "${_abs_idl_file}" DIRECTORY)
  get_filename_component(_parent_folder "${_parent_folder}" NAME)
  get_filename_component(_idl_name "${_abs_idl_file}" NAME_WE)
  string_camel_case_to_lower_case_underscore("${_idl_name}" _header_name)
  list(APPEND _generated_files
    "${_output_path}/${_parent_folder}/${_header_name}__rosidl_typesupport_microxrcedds_c.h"
    "${_output_path}/${_parent_folder}/${_header_name}__type_support_c.c"
    )
endforeach()

set(_dependency_files "")
set(_dependencies "")
foreach(_pck_name ${rosidl_generated_interfaces_DEPENDENCY_PACKAGE_NAMES})
  foreach(_idl_file ${${_pkg_name}_IDL_FILES})
    set(_abs_idl_file "${${_pkg_name}_DIR}/../${_idl_file}")
    normalize_path(_abs_idl_file "${_abs_idl_file}")
    list(APPEND _dependency_files "${_abs_idl_file}")
    list(APPEND _dependencies "${_pkg_name}:${_abs_idl_file}")
  endforeach()
endforeach()

# list dependences
set(_dependency_files "")
set(_dependencies "")
foreach(_pkg_name ${rosidl_generate_interfaces_DEPENDENCY_PACKAGE_NAMES})
  foreach(_idl_file ${${_pkg_name}_INTERFACE_FILES})
  get_filename_component(_extension "${_idl_file}" EXT)
    if(_extension STREQUAL ".msg")
      set(_abs_idl_file "${${_pkg_name}_DIR}/../${_idl_file}")
      normalize_path(_abs_idl_file "${_abs_idl_file}")
      list(APPEND _dependency_files "${_abs_idl_file}")
      list(APPEND _dependencies "${_pkg_name}:${_abs_idl_file}")
    endif()
  endforeach()
endforeach()


# check if all templates exits
set(target_dependencies
  "${rosidl_typesupport_microxrcedds_c_BIN}"
  ${rosidl_typesupport_microxrcedds_c_GENERATOR_FILES}
  "${rosidl_typesupport_microxrcedds_c_TEMPLATE_DIR}/idl__rosidl_typesupport_microxrcedds_c.h.em"
  "${rosidl_typesupport_microxrcedds_c_TEMPLATE_DIR}/idl__type_support_c.c.em"
  "${rosidl_typesupport_microxrcedds_c_TEMPLATE_DIR}/msg__rosidl_typesupport_microxrcedds_c.h.em"
  "${rosidl_typesupport_microxrcedds_c_TEMPLATE_DIR}/msg__type_support_c.c.em"
  "${rosidl_typesupport_microxrcedds_c_TEMPLATE_DIR}/srv__rosidl_typesupport_microxrcedds_c.h.em"
  "${rosidl_typesupport_microxrcedds_c_TEMPLATE_DIR}/srv__type_support_c.c.em"
  ${rosidl_generate_interfaces_ABS_IDL_FILES}
  ${_dependency_files}
  )
foreach(dep ${target_dependencies})
  if(NOT EXISTS "${dep}")
    message(FATAL_ERROR "Target dependency '${dep}' does not exist")
  endif()
endforeach()


# generate script argument file
set(generator_arguments_file "${CMAKE_CURRENT_BINARY_DIR}/rosidl_typesupport_microxrcedds_c__arguments.json")
rosidl_write_generator_arguments("${generator_arguments_file}"
  PACKAGE_NAME "${PROJECT_NAME}"
  IDL_TUPLES "${rosidl_generate_interfaces_IDL_TUPLES}"
  ROS_INTERFACE_DEPENDENCIES "${_dependencies}"
  OUTPUT_DIR "${_output_path}"
  TEMPLATE_DIR "${rosidl_typesupport_microxrcedds_c_TEMPLATE_DIR}"
  TARGET_DEPENDENCIES ${target_dependencies}
  )


# execute python script
add_custom_command(
  OUTPUT
    ${_generated_files}
  COMMAND
    ${PYTHON_EXECUTABLE} ${rosidl_typesupport_microxrcedds_c_BIN}
    --generator-arguments-file "${generator_arguments_file}"
  DEPENDS
    ${target_dependencies} ${_dds_idl_files}
  COMMENT
    "Generating C type support for eProsima Micro XRCE-DDS"
  VERBATIM
  )


# generate header to switch between export and import for a specific package
set(_visibility_control_file
"${_output_path}/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h")
string(TOUPPER "${PROJECT_NAME}" PROJECT_NAME_UPPER)
configure_file(
  "${rosidl_typesupport_microxrcedds_c_TEMPLATE_DIR}/rosidl_typesupport_microxrcedds_c__visibility_control.h.in"
  "${_visibility_control_file}"
  @ONLY
  )

set(_target_suffix "__rosidl_typesupport_microxrcedds_c")

# generate Micro XRCE-DDS typesupport shared library
add_library(${rosidl_generate_interfaces_TARGET}${_target_suffix}
  ${rosidl_typesupport_microxrcedds_c_LIBRARY_TYPE}
  ${_generated_files}
  )

target_compile_definitions(${rosidl_generate_interfaces_TARGET}${_target_suffix}
  PRIVATE
      $<$<PLATFORM_ID:Windows>:"ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_BUILDING_DLL_${PROJECT_NAME}">
  )

if(rosidl_generate_interfaces_LIBRARY_NAME)
  set_target_properties(${rosidl_generate_interfaces_TARGET}${_target_suffix} PROPERTIES
    OUTPUT_NAME
      "${rosidl_generate_interfaces_LIBRARY_NAME}${_target_suffix}"
    )
endif()

set_target_properties(${rosidl_generate_interfaces_TARGET}${_target_suffix} PROPERTIES
  C_STANDARD
    99
  C_STANDARD_REQUIRED
    YES
  )

target_compile_options(${rosidl_generate_interfaces_TARGET}${_target_suffix}
  PRIVATE
    $<$<PLATFORM_ID:Linux>:-Wall>
    $<$<PLATFORM_ID:Linux>:-Wextra>
    $<$<PLATFORM_ID:Linux>:-Wpedantic>
    $<$<PLATFORM_ID:Windows>:/W4>
  )

target_include_directories(${rosidl_generate_interfaces_TARGET}${_target_suffix}
  PUBLIC
    ${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_c
    ${CMAKE_CURRENT_BINARY_DIR}/rosidl_typesupport_microxrcedds_c
  )
foreach(_pkg_name ${rosidl_generate_interfaces_DEPENDENCY_PACKAGE_NAMES})
  set(_msg_include_dir "${${_pkg_name}_DIR}/../../../include/${_pkg_name}/msg/dds_microxrcedds")
  set(_srv_include_dir "${${_pkg_name}_DIR}/../../../include/${_pkg_name}/srv/dds_microxrcedds")
  set(_action_include_dir "${${_pkg_name}_DIR}/../../../include/${_pkg_name}/action/dds_microxrcedds")
  normalize_path(_msg_include_dir "${_msg_include_dir}")
  normalize_path(_srv_include_dir "${_srv_include_dir}")
  normalize_path(_action_include_dir "${_action_include_dir}")
  target_include_directories(${rosidl_generate_interfaces_TARGET}${_target_suffix}
    PUBLIC
      "${_msg_include_dir}"
      "${_srv_include_dir}"
      "${_action_include_dir}"
    )
  ament_target_dependencies(${rosidl_generate_interfaces_TARGET}${_target_suffix}
    ${_pkg_name}
    )
endforeach()

ament_target_dependencies(${rosidl_generate_interfaces_TARGET}${_target_suffix}
  "microxrcedds_client"
  "rmw"
  "rosidl_typesupport_microxrcedds_c"
  "rosidl_generator_c"
  "rosidl_typesupport_interface"
  )

target_link_libraries(
  ${rosidl_generate_interfaces_TARGET}${_target_suffix}
  ${rosidl_generate_interfaces_TARGET}__rosidl_generator_c
  microcdr
  )

add_dependencies(${rosidl_generate_interfaces_TARGET}
  ${rosidl_generate_interfaces_TARGET}${_target_suffix}
  )

if(NOT rosidl_generate_interfaces_SKIP_INSTALL)
  install(
    DIRECTORY
      "${_output_path}/"
    DESTINATION
      "include/${PROJECT_NAME}"
    PATTERN
      "*.c" EXCLUDE
    )

  if(NOT _generated_files STREQUAL "")
    ament_export_include_directories(include)
  endif()

  install(
    TARGETS
      ${rosidl_generate_interfaces_TARGET}${_target_suffix}
    ARCHIVE DESTINATION
      lib
    LIBRARY DESTINATION
      lib
    RUNTIME DESTINATION
      bin
    )

  ament_export_libraries(${rosidl_generate_interfaces_TARGET}${_target_suffix})
endif()


# test
if(BUILD_TESTING AND rosidl_generate_interfaces_ADD_LINTER_TESTS)
  if(NOT _generated_files STREQUAL "")
    find_package(ament_cmake_cppcheck REQUIRED)
    ament_cppcheck(
      TESTNAME
        "cppcheck_rosidl_typesupport_microxrcedds_c"
      ${_generated_files}
      )

    find_package(ament_cmake_cpplint REQUIRED)
    get_filename_component(_cpplint_root "${_output_path}" DIRECTORY)
    ament_cpplint(
      TESTNAME
        "cpplint_rosidl_typesupport_microxrcedds_c"
      MAX_LINE_LENGTH
        999
      ROOT
        "${_cpplint_root}"
      ${_output_path}
      )

    find_package(ament_cmake_uncrustify REQUIRED)
    ament_uncrustify(
      TESTNAME
        "uncrustify_rosidl_typesupport_microxrcedds_c"
      MAX_LINE_LENGTH
        0
      ${_output_path}
      )
  endif()
endif()
