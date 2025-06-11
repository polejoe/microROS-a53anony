
EXTENSIONS_DIR=$FW_TARGETDIR/freertos_apps/microros_intel_A53Anony_extensions

. $PREFIX/config/utils.sh

function help {
      echo "Configure script need an argument."
      echo "   --transport -t       udp, tcp, serial or serial-usb"
      echo "   --dev -d             agent string descriptor in a serial-like transport"
      echo "   --ip -i              agent IP in a network-like transport"
      echo "   --port -p            agent port in a network-like transport"
}

echo $CONFIG_NAME > $FW_TARGETDIR/APP


    #intel A53Anony
    cp ${CMAKE_PREFIX_PATH}/config/freertos/intel-A53Anony/client-colcon.meta $FW_TARGETDIR/mcu_ws/colcon.meta
    sed '/RMW_UXRCE_TRANSPORT/d' -i $FW_TARGETDIR/freertos_apps/apps/$CONFIG_NAME/app-colcon.meta

    [ -d $EXTENSIONS_DIR ] || {
        [ -d "${FW_TARGETDIR}/freertos_apps/microros_olimex_e407_extensions/" ] || {
            echo " NO find  extension dir microros_olimex_e407_extensions ... "
            exit 1
        }
        cp -rf ${FW_TARGETDIR}/freertos_apps/microros_olimex_e407_extensions $EXTENSIONS_DIR
    }

    cp ${CMAKE_PREFIX_PATH}/config/freertos/intel-A53Anony/arm_toolchain.cmake.in ${EXTENSIONS_DIR}/
    cp ${CMAKE_PREFIX_PATH}/config/freertos/intel-A53Anony/Makefile ${EXTENSIONS_DIR}/Makefile
    
    ln -sf ${CMAKE_PREFIX_PATH}/config/freertos/intel-A53Anony ${EXTENSIONS_DIR}/intel-A53Anony

    echo " A53Anony Make wrapper prepared ! "
    #intel A53Anony



if [ "$UROS_TRANSPORT" == "udp" ] || [ "$UROS_TRANSPORT" == "tcp" ]; then

      update_meta "rmw_microxrcedds" "RMW_UXRCE_TRANSPORT="$UROS_TRANSPORT
      update_meta "rmw_microxrcedds" "RMW_UXRCE_DEFAULT_UDP_IP="$UROS_AGENT_IP
      update_meta "rmw_microxrcedds" "RMW_UXRCE_DEFAULT_UDP_PORT="$UROS_AGENT_PORT

      remove_meta "rmw_microxrcedds" "RMW_UXRCE_DEFAULT_SERIAL_DEVICE"
      remove_meta "microxrcedds_client" "EXTERNAL_TRANSPORT_HEADER_SERIAL"
      remove_meta "microxrcedds_client" "EXTERNAL_TRANSPORT_SRC_SERIAL"

      echo "Configured app $CONFIG_NAME $UROS_TRANSPORT mode with agent at $UROS_AGENT_IP:$UROS_AGENT_PORT"

elif [ "$UROS_TRANSPORT" == "serial" ]; then
      echo "Using serial device USART$UROS_AGENT_DEVICE."

      cp -f $EXTENSIONS_DIR/Src/olimex_e407_serial_transport.c $FW_TARGETDIR/mcu_ws/eProsima/Micro-XRCE-DDS-Client/src/c/profile/transport/serial/serial_transport_external.c
      cp -f $EXTENSIONS_DIR/Inc/olimex_e407_serial_transport.h $FW_TARGETDIR/mcu_ws/eProsima/Micro-XRCE-DDS-Client/include/uxr/client/profile/transport/serial/serial_transport_external.h
      update_meta "microxrcedds_client" "UCLIENT_EXTERNAL_SERIAL=ON"

      update_meta "rmw_microxrcedds" "RMW_UXRCE_TRANSPORT=custom"
      update_meta "rmw_microxrcedds" "RMW_UXRCE_DEFAULT_SERIAL_DEVICE="$UROS_AGENT_DEVICE

      remove_meta "rmw_microxrcedds" "RMW_UXRCE_DEFAULT_UDP_IP"
      remove_meta "rmw_microxrcedds" "RMW_UXRCE_DEFAULT_UDP_PORT"

      echo "Configured $UROS_TRANSPORT mode with agent at USART$UROS_AGENT_DEVICE"

elif [ "$UROS_TRANSPORT" == "serial-usb" ]; then
      echo "Using serial USB device. EXPERIMENTAL."

      cp -f $EXTENSIONS_DIR/Src/olimex_e407_usb_transport.c $FW_TARGETDIR/mcu_ws/eProsima/Micro-XRCE-DDS-Client/src/c/profile/transport/serial/serial_transport_external.c
      cp -f $EXTENSIONS_DIR/Inc/olimex_e407_usb_transport.h $FW_TARGETDIR/mcu_ws/eProsima/Micro-XRCE-DDS-Client/include/uxr/client/profile/transport/serial/serial_transport_external.h
      update_meta "microxrcedds_client" "UCLIENT_EXTERNAL_SERIAL=ON"

      update_meta "rmw_microxrcedds" "RMW_UXRCE_TRANSPORT=custom_serial"

      remove_meta "rmw_microxrcedds" "RMW_UXRCE_DEFAULT_UDP_IP"
      remove_meta "rmw_microxrcedds" "RMW_UXRCE_DEFAULT_UDP_PORT"

      echo "Configured $UROS_TRANSPORT mode with agent"
else
      help
fi
