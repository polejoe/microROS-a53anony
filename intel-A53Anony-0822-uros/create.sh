pushd $FW_TARGETDIR >/dev/null
    # Install toolchain
    mkdir toolchain
    
    
    # Install toolchain
    echo "Downloading ARM compiler, this may take a while"
    #xcn="gcc-arm-none-eabi-8-2019-q3-update-linux.tar.bz2"
    #curl -fsSLO https://developer.arm.com/-/media/Files/downloads/gnu-rm/8-2019q3/RC1.1/gcc-arm-none-eabi-8-2019-q3-update-linux.tar.bz2
    #tar --strip-components=1 -xvjf gcc-arm-none-eabi-8-2019-q3-update-linux.tar.bz2 -C toolchain  > /dev/null
    #rm gcc-arm-none-eabi-8-2019-q3-update-linux.tar.bz2


    #xcn="gcc-linaro-7.5.0-2019.12-x86_64_aarch64-elf.tar.xz"
    xcn="gcc-arm-9.2-2019.12-x86_64-aarch64-none-elf.tar.xz"
    cp -f /home/zhous/ROS2/0.tar/$xcn ./$xcn
    tar --strip-components=1 -xvf $xcn -C toolchain  > /dev/null
    #rm $xcn
    echo " Toolchain [$PWD/$xcn] prepared ! "

    ### A53Anony patch private mcu_ws
    # as xrcedds_client not support FreeRTOS_TCP IP stack in dashing(ubuntu18.04 only support dashing micro_ros suite)
    if [ "`lsb_release -c | awk '{print $2}'`" = "bionic" ]; then
        echo "  Patch Micro-XRCE-DDS-Client to suport FreeRTOS_TCP stack on ubuntu18.04 "
        #patch -d mcu_ws/eProsima/Micro-XRCE-DDS-Client/ -p 1 < patches/00-xrcedds_client-rtos-ip-stack-base-dashing.patch
        dn="mcu_ws/eProsima/Micro-XRCE-DDS-Client/"
        pns="00-xrcedds_client-rtos-ip-stack-base-dashing.patch 01-xrcedds_client-mtu-1500.patch"
        for pn in $pns; do
            cp patches/$pn $dn
            cd $dn
            git apply $pn
            cd -
        done
    fi

    # patch rosidl_typesupport_c to fix cpp build issue W/ A53Anony RT
    pn="02-rosidl_typesupport_c-fix-build-issue.patch"
    dn="mcu_ws/ros2/rosidl_typesupport";
    cp patches/$pn $dn
    cd $dn
    git apply $pn
    cd -
    ### A53Anony patch done
    
    # Import repos
    vcs import --input $PREFIX/config/$RTOS/$PLATFORM/board.repos 2>&1
    echo " board repo prepared ! "

    # ignore broken packages
    touch mcu_ws/ros2/rcl_logging/rcl_logging_log4cxx/COLCON_IGNORE
    touch mcu_ws/ros2/rcl/COLCON_IGNORE

    export ROS_DISTRO=foxy
    rosdep install -y --from-paths mcu_ws -i mcu_ws --rosdistro dashing --skip-keys="$SKIP"
    echo " rosdep install done ! "

popd >/dev/null
