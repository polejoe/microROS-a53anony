include(CMakeForceCompiler)

set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)
set(CMAKE_CROSSCOMPILING 1)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)
set(PLATFORM_NAME "LwIP")

set(CMAKE_SYSROOT /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/../..)

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

# External transports
# set(EXTERNAL_TRANSPORT_HEADER "@EXTERNAL_TRANSPORT_HEADER@" CACHE PATH "" FORCE)
# set(EXTERNAL_TRANSPORT_SRC "@EXTERNAL_TRANSPORT@" CACHE PATH "" FORCE) 

# Makefile flags
set(CROSSDEV /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/../../toolchain/bin/arm-none-eabi-)
set(ARCH_CPU_FLAGS "-mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard -DUSE_HAL_DRIVER -DSTM32F407xx -D_TIMEVAL_DEFINED -O0 -Wall -fdata-sections -ffunction-sections")
set(ARCH_OPT_FLAGS "")

# Compiler tools
foreach(tool gcc ld ar)
	string(TOUPPER ${tool} TOOL)
    find_program(${TOOL} ${CROSSDEV}${tool})
	if(NOT ${TOOL})
		message(FATAL_ERROR "could not find ${CROSSDEV}${tool}")
	endif()
endforeach()

set(CMAKE_C_COMPILER ${CROSSDEV}gcc)
set(CMAKE_CXX_COMPILER ${CROSSDEV}g++)

set(CMAKE_C_FLAGS_INIT "-std=c11 ${ARCH_CPU_FLAGS} ${ARCH_OPT_FLAGS}" CACHE STRING "" FORCE)
set(CMAKE_CXX_FLAGS_INIT "-std=c++14 ${ARCH_CPU_FLAGS} ${ARCH_OPT_FLAGS} " CACHE STRING "" FORCE)


include_directories(SYSTEM 
	/home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/FreeRTOS-Plus-POSIX/include
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/include
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/include/private
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/include/FreeRTOS_POSIX
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/include/FreeRTOS_POSIX/sys
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/src/hal/interface
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/src/modules/interface
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/src/utils/interface
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/src/config
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/src/drivers/interface
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/Middlewares/Third_Party/LwIP/src/include/posix
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/Middlewares/Third_Party/LwIP/src/include
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/Inc
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/Drivers/STM32F4xx_HAL_Driver/Inc
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/Drivers/CMSIS/Device/ST/STM32F4xx/Include
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/Drivers/CMSIS/Include
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_olimex_e407_extensions/Middlewares/Third_Party/LwIP/system

    )
    
set(__BIG_ENDIAN__ 0)