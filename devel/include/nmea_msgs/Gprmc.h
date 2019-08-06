// Generated by gencpp from file nmea_msgs/Gprmc.msg
// DO NOT EDIT!


#ifndef NMEA_MSGS_MESSAGE_GPRMC_H
#define NMEA_MSGS_MESSAGE_GPRMC_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace nmea_msgs
{
template <class ContainerAllocator>
struct Gprmc_
{
  typedef Gprmc_<ContainerAllocator> Type;

  Gprmc_()
    : header()
    , message_id()
    , utc_seconds(0.0)
    , position_status()
    , lat(0.0)
    , lon(0.0)
    , lat_dir()
    , lon_dir()
    , speed(0.0)
    , track(0.0)
    , date()
    , mag_var(0.0)
    , mag_var_direction()
    , mode_indicator()  {
    }
  Gprmc_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , message_id(_alloc)
    , utc_seconds(0.0)
    , position_status(_alloc)
    , lat(0.0)
    , lon(0.0)
    , lat_dir(_alloc)
    , lon_dir(_alloc)
    , speed(0.0)
    , track(0.0)
    , date(_alloc)
    , mag_var(0.0)
    , mag_var_direction(_alloc)
    , mode_indicator(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_id_type;
  _message_id_type message_id;

   typedef double _utc_seconds_type;
  _utc_seconds_type utc_seconds;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _position_status_type;
  _position_status_type position_status;

   typedef double _lat_type;
  _lat_type lat;

   typedef double _lon_type;
  _lon_type lon;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _lat_dir_type;
  _lat_dir_type lat_dir;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _lon_dir_type;
  _lon_dir_type lon_dir;

   typedef float _speed_type;
  _speed_type speed;

   typedef float _track_type;
  _track_type track;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _date_type;
  _date_type date;

   typedef float _mag_var_type;
  _mag_var_type mag_var;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mag_var_direction_type;
  _mag_var_direction_type mag_var_direction;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mode_indicator_type;
  _mode_indicator_type mode_indicator;





  typedef boost::shared_ptr< ::nmea_msgs::Gprmc_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nmea_msgs::Gprmc_<ContainerAllocator> const> ConstPtr;

}; // struct Gprmc_

typedef ::nmea_msgs::Gprmc_<std::allocator<void> > Gprmc;

typedef boost::shared_ptr< ::nmea_msgs::Gprmc > GprmcPtr;
typedef boost::shared_ptr< ::nmea_msgs::Gprmc const> GprmcConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nmea_msgs::Gprmc_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nmea_msgs::Gprmc_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nmea_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'nmea_msgs': ['/home/arg/duckiepond-nctu/catkin_ws/src/sensor/nmea_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nmea_msgs::Gprmc_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nmea_msgs::Gprmc_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nmea_msgs::Gprmc_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nmea_msgs::Gprmc_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nmea_msgs::Gprmc_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nmea_msgs::Gprmc_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nmea_msgs::Gprmc_<ContainerAllocator> >
{
  static const char* value()
  {
    return "02533bac67f17457b2e3538525ba1aae";
  }

  static const char* value(const ::nmea_msgs::Gprmc_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x02533bac67f17457ULL;
  static const uint64_t static_value2 = 0xb2e3538525ba1aaeULL;
};

template<class ContainerAllocator>
struct DataType< ::nmea_msgs::Gprmc_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nmea_msgs/Gprmc";
  }

  static const char* value(const ::nmea_msgs::Gprmc_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nmea_msgs::Gprmc_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message from GPRMC NMEA String\n"
"Header header\n"
"\n"
"string message_id\n"
"\n"
"float64 utc_seconds\n"
"string position_status\n"
"\n"
"float64 lat\n"
"float64 lon\n"
"\n"
"string lat_dir\n"
"string lon_dir\n"
"\n"
"float32 speed\n"
"float32 track\n"
"string date\n"
"float32 mag_var\n"
"string mag_var_direction\n"
"string mode_indicator\n"
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
;
  }

  static const char* value(const ::nmea_msgs::Gprmc_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nmea_msgs::Gprmc_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.message_id);
      stream.next(m.utc_seconds);
      stream.next(m.position_status);
      stream.next(m.lat);
      stream.next(m.lon);
      stream.next(m.lat_dir);
      stream.next(m.lon_dir);
      stream.next(m.speed);
      stream.next(m.track);
      stream.next(m.date);
      stream.next(m.mag_var);
      stream.next(m.mag_var_direction);
      stream.next(m.mode_indicator);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Gprmc_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nmea_msgs::Gprmc_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nmea_msgs::Gprmc_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "message_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message_id);
    s << indent << "utc_seconds: ";
    Printer<double>::stream(s, indent + "  ", v.utc_seconds);
    s << indent << "position_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.position_status);
    s << indent << "lat: ";
    Printer<double>::stream(s, indent + "  ", v.lat);
    s << indent << "lon: ";
    Printer<double>::stream(s, indent + "  ", v.lon);
    s << indent << "lat_dir: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.lat_dir);
    s << indent << "lon_dir: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.lon_dir);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
    s << indent << "track: ";
    Printer<float>::stream(s, indent + "  ", v.track);
    s << indent << "date: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.date);
    s << indent << "mag_var: ";
    Printer<float>::stream(s, indent + "  ", v.mag_var);
    s << indent << "mag_var_direction: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mag_var_direction);
    s << indent << "mode_indicator: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mode_indicator);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NMEA_MSGS_MESSAGE_GPRMC_H
