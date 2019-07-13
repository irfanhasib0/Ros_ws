// Generated by gencpp from file robotiq_msgs/CModelCommandResult.msg
// DO NOT EDIT!


#ifndef ROBOTIQ_MSGS_MESSAGE_CMODELCOMMANDRESULT_H
#define ROBOTIQ_MSGS_MESSAGE_CMODELCOMMANDRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotiq_msgs
{
template <class ContainerAllocator>
struct CModelCommandResult_
{
  typedef CModelCommandResult_<ContainerAllocator> Type;

  CModelCommandResult_()
    : position(0.0)
    , stalled(false)
    , reached_goal(false)  {
    }
  CModelCommandResult_(const ContainerAllocator& _alloc)
    : position(0.0)
    , stalled(false)
    , reached_goal(false)  {
  (void)_alloc;
    }



   typedef double _position_type;
  _position_type position;

   typedef uint8_t _stalled_type;
  _stalled_type stalled;

   typedef uint8_t _reached_goal_type;
  _reached_goal_type reached_goal;





  typedef boost::shared_ptr< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> const> ConstPtr;

}; // struct CModelCommandResult_

typedef ::robotiq_msgs::CModelCommandResult_<std::allocator<void> > CModelCommandResult;

typedef boost::shared_ptr< ::robotiq_msgs::CModelCommandResult > CModelCommandResultPtr;
typedef boost::shared_ptr< ::robotiq_msgs::CModelCommandResult const> CModelCommandResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robotiq_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'robotiq_msgs': ['/home/irfan/Desktop/ros_ws/src/robotiq/robotiq_msgs/msg', '/home/irfan/Desktop/ros_ws/devel/share/robotiq_msgs/msg'], 'control_msgs': ['/opt/ros/melodic/share/control_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ffc2fb41cfc90efec9eb5bd987b5cbf4";
  }

  static const char* value(const ::robotiq_msgs::CModelCommandResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xffc2fb41cfc90efeULL;
  static const uint64_t static_value2 = 0xc9eb5bd987b5cbf4ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotiq_msgs/CModelCommandResult";
  }

  static const char* value(const ::robotiq_msgs::CModelCommandResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Result\n"
"float64     position\n"
"bool        stalled\n"
"bool        reached_goal\n"
;
  }

  static const char* value(const ::robotiq_msgs::CModelCommandResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.stalled);
      stream.next(m.reached_goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CModelCommandResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotiq_msgs::CModelCommandResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotiq_msgs::CModelCommandResult_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "stalled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stalled);
    s << indent << "reached_goal: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reached_goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTIQ_MSGS_MESSAGE_CMODELCOMMANDRESULT_H
