# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zhous/ROS2/micros_ws/firmware/dev_ws/ament/ament_index/ament_index_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp

# Include any dependencies generated for this target.
include gtest/CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include gtest/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include gtest/CMakeFiles/gtest.dir/flags.make

gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: gtest/CMakeFiles/gtest.dir/flags.make
gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: /home/zhous/ROS2/micros_ws/firmware/dev_ws/install/gtest_vendor/src/gtest_vendor/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o"
	cd /home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp/gtest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest.dir/src/gtest-all.cc.o -c /home/zhous/ROS2/micros_ws/firmware/dev_ws/install/gtest_vendor/src/gtest_vendor/src/gtest-all.cc

gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd /home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp/gtest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhous/ROS2/micros_ws/firmware/dev_ws/install/gtest_vendor/src/gtest_vendor/src/gtest-all.cc > CMakeFiles/gtest.dir/src/gtest-all.cc.i

gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd /home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp/gtest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhous/ROS2/micros_ws/firmware/dev_ws/install/gtest_vendor/src/gtest_vendor/src/gtest-all.cc -o CMakeFiles/gtest.dir/src/gtest-all.cc.s

gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires:

.PHONY : gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires

gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides: gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires
	$(MAKE) -f gtest/CMakeFiles/gtest.dir/build.make gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides.build
.PHONY : gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides

gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides.build: gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o


# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.o"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

gtest/libgtest.a: gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
gtest/libgtest.a: gtest/CMakeFiles/gtest.dir/build.make
gtest/libgtest.a: gtest/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgtest.a"
	cd /home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp/gtest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean_target.cmake
	cd /home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp/gtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gtest/CMakeFiles/gtest.dir/build: gtest/libgtest.a

.PHONY : gtest/CMakeFiles/gtest.dir/build

gtest/CMakeFiles/gtest.dir/requires: gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires

.PHONY : gtest/CMakeFiles/gtest.dir/requires

gtest/CMakeFiles/gtest.dir/clean:
	cd /home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp/gtest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : gtest/CMakeFiles/gtest.dir/clean

gtest/CMakeFiles/gtest.dir/depend:
	cd /home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhous/ROS2/micros_ws/firmware/dev_ws/ament/ament_index/ament_index_cpp /home/zhous/ROS2/micros_ws/firmware/dev_ws/install/gtest_vendor/src/gtest_vendor /home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp /home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp/gtest /home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_index_cpp/gtest/CMakeFiles/gtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gtest/CMakeFiles/gtest.dir/depend

