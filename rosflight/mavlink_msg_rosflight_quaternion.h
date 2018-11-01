// MESSAGE ROSFLIGHT_QUATERNION PACKING

#define MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION 195

typedef struct __mavlink_rosflight_quaternion_t
{
 float qw; /*< */
 float qx; /*< */
 float qy; /*< */
 float qz; /*< */
} mavlink_rosflight_quaternion_t;

#define MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN 16
#define MAVLINK_MSG_ID_195_LEN 16

#define MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_CRC 19
#define MAVLINK_MSG_ID_195_CRC 19



#define MAVLINK_MESSAGE_INFO_ROSFLIGHT_QUATERNION { \
	"ROSFLIGHT_QUATERNION", \
	4, \
	{  { "qw", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_rosflight_quaternion_t, qw) }, \
         { "qx", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_rosflight_quaternion_t, qx) }, \
         { "qy", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_rosflight_quaternion_t, qy) }, \
         { "qz", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_rosflight_quaternion_t, qz) }, \
         } \
}


/**
 * @brief Pack a rosflight_quaternion message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param qw 
 * @param qx 
 * @param qy 
 * @param qz 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_quaternion_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float qw, float qx, float qy, float qz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN];
	_mav_put_float(buf, 0, qw);
	_mav_put_float(buf, 4, qx);
	_mav_put_float(buf, 8, qy);
	_mav_put_float(buf, 12, qz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN);
#else
	mavlink_rosflight_quaternion_t packet;
	packet.qw = qw;
	packet.qx = qx;
	packet.qy = qy;
	packet.qz = qz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN);
#endif
}

/**
 * @brief Pack a rosflight_quaternion message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param qw 
 * @param qx 
 * @param qy 
 * @param qz 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_quaternion_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float qw,float qx,float qy,float qz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN];
	_mav_put_float(buf, 0, qw);
	_mav_put_float(buf, 4, qx);
	_mav_put_float(buf, 8, qy);
	_mav_put_float(buf, 12, qz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN);
#else
	mavlink_rosflight_quaternion_t packet;
	packet.qw = qw;
	packet.qx = qx;
	packet.qy = qy;
	packet.qz = qz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN);
#endif
}

/**
 * @brief Encode a rosflight_quaternion struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_quaternion C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_quaternion_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rosflight_quaternion_t* rosflight_quaternion)
{
	return mavlink_msg_rosflight_quaternion_pack(system_id, component_id, msg, rosflight_quaternion->qw, rosflight_quaternion->qx, rosflight_quaternion->qy, rosflight_quaternion->qz);
}

/**
 * @brief Encode a rosflight_quaternion struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_quaternion C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_quaternion_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rosflight_quaternion_t* rosflight_quaternion)
{
	return mavlink_msg_rosflight_quaternion_pack_chan(system_id, component_id, chan, msg, rosflight_quaternion->qw, rosflight_quaternion->qx, rosflight_quaternion->qy, rosflight_quaternion->qz);
}

/**
 * @brief Send a rosflight_quaternion message
 * @param chan MAVLink channel to send the message
 *
 * @param qw 
 * @param qx 
 * @param qy 
 * @param qz 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rosflight_quaternion_send(mavlink_channel_t chan, float qw, float qx, float qy, float qz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN];
	_mav_put_float(buf, 0, qw);
	_mav_put_float(buf, 4, qx);
	_mav_put_float(buf, 8, qy);
	_mav_put_float(buf, 12, qz);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION, buf, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION, buf, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN);
#endif
#else
	mavlink_rosflight_quaternion_t packet;
	packet.qw = qw;
	packet.qx = qx;
	packet.qy = qy;
	packet.qz = qz;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rosflight_quaternion_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float qw, float qx, float qy, float qz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, qw);
	_mav_put_float(buf, 4, qx);
	_mav_put_float(buf, 8, qy);
	_mav_put_float(buf, 12, qz);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION, buf, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION, buf, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN);
#endif
#else
	mavlink_rosflight_quaternion_t *packet = (mavlink_rosflight_quaternion_t *)msgbuf;
	packet->qw = qw;
	packet->qx = qx;
	packet->qy = qy;
	packet->qz = qz;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROSFLIGHT_QUATERNION UNPACKING


/**
 * @brief Get field qw from rosflight_quaternion message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_quaternion_get_qw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field qx from rosflight_quaternion message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_quaternion_get_qx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field qy from rosflight_quaternion message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_quaternion_get_qy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field qz from rosflight_quaternion message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_quaternion_get_qz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a rosflight_quaternion message into a struct
 *
 * @param msg The message to decode
 * @param rosflight_quaternion C-struct to decode the message contents into
 */
static inline void mavlink_msg_rosflight_quaternion_decode(const mavlink_message_t* msg, mavlink_rosflight_quaternion_t* rosflight_quaternion)
{
#if MAVLINK_NEED_BYTE_SWAP
	rosflight_quaternion->qw = mavlink_msg_rosflight_quaternion_get_qw(msg);
	rosflight_quaternion->qx = mavlink_msg_rosflight_quaternion_get_qx(msg);
	rosflight_quaternion->qy = mavlink_msg_rosflight_quaternion_get_qy(msg);
	rosflight_quaternion->qz = mavlink_msg_rosflight_quaternion_get_qz(msg);
#else
	memcpy(rosflight_quaternion, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROSFLIGHT_QUATERNION_LEN);
#endif
}
