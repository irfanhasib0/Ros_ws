// Generated by gencpp from file robot_localization/SetPoseRequest.msg
// DO NOT EDIT!


#ifndef ROBOT_LOCALIZATION_MESSAGE_SETPOSEREQUEST_H
#define ROBOT_LOCALIZATION_MESSAGE_SETPOSEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseWithCovarianceStamped.h>

namespace robot_localization
{
template <class ContainerAllocator>
struct SetPoseRequest_
{
  typedef SetPoseRequest_<ContainerAllocator> Type;

  SetPoseRequest_()
    : pose()  {
    }
  SetPoseRequest_(const ContainerAllocator& _alloc)
    : pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::robot_localization::SetPoseRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_localization::SetPoseRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPoseRequest_

typedef ::robot_localization::SetPoseRequest_<std::allocator<void> > SetPoseRequest;

typedef boost::shared_ptr< ::robot_localization::SetPoseRequest > SetPoseRequestPtr;
typedef boost::shared_ptr< ::robot_localization::SetPoseRequest const> SetPoseRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_localization::SetPoseRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_localization::SetPoseRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot_localization

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geographic_msgs': ['/home/irfan/Desktop/ros_ws/src/geographic_info/geographic_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/home/irfan/Desktop/ros_ws/src/unique_identifier/uuid_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot_localization::SetPoseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_localization::SetPoseRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_localization::SetPoseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_localization::SetPoseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_localization::SetPoseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_localization::SetPoseRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_localization::SetPoseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f3e0bbe7a24e1f929488cd1970222d3";
  }

  static const char* value(const ::robot_localization::SetPoseRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f3e0bbe7a24e1f9ULL;
  static const uint64_t static_value2 = 0x29488cd1970222d3ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_localization::SetPoseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_localization/SetPoseRequest";
  }

  static const char* value(const ::robot_localization::SetPoseRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_localization::SetPoseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/PoseWithCovarianceStamped pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovarianceStamped\n"
"# This expresses an estimated pose with a reference coordinate frame and timestamp\n"
"\n"
"Header header\n"
"PoseWithCovariance pose\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovariance\n"
"# This represents a pose in free space with uncertainty.\n"
"\n"
"Pose pose\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::robot_localization::SetPoseRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_localization::SetPoseRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPoseRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_localization::SetPoseRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_localization::SetPoseRequest_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_LOCALIZATION_MESSAGE_SETPOSEREQUEST_H
