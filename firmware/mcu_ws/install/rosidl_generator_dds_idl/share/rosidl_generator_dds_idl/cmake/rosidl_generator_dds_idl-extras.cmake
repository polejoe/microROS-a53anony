# generated from
# rosidl_generator_dds_idl/rosidl_generator_dds_idl-extras.cmake.in

find_package(ament_cmake_core QUIET REQUIRED)

set(rosidl_generator_dds_idl_BIN
  "${rosidl_generator_dds_idl_DIR}/../../../lib/rosidl_generator_dds_idl/rosidl_generator_dds_idl")
normalize_path(rosidl_generator_dds_idl_BIN
  "${rosidl_generator_dds_idl_BIN}")

set(rosidl_generator_dds_idl_GENERATOR_FILES
  "${rosidl_generator_dds_idl_DIR}/../../../lib/python3.6/site-packages/rosidl_generator_dds_idl/__init__.py")
normalize_path(rosidl_generator_dds_idl_GENERATOR_FILES
  "${rosidl_generator_dds_idl_GENERATOR_FILES}")

set(rosidl_generator_dds_idl_TEMPLATE_DIR
  "${rosidl_generator_dds_idl_DIR}/../resource")
normalize_path(rosidl_generator_dds_idl_TEMPLATE_DIR
  "${rosidl_generator_dds_idl_TEMPLATE_DIR}")

include("${rosidl_generator_dds_idl_DIR}/rosidl_generate_dds_interfaces.cmake")
