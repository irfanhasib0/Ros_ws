# Install script for directory: /home/irfan/Desktop/ros_ws/src/pr2/pr2_navigation/pr2_navigation_slam

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/irfan/Desktop/ros_ws/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/irfan/Desktop/ros_ws/build/pr2/pr2_navigation/pr2_navigation_slam/catkin_generated/installspace/pr2_navigation_slam.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pr2_navigation_slam/cmake" TYPE FILE FILES
    "/home/irfan/Desktop/ros_ws/build/pr2/pr2_navigation/pr2_navigation_slam/catkin_generated/installspace/pr2_navigation_slamConfig.cmake"
    "/home/irfan/Desktop/ros_ws/build/pr2/pr2_navigation/pr2_navigation_slam/catkin_generated/installspace/pr2_navigation_slamConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pr2_navigation_slam" TYPE FILE FILES "/home/irfan/Desktop/ros_ws/src/pr2/pr2_navigation/pr2_navigation_slam/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pr2_navigation_slam" TYPE FILE FILES
    "/home/irfan/Desktop/ros_ws/src/pr2/pr2_navigation/pr2_navigation_slam/move_base.xml"
    "/home/irfan/Desktop/ros_ws/src/pr2/pr2_navigation/pr2_navigation_slam/slam_gmapping.xml"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pr2_navigation_slam" TYPE DIRECTORY FILES
    "/home/irfan/Desktop/ros_ws/src/pr2/pr2_navigation/pr2_navigation_slam/rviz"
    "/home/irfan/Desktop/ros_ws/src/pr2/pr2_navigation/pr2_navigation_slam/config"
    )
endif()

