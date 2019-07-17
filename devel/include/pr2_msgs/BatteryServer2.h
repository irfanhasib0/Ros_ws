// Generated by gencpp from file pr2_msgs/BatteryServer2.msg
// DO NOT EDIT!


#ifndef PR2_MSGS_MESSAGE_BATTERYSERVER2_H
#define PR2_MSGS_MESSAGE_BATTERYSERVER2_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <pr2_msgs/BatteryState2.h>

namespace pr2_msgs
{
template <class ContainerAllocator>
struct BatteryServer2_
{
  typedef BatteryServer2_<ContainerAllocator> Type;

  BatteryServer2_()
    : header()
    , id(0)
    , last_system_update()
    , time_left()
    , average_charge(0)
    , message()
    , last_controller_update()
    , battery()  {
    }
  BatteryServer2_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , last_system_update()
    , time_left()
    , average_charge(0)
    , message(_alloc)
    , last_controller_update()
    , battery(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _id_type;
  _id_type id;

   typedef ros::Time _last_system_update_type;
  _last_system_update_type last_system_update;

   typedef ros::Duration _time_left_type;
  _time_left_type time_left;

   typedef int32_t _average_charge_type;
  _average_charge_type average_charge;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;

   typedef ros::Time _last_controller_update_type;
  _last_controller_update_type last_controller_update;

   typedef std::vector< ::pr2_msgs::BatteryState2_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pr2_msgs::BatteryState2_<ContainerAllocator> >::other >  _battery_type;
  _battery_type battery;



  enum {
    MAX_BAT_COUNT = 4,
    MAX_BAT_REG = 48,
  };


  typedef boost::shared_ptr< ::pr2_msgs::BatteryServer2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_msgs::BatteryServer2_<ContainerAllocator> const> ConstPtr;

}; // struct BatteryServer2_

typedef ::pr2_msgs::BatteryServer2_<std::allocator<void> > BatteryServer2;

typedef boost::shared_ptr< ::pr2_msgs::BatteryServer2 > BatteryServer2Ptr;
typedef boost::shared_ptr< ::pr2_msgs::BatteryServer2 const> BatteryServer2ConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_msgs::BatteryServer2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_msgs::BatteryServer2_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'pr2_msgs': ['/home/irfan/Desktop/ros_ws/src/pr2/pr2_common/pr2_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_msgs::BatteryServer2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_msgs::BatteryServer2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_msgs::BatteryServer2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_msgs::BatteryServer2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_msgs::BatteryServer2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_msgs::BatteryServer2_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_msgs::BatteryServer2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5f2cec7d06c312d756189db96c1f3819";
  }

  static const char* value(const ::pr2_msgs::BatteryServer2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5f2cec7d06c312d7ULL;
  static const uint64_t static_value2 = 0x56189db96c1f3819ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_msgs::BatteryServer2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_msgs/BatteryServer2";
  }

  static const char* value(const ::pr2_msgs::BatteryServer2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_msgs::BatteryServer2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message communicates the state of a battery server, which controls\n"
"# multiple batteries.\n"
"Header header\n"
"int32 MAX_BAT_COUNT=4\n"
"int32 MAX_BAT_REG=48\n"
"int32 id  # unique ID for each battery server\n"
"# Battery System Stats\n"
"time last_system_update  # last time the system stats where updated\n"
"duration time_left       # in seconds (hardware resolution is 1 minute)\n"
"int32 average_charge     # in percent\n"
"string message           # message from the ocean server\n"
"time last_controller_update # last time a battery status flag was updated\n"
"# for each battery\n"
"pr2_msgs/BatteryState2[] battery\n"
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
"MSG: pr2_msgs/BatteryState2\n"
"# This message communicates the state of a single battery.\n"
"# Battery Controller Flags, one per battery\n"
"bool present       # is this pack present\n"
"bool charging      # is this pack charging\n"
"bool discharging   # is this pack discharging\n"
"bool power_present # is there an input voltage\n"
"bool power_no_good # is there a fault (No Good)\n"
"bool inhibited     # is this pack disabled for some reason\n"
"# These registers are per battery\n"
"time      last_battery_update     # last time any battery update occurred\n"
"int16[48] battery_register        # value of this register in the battery\n"
"bool[48]  battery_update_flag     # Has this register ever been updated\n"
"time[48]  battery_register_update # last time this specific register was updated\n"
;
  }

  static const char* value(const ::pr2_msgs::BatteryServer2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_msgs::BatteryServer2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.last_system_update);
      stream.next(m.time_left);
      stream.next(m.average_charge);
      stream.next(m.message);
      stream.next(m.last_controller_update);
      stream.next(m.battery);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BatteryServer2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_msgs::BatteryServer2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_msgs::BatteryServer2_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "last_system_update: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.last_system_update);
    s << indent << "time_left: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.time_left);
    s << indent << "average_charge: ";
    Printer<int32_t>::stream(s, indent + "  ", v.average_charge);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
    s << indent << "last_controller_update: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.last_controller_update);
    s << indent << "battery[]" << std::endl;
    for (size_t i = 0; i < v.battery.size(); ++i)
    {
      s << indent << "  battery[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pr2_msgs::BatteryState2_<ContainerAllocator> >::stream(s, indent + "    ", v.battery[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_MSGS_MESSAGE_BATTERYSERVER2_H
