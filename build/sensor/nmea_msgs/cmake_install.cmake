# Install script for directory: /home/arg/duckiepond-nctu/catkin_ws/src/sensor/nmea_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/arg/duckiepond-nctu/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nmea_msgs/msg" TYPE FILE FILES
    "/home/arg/duckiepond-nctu/catkin_ws/src/sensor/nmea_msgs/msg/Gpgga.msg"
    "/home/arg/duckiepond-nctu/catkin_ws/src/sensor/nmea_msgs/msg/Gpgsa.msg"
    "/home/arg/duckiepond-nctu/catkin_ws/src/sensor/nmea_msgs/msg/Gpgsv.msg"
    "/home/arg/duckiepond-nctu/catkin_ws/src/sensor/nmea_msgs/msg/GpgsvSatellite.msg"
    "/home/arg/duckiepond-nctu/catkin_ws/src/sensor/nmea_msgs/msg/Gprmc.msg"
    "/home/arg/duckiepond-nctu/catkin_ws/src/sensor/nmea_msgs/msg/Sentence.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nmea_msgs/cmake" TYPE FILE FILES "/home/arg/duckiepond-nctu/catkin_ws/build/sensor/nmea_msgs/catkin_generated/installspace/nmea_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/arg/duckiepond-nctu/catkin_ws/devel/include/nmea_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/arg/duckiepond-nctu/catkin_ws/devel/share/roseus/ros/nmea_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/arg/duckiepond-nctu/catkin_ws/devel/share/common-lisp/ros/nmea_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/arg/duckiepond-nctu/catkin_ws/devel/share/gennodejs/ros/nmea_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/arg/duckiepond-nctu/catkin_ws/devel/lib/python2.7/dist-packages/nmea_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/arg/duckiepond-nctu/catkin_ws/devel/lib/python2.7/dist-packages/nmea_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/arg/duckiepond-nctu/catkin_ws/build/sensor/nmea_msgs/catkin_generated/installspace/nmea_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nmea_msgs/cmake" TYPE FILE FILES "/home/arg/duckiepond-nctu/catkin_ws/build/sensor/nmea_msgs/catkin_generated/installspace/nmea_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nmea_msgs/cmake" TYPE FILE FILES
    "/home/arg/duckiepond-nctu/catkin_ws/build/sensor/nmea_msgs/catkin_generated/installspace/nmea_msgsConfig.cmake"
    "/home/arg/duckiepond-nctu/catkin_ws/build/sensor/nmea_msgs/catkin_generated/installspace/nmea_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nmea_msgs" TYPE FILE FILES "/home/arg/duckiepond-nctu/catkin_ws/src/sensor/nmea_msgs/package.xml")
endif()

