include(CMakeForceCompiler)

set(CMAKE_SYSTEM_NAME Generic)
#set(CMAKE_SYSTEM_PROCESSOR arm)
set(CMAKE_SYSTEM_PROCESSOR aarch64)
set(CMAKE_CROSSCOMPILING 1)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)
#set(PLATFORM_NAME "LwIP")
set(PLATFORM_NAME "FreeRTOS_Plus_TCP")

set(CMAKE_SYSROOT /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_intel_A53Anony_extensions/../..)

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

# External transports
# set(EXTERNAL_TRANSPORT_HEADER "@EXTERNAL_TRANSPORT_HEADER@" CACHE PATH "" FORCE)
# set(EXTERNAL_TRANSPORT_SRC "@EXTERNAL_TRANSPORT@" CACHE PATH "" FORCE) 

# Makefile flags
set(CROSSDEV /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_intel_A53Anony_extensions/../../toolchain/bin/aarch64-none-elf-)
set(ARCH_CPU_FLAGS "-mcpu=cortex-a53 -fno-exceptions -fno-non-call-exceptions   -g -O0 -DFREERTOS -DGUEST -DBOARD_A53Anony=1 -DPLAT_A53Anony -DBUILD_RVP -DBOOT_FW_FROM_SRAM -DENABLE_MMU -DBUILD_UNITY -DBUILD_ETH -DNETWORK_UTILS -DNET_AUTOLOAD -DBUILD_DM -DBUILD_SYSM -DFOOTPRINT_TEST  -nostdinc -fno-builtin -Wall -fdata-sections -ffunction-sections")
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

#set(CMAKE_C_FLAGS_INIT "-std=c11 ${ARCH_CPU_FLAGS} ${ARCH_OPT_FLAGS}" CACHE STRING "" FORCE)
#set(CMAKE_CXX_FLAGS_INIT "-std=c++14 ${ARCH_CPU_FLAGS} ${ARCH_OPT_FLAGS} " CACHE STRING "" FORCE)
set(CMAKE_C_FLAGS_INIT "-std=c99 ${ARCH_CPU_FLAGS} ${ARCH_OPT_FLAGS}" CACHE STRING "" FORCE)
set(CMAKE_CXX_FLAGS_INIT "-std=c++11 ${ARCH_CPU_FLAGS} ${ARCH_OPT_FLAGS} " CACHE STRING "" FORCE)


#include_directories(
include_directories(SYSTEM 
	/home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_intel_A53Anony_extensions/include
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_intel_A53Anony_extensions/include/private
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_intel_A53Anony_extensions/include/FreeRTOS_POSIX
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_intel_A53Anony_extensions/FreeRTOS-Plus-POSIX/include
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_intel_A53Anony_extensions/include/FreeRTOS_POSIX/sys
 /home/zhous/A53Anony/master/os/freertos/os_shared/include
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/freertos-smp
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/freertos-smp/include
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/freertos-smp/portable/include
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/drivers
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/drivers/delay_timer
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/drivers/ehu
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/drivers/gic
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/drivers/hal
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/drivers/A53Anony
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/drivers/include
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/drivers/mmu
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/drivers/perf_pmu
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/drivers/uart
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/drivers/wdt
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/heaps
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/include
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/rtos_support/include
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/tests/benchmarks
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/tests/freertos-test/include
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/third-party
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/third-party/benchmark/include
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/third-party/console
 /home/zhous/A53Anony/master/os/freertos/Boards/A53Anony/third-party/debug
 /home/zhous/A53Anony/master/os/freertos/FreeRTOS-Posix/FreeRTOS-Plus-POSIX/include
 /home/zhous/A53Anony/master/os/freertos/FreeRTOS-Posix/FreeRTOS-Plus-POSIX/include/portable
 /home/zhous/A53Anony/master/os/freertos/FreeRTOS-Posix/FreeRTOS-Plus-POSIX/include/portable/intel/A53Anony
 /home/zhous/A53Anony/master/io/ethernet
 /home/zhous/A53Anony/master/io/ethernet/eqos
 /home/zhous/A53Anony/master/io/ethernet/include
 /home/zhous/A53Anony/master/io/ethernet/include/freertos
 /home/zhous/A53Anony/master/io/ethernet/phy
 /home/zhous/A53Anony/master/os/freertos/FreeRTOS-Plus/Source/FreeRTOS-Plus-TCP/include
 /home/zhous/A53Anony/master/os/freertos/FreeRTOS-Plus/Source/FreeRTOS-Plus-TCP/portable/Compiler/GCC
 /home/zhous/A53Anony/master/runtime/ert_cxx/include
 /home/zhous/A53Anony/master/runtime/libc/include
 /home/zhous/A53Anony/master/runtime/libc/include/sys
 /home/zhous/A53Anony/master/runtime/libc/include/aarch64
 /home/zhous/A53Anony/master/runtime/libc/src/math
 /home/zhous/A53Anony/master/runtime/libcxx/include
 /home/zhous/A53Anony/master/runtime/osal/include
 /home/zhous/A53Anony/master/common/cbm/include
 /home/zhous/A53Anony/master/common/component_base/interface
 /home/zhous/A53Anony/master/common/drv_utils/include
 /home/zhous/A53Anony/master/common/kosal/interface
 /home/zhous/A53Anony/master/common/mef/include
 /home/zhous/A53Anony/master/common/pm/include
 /home/zhous/A53Anony/master/common/socket/include
 /home/zhous/A53Anony/master/common/top_pbk/include
 /home/zhous/A53Anony/master/common/trace_log/include
 /home/zhous/ROS2/micros_ws/firmware/freertos_apps/microros_intel_A53Anony_extensions/../../toolchain/lib/gcc/aarch64-none-elf/9.2.1/include

    )
    
set(__BIG_ENDIAN__ 0)
