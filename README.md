**micro-ROS for freertos on ubuntu 18.04   version: dashing**
 
    Although host is ubuntu 18.04,   we could still check out Foxy to build micro-ROS firmware.  -- confirmed!
       https://github.com/micro-ROS/micro_ros_setup
 
follow below steps:
 
setup suite:
mkdir uros_ws && cd uros_ws
git clone -b dashing https://github.com/micro-ROS/micro_ros_setup.git src/micro_ros_setup
 
env4ros
export ROS_DISTRO=foxy
git -C src/micro_ros_setup checkout  foxy
rosdep update && rosdep install --from-path src --ignore-src -y
git -C src/micro_ros_setup checkout  dashing
colcon build
 
 
### to create fw per platform
cd uros_ws
env4ros
source install/local_setup.sh
export ROS_DISTRO=foxy
### patch1  install/micro_ros_setup/config/freertos/olimex-stm32-e407/create.sh  to download toolchain tarball locally
 
ros2 run micro_ros_setup create_firmware_ws.sh freertos olimex-stm32-e407
           you might encounter below msg, confirmed could be ignored.
 
WARNING: given --rosdistro dashing but ROS_DISTRO is "foxy". Ignoring environment.
WARNING: ROS_PYTHON_VERSION is unset. Defaulting to 3
ERROR: the following packages/stacks could not have their rosdep keys resolved
to system dependencies:
rcutils: Cannot locate rosdep definition for [osrf_testing_tools_cpp]
rcl: Cannot locate rosdep definition for [osrf_testing_tools_cpp]
rosidl_typesupport_c: Cannot locate rosdep definition for [poco_vendor]
rcl_lifecycle: Cannot locate rosdep definition for [osrf_testing_tools_cpp]
rmw_implementation: Cannot locate rosdep definition for [poco_vendor]
rosidl_default_generators: Cannot locate rosdep definition for [rosidl_generator_py]
rosidl_default_runtime: Cannot locate rosdep definition for [rosidl_generator_py]
rosidl_typesupport_cpp: Cannot locate rosdep definition for [poco_vendor]
rcl_action: Cannot locate rosdep definition for [osrf_testing_tools_cpp]
rcl_logging_noop: Cannot locate rosdep definition for [launch_testing]
 
### patch2  delete app-colcon.meta   TRANSPORT=custom-serial   to fixup some build_error
 
ros2 run micro_ros_setup configure_firmware.sh  int32_publisher --transport udp --ip 192.168.11.2 --port 4321
 
ros2 run micro_ros_setup build_firmware.sh
 
 
到这里 RTOS 上的 image 就已经生成了
we could extract  XRCE-DDS  ROS related lib src from generated folder.
UROS_DIR = mcu_ws/
 
 
firmware/freertos_apps/microros_olimex_e407_extensions/build/libmicroros.a           13,901,386 Bytes
                                   after strip        2,253,254 Bytes


**microROS foxy  require ubuntu 20.04**
But RealSense ROS2 node only support dashing, and libRealSense un-able to install on Ubuntu20.04,  this is the conflict.
 
 
1. install ROS2 foxy W/ code?

Installing ROS 2 on Ubuntu Linux — ROS 2 Documentation: Foxy documentation
 
mkdir -p ~/ROS2/foxy
 cd ~/ROS2/fox
wget https://github.com/ros2/ros2/releases/download/release-foxy-20220208/ros2-foxy-20220208-linux-focal-amd64.tar.bz2
tar -xf *.tar.bz2
 

sudo apt update
sudo apt install -y python3-rosdep
sudo rosdep init
rosdep update
 
rosdep install  --os=ubuntu:focal  --from-paths ~/ROS2/foxy/ros2-linux/share --ignore-src -y --skip-keys "cyclonedds fastcdr fastrtps rti-connext-dds-5.3.1 urdfdom_headers"
 

 
1. micro ROS
 
setup suite:
mkdir uros_ws && cd uros_ws
git clone -b dashing https://github.com/micro-ROS/micro_ros_setup.git src/micro_ros_setup
 
env4ros
export ROS_DISTRO=foxy
git -C src/micro_ros_setup checkout  foxy
rosdep update && rosdep install --from-path src --ignore-src -y
#
colcon build
 


toolchain:
/freertos_apps/microros_olimex_e407_extensions/arm_toolchain.cmake
 


 
 
 
 
 
**intergrate libmicroros.a to A53Anony** 
 
   cmake options for  in firmware/mcu_ws/colcon.meta  +     app-colcon.meta
 
 
 
cd  uros_ws\firmware\mcu_ws\install
    ls -l --time=ctime --time-style=+%H:%M:%S */lib/*.a                     # all *.a for RTOS.
 
 
 
A53Anony toolchain to build libmicroros.a in micro_ros_setup
 
只有 dashing
xrce-dds-client 需要手动切到 foxy 版本 才支持  FreeRTOS_Plus_TCP
单独 add   RTOS-tcp support 到 dashing client
    elseif(PLATFORM_NAME STREQUAL "FreeRTOS_Plus_TCP")
        set(UCLIENT_PLATFORM_FREERTOS_PLUS_TCP ON)
 
 
 
 
cd ~/ROS2/micros_ws
env4ros $PWD
#export ROS_DISTRO=foxy
ros2 run micro_ros_setup create_firmware_ws.sh freertos intel-A53Anony
ros2 run micro_ros_setup configure_firmware.sh  int32_publisher --tran sport udp --ip 192.168.11.2 --port 4321
ros2 run micro_ros_setup build_firmware.sh 2>&1 | tee xx_A53Anony.log
 
 
 
 
 
-mthumb -marm
 
 
colcon build  in shell   --- xxx
 
[ -z $COLCON_PREFIX_PATH ] && echo "error no set  microROS env"
 
export UROS_DIR=${COLCON_PREFIX_PATH}/../firmware/mcu_ws
export UROS_APP_FOLDER=${UROS_DIR}/../freertos_apps/apps/int32_publisher
export BUILD_TYPE=debug
export EXTENSIONS_DIR=${UROS_DIR}/../freertos_apps/microros_intel_A53Anony_extensions
 
 
cd ${UROS_DIR}; \
colcon build \
--packages-ignore-regex=.*_cpp \
--metas ${UROS_DIR}/colcon.meta $(UROS_APP_FOLDER)/app-colcon.meta \
--cmake-args \
-DCMAKE_POSITION_INDEPENDENT_CODE=OFF \
-DTHIRDPARTY=ON \
-DBUILD_SHARED_LIBS=OFF \
-DBUILD_TESTING=OFF \
-DCMAKE_BUILD_TYPE=${BUILD_TYPE} \
-DCMAKE_TOOLCHAIN_FILE=${EXTENSIONS_DIR}/arm_toolchain.cmake \
-DCMAKE_VERBOSE_MAKEFILE=ON;
 
 
libyaml build command:
CMAKE_PREFIX_PATH=${CMAKE_PREFIX_PATH}:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_uncrustify:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_xmllint:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_pyflakes:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_pep8:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_pep257:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_pclint:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_package:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_lint_cmake:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_flake8:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_copyright:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_lint:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_index_python:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_cpplint:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_cppcheck:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_clang_tidy:/home/zhous/ROS2/micros_ws/firmware/dev_ws/install/ament_clang_format mytag_args= *.h -o -name *.c -o -name *.inc -o -name *.hpp -o -name *.cpp -o -name *.S -o -name *.s /usr/bin/cmake --build /home/zhous/ROS2/micros_ws/firmware/mcu_ws/build/libyaml_vendor -- -j8 -l8
 
 
Toolchains
    #xcn="gcc-linaro-7.5.0-2019.12-x86_64_aarch64-elf.tar.xz"   ---
    #xcn="gcc-arm-9.2-2019.12-x86_64-aarch64-none-elf.tar.xz"        --- A53Anony
 
 
issue: rcutils
 
client-colcon.meta         "-DRCUTILS_NO_LOGGING=ON
 
 
 
 
issue:   FreeRTOS TCP ip stack support for microros dashing (ubuntu 18.04 only have dashing).
# as xrcedds_client not support FreeRTOS_TCP IP stack in dashing(ubuntu18.04 only support dashing micro_ros suite)
# so we checkout foxy version and patch it to fix build issue
 
 mcu_ws/eProsima/Micro-XRCE-DDS-Client/
 
 
issue: rmw_microxrcedds not compatible W/ foxy  xrcedds_client
 
add FreeRTOS tcp stack support base on  dashing  eProsima/micro-xrcedds-client.
 
 
issue:  C++  STL   list and string
 
make[3]: *** [CMakeFiles/rosidl_typesupport_c.dir/src/service_type_support_dispatch.cpp.obj] Error 1
In file included from /home/zhous/ROS2/micros_ws/firmware/mcu_ws/ros2/rosidl_typesupport/rosidl_typesupport_c/src/message_type_support_dispatch.cpp:17:
/home/zhous/ROS2/micros_ws/firmware/mcu_ws/ros2/rosidl_typesupport/rosidl_typesupport_c/src/type_support_dispatch.hpp:23:10: fatal error: list: No such file or directory
 
force to disable  "ROSIDL_TYPESUPPORT_C_USE_POCO" in CMakeLists.txt
 
sub-libs to 59
 
 
 
ld link issue:  not sure to fix?
 
967:/home/zhous/ROS2/micros_ws/firmware/mcu_ws/uros/rcutils/src/error_handling.c:238:(.text.rcutils_error_is_set+0x10): relocation truncated to fit: R_AARCH64_CALL26 against undefined symbol `__emutls_get_address'
970:/home/zhous/ROS2/micros_ws/firmware/mcu_ws/uros/rcutils/src/get_env.c:50:(.text.rcutils_get_env+0x4c): relocation truncated to fit: R_AARCH64_CALL26 against undefined symbol `getenv'
 
  
zhous@NUC8i7HVK:   intel-A53Anony$ cat client-colcon.meta
{
    "names": {
        "rcutils": {
            "cmake-args": [
                "-DENABLE_TESTING=OFF",
                "-DRCUTILS_NO_FILESYSTEM=ON",
                "-DRCUTILS_AVOID_DYNAMIC_ALLOCATION=ON",
                "-DRCUTILS_NO_THREAD_SUPPORT=ON",
                "-DRCUTILS_NO_LOGGING=ON"
            ]
        },
 



 
