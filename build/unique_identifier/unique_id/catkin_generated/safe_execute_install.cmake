execute_process(COMMAND "/home/irfan/Desktop/ros_ws/build/unique_identifier/unique_id/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/irfan/Desktop/ros_ws/build/unique_identifier/unique_id/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
