# CMake generated Testfile for 
# Source directory: /home/zhous/ROS2/micros_ws/firmware/dev_ws/ament/ament_lint/ament_cmake_lint_cmake
# Build directory: /home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_cmake_lint_cmake
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_cmake_lint_cmake/test_results/ament_cmake_lint_cmake/lint_cmake.xunit.xml" "--package-name" "ament_cmake_lint_cmake" "--output-file" "/home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_cmake_lint_cmake/ament_lint_cmake/lint_cmake.txt" "--command" "/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_lint_cmake/bin/ament_lint_cmake" "--xunit-file" "/home/zhous/ROS2/micros_ws/firmware/dev_ws/build/ament_cmake_lint_cmake/test_results/ament_cmake_lint_cmake/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/zhous/ROS2/micros_ws/firmware/dev_ws/ament/ament_lint/ament_cmake_lint_cmake")
