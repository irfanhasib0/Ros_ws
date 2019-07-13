; Auto-generated. Do not edit!


(cl:in-package robotiq_msgs-msg)


;//! \htmlinclude CModelCommandResult.msg.html

(cl:defclass <CModelCommandResult> (roslisp-msg-protocol:ros-message)
  ((position
    :reader position
    :initarg :position
    :type cl:float
    :initform 0.0)
   (stalled
    :reader stalled
    :initarg :stalled
    :type cl:boolean
    :initform cl:nil)
   (reached_goal
    :reader reached_goal
    :initarg :reached_goal
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass CModelCommandResult (<CModelCommandResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CModelCommandResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CModelCommandResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotiq_msgs-msg:<CModelCommandResult> is deprecated: use robotiq_msgs-msg:CModelCommandResult instead.")))

(cl:ensure-generic-function 'position-val :lambda-list '(m))
(cl:defmethod position-val ((m <CModelCommandResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotiq_msgs-msg:position-val is deprecated.  Use robotiq_msgs-msg:position instead.")
  (position m))

(cl:ensure-generic-function 'stalled-val :lambda-list '(m))
(cl:defmethod stalled-val ((m <CModelCommandResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotiq_msgs-msg:stalled-val is deprecated.  Use robotiq_msgs-msg:stalled instead.")
  (stalled m))

(cl:ensure-generic-function 'reached_goal-val :lambda-list '(m))
(cl:defmethod reached_goal-val ((m <CModelCommandResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotiq_msgs-msg:reached_goal-val is deprecated.  Use robotiq_msgs-msg:reached_goal instead.")
  (reached_goal m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CModelCommandResult>) ostream)
  "Serializes a message object of type '<CModelCommandResult>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'position))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'stalled) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'reached_goal) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CModelCommandResult>) istream)
  "Deserializes a message object of type '<CModelCommandResult>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'position) (roslisp-utils:decode-double-float-bits bits)))
    (cl:setf (cl:slot-value msg 'stalled) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'reached_goal) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CModelCommandResult>)))
  "Returns string type for a message object of type '<CModelCommandResult>"
  "robotiq_msgs/CModelCommandResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CModelCommandResult)))
  "Returns string type for a message object of type 'CModelCommandResult"
  "robotiq_msgs/CModelCommandResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CModelCommandResult>)))
  "Returns md5sum for a message object of type '<CModelCommandResult>"
  "ffc2fb41cfc90efec9eb5bd987b5cbf4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CModelCommandResult)))
  "Returns md5sum for a message object of type 'CModelCommandResult"
  "ffc2fb41cfc90efec9eb5bd987b5cbf4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CModelCommandResult>)))
  "Returns full string definition for message of type '<CModelCommandResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Result~%float64     position~%bool        stalled~%bool        reached_goal~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CModelCommandResult)))
  "Returns full string definition for message of type 'CModelCommandResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Result~%float64     position~%bool        stalled~%bool        reached_goal~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CModelCommandResult>))
  (cl:+ 0
     8
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CModelCommandResult>))
  "Converts a ROS message object to a list"
  (cl:list 'CModelCommandResult
    (cl:cons ':position (position msg))
    (cl:cons ':stalled (stalled msg))
    (cl:cons ':reached_goal (reached_goal msg))
))
