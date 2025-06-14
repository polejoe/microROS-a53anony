pushd $FW_TARGETDIR >/dev/null
    # Install toolchain
    mkdir toolchain
    
    
    # Install toolchain
    echo "Downloading ARM compiler, this may take a while"
    #curl -fsSLO https://developer.arm.com/-/media/Files/downloads/gnu-rm/8-2019q3/RC1.1/gcc-arm-none-eabi-8-2019-q3-update-linux.tar.bz2
    cp /home/zhous/ROS2/0.tar/gcc-arm-none-eabi-8-2019-q3-update-linux.tar.bz2 ./
    tar --strip-components=1 -xvjf gcc-arm-none-eabi-8-2019-q3-update-linux.tar.bz2 -C toolchain  > /dev/null
    #rm gcc-arm-none-eabi-8-2019-q3-update-linux.tar.bz2
    echo "  toolchain prepared "
   
    # Import repos
    vcs import --input $PREFIX/config/$RTOS/$PLATFORM/board.repos >/dev/null

    # ignore broken packages
    touch mcu_ws/ros2/rcl_logging/rcl_logging_log4cxx/COLCON_IGNORE
    touch mcu_ws/ros2/rcl/COLCON_IGNORE

    rosdep install -y --from-paths mcu_ws -i mcu_ws --rosdistro dashing --skip-keys="$SKIP"
popd >/dev/null
