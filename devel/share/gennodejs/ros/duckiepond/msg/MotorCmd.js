// Auto-generated. Do not edit!

// (in-package duckiepond.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class MotorCmd {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.left = null;
      this.right = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('left')) {
        this.left = initObj.left
      }
      else {
        this.left = 0.0;
      }
      if (initObj.hasOwnProperty('right')) {
        this.right = initObj.right
      }
      else {
        this.right = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MotorCmd
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [left]
    bufferOffset = _serializer.float32(obj.left, buffer, bufferOffset);
    // Serialize message field [right]
    bufferOffset = _serializer.float32(obj.right, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MotorCmd
    let len;
    let data = new MotorCmd(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [left]
    data.left = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [right]
    data.right = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'duckiepond/MotorCmd';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b7824dbc6876539e023bc92130e483cb';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Thrust command - typically ranges from {-1.0 - 1.0}
    Header header
    float32 left
    float32 right
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new MotorCmd(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.left !== undefined) {
      resolved.left = msg.left;
    }
    else {
      resolved.left = 0.0
    }

    if (msg.right !== undefined) {
      resolved.right = msg.right;
    }
    else {
      resolved.right = 0.0
    }

    return resolved;
    }
};

module.exports = MotorCmd;
