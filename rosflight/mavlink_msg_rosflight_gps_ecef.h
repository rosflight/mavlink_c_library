// MESSAGE ROSFLIGHT_GPS_ECEF PACKING

#define MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF 196

typedef struct __mavlink_rosflight_gps_ecef_t
{
 float pos_ecef_x; /*< */
 float pos_ecef_y; /*< */
 float pos_ecef_z; /*< */
 float vel_ecef_x; /*< */
 float vel_ecef_y; /*< */
 float vel_ecef_z; /*< */
} mavlink_rosflight_gps_ecef_t;

#define MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN 24
#define MAVLINK_MSG_ID_196_LEN 24

#define MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_CRC 46
#define MAVLINK_MSG_ID_196_CRC 46



#define MAVLINK_MESSAGE_INFO_ROSFLIGHT_GPS_ECEF { \
	"ROSFLIGHT_GPS_ECEF", \
	6, \
	{  { "pos_ecef_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_rosflight_gps_ecef_t, pos_ecef_x) }, \
         { "pos_ecef_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_rosflight_gps_ecef_t, pos_ecef_y) }, \
         { "pos_ecef_z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_rosflight_gps_ecef_t, pos_ecef_z) }, \
         { "vel_ecef_x", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_rosflight_gps_ecef_t, vel_ecef_x) }, \
         { "vel_ecef_y", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_rosflight_gps_ecef_t, vel_ecef_y) }, \
         { "vel_ecef_z", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_rosflight_gps_ecef_t, vel_ecef_z) }, \
         } \
}


/**
 * @brief Pack a rosflight_gps_ecef message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pos_ecef_x 
 * @param pos_ecef_y 
 * @param pos_ecef_z 
 * @param vel_ecef_x 
 * @param vel_ecef_y 
 * @param vel_ecef_z 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_gps_ecef_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float pos_ecef_x, float pos_ecef_y, float pos_ecef_z, float vel_ecef_x, float vel_ecef_y, float vel_ecef_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN];
	_mav_put_float(buf, 0, pos_ecef_x);
	_mav_put_float(buf, 4, pos_ecef_y);
	_mav_put_float(buf, 8, pos_ecef_z);
	_mav_put_float(buf, 12, vel_ecef_x);
	_mav_put_float(buf, 16, vel_ecef_y);
	_mav_put_float(buf, 20, vel_ecef_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN);
#else
	mavlink_rosflight_gps_ecef_t packet;
	packet.pos_ecef_x = pos_ecef_x;
	packet.pos_ecef_y = pos_ecef_y;
	packet.pos_ecef_z = pos_ecef_z;
	packet.vel_ecef_x = vel_ecef_x;
	packet.vel_ecef_y = vel_ecef_y;
	packet.vel_ecef_z = vel_ecef_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN);
#endif
}

/**
 * @brief Pack a rosflight_gps_ecef message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pos_ecef_x 
 * @param pos_ecef_y 
 * @param pos_ecef_z 
 * @param vel_ecef_x 
 * @param vel_ecef_y 
 * @param vel_ecef_z 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_gps_ecef_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float pos_ecef_x,float pos_ecef_y,float pos_ecef_z,float vel_ecef_x,float vel_ecef_y,float vel_ecef_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN];
	_mav_put_float(buf, 0, pos_ecef_x);
	_mav_put_float(buf, 4, pos_ecef_y);
	_mav_put_float(buf, 8, pos_ecef_z);
	_mav_put_float(buf, 12, vel_ecef_x);
	_mav_put_float(buf, 16, vel_ecef_y);
	_mav_put_float(buf, 20, vel_ecef_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN);
#else
	mavlink_rosflight_gps_ecef_t packet;
	packet.pos_ecef_x = pos_ecef_x;
	packet.pos_ecef_y = pos_ecef_y;
	packet.pos_ecef_z = pos_ecef_z;
	packet.vel_ecef_x = vel_ecef_x;
	packet.vel_ecef_y = vel_ecef_y;
	packet.vel_ecef_z = vel_ecef_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN);
#endif
}

/**
 * @brief Encode a rosflight_gps_ecef struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_gps_ecef C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_gps_ecef_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rosflight_gps_ecef_t* rosflight_gps_ecef)
{
	return mavlink_msg_rosflight_gps_ecef_pack(system_id, component_id, msg, rosflight_gps_ecef->pos_ecef_x, rosflight_gps_ecef->pos_ecef_y, rosflight_gps_ecef->pos_ecef_z, rosflight_gps_ecef->vel_ecef_x, rosflight_gps_ecef->vel_ecef_y, rosflight_gps_ecef->vel_ecef_z);
}

/**
 * @brief Encode a rosflight_gps_ecef struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_gps_ecef C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_gps_ecef_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rosflight_gps_ecef_t* rosflight_gps_ecef)
{
	return mavlink_msg_rosflight_gps_ecef_pack_chan(system_id, component_id, chan, msg, rosflight_gps_ecef->pos_ecef_x, rosflight_gps_ecef->pos_ecef_y, rosflight_gps_ecef->pos_ecef_z, rosflight_gps_ecef->vel_ecef_x, rosflight_gps_ecef->vel_ecef_y, rosflight_gps_ecef->vel_ecef_z);
}

/**
 * @brief Send a rosflight_gps_ecef message
 * @param chan MAVLink channel to send the message
 *
 * @param pos_ecef_x 
 * @param pos_ecef_y 
 * @param pos_ecef_z 
 * @param vel_ecef_x 
 * @param vel_ecef_y 
 * @param vel_ecef_z 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rosflight_gps_ecef_send(mavlink_channel_t chan, float pos_ecef_x, float pos_ecef_y, float pos_ecef_z, float vel_ecef_x, float vel_ecef_y, float vel_ecef_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN];
	_mav_put_float(buf, 0, pos_ecef_x);
	_mav_put_float(buf, 4, pos_ecef_y);
	_mav_put_float(buf, 8, pos_ecef_z);
	_mav_put_float(buf, 12, vel_ecef_x);
	_mav_put_float(buf, 16, vel_ecef_y);
	_mav_put_float(buf, 20, vel_ecef_z);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF, buf, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF, buf, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN);
#endif
#else
	mavlink_rosflight_gps_ecef_t packet;
	packet.pos_ecef_x = pos_ecef_x;
	packet.pos_ecef_y = pos_ecef_y;
	packet.pos_ecef_z = pos_ecef_z;
	packet.vel_ecef_x = vel_ecef_x;
	packet.vel_ecef_y = vel_ecef_y;
	packet.vel_ecef_z = vel_ecef_z;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rosflight_gps_ecef_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float pos_ecef_x, float pos_ecef_y, float pos_ecef_z, float vel_ecef_x, float vel_ecef_y, float vel_ecef_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, pos_ecef_x);
	_mav_put_float(buf, 4, pos_ecef_y);
	_mav_put_float(buf, 8, pos_ecef_z);
	_mav_put_float(buf, 12, vel_ecef_x);
	_mav_put_float(buf, 16, vel_ecef_y);
	_mav_put_float(buf, 20, vel_ecef_z);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF, buf, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF, buf, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN);
#endif
#else
	mavlink_rosflight_gps_ecef_t *packet = (mavlink_rosflight_gps_ecef_t *)msgbuf;
	packet->pos_ecef_x = pos_ecef_x;
	packet->pos_ecef_y = pos_ecef_y;
	packet->pos_ecef_z = pos_ecef_z;
	packet->vel_ecef_x = vel_ecef_x;
	packet->vel_ecef_y = vel_ecef_y;
	packet->vel_ecef_z = vel_ecef_z;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROSFLIGHT_GPS_ECEF UNPACKING


/**
 * @brief Get field pos_ecef_x from rosflight_gps_ecef message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_ecef_get_pos_ecef_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field pos_ecef_y from rosflight_gps_ecef message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_ecef_get_pos_ecef_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pos_ecef_z from rosflight_gps_ecef message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_ecef_get_pos_ecef_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field vel_ecef_x from rosflight_gps_ecef message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_ecef_get_vel_ecef_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field vel_ecef_y from rosflight_gps_ecef message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_ecef_get_vel_ecef_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field vel_ecef_z from rosflight_gps_ecef message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_ecef_get_vel_ecef_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a rosflight_gps_ecef message into a struct
 *
 * @param msg The message to decode
 * @param rosflight_gps_ecef C-struct to decode the message contents into
 */
static inline void mavlink_msg_rosflight_gps_ecef_decode(const mavlink_message_t* msg, mavlink_rosflight_gps_ecef_t* rosflight_gps_ecef)
{
#if MAVLINK_NEED_BYTE_SWAP
	rosflight_gps_ecef->pos_ecef_x = mavlink_msg_rosflight_gps_ecef_get_pos_ecef_x(msg);
	rosflight_gps_ecef->pos_ecef_y = mavlink_msg_rosflight_gps_ecef_get_pos_ecef_y(msg);
	rosflight_gps_ecef->pos_ecef_z = mavlink_msg_rosflight_gps_ecef_get_pos_ecef_z(msg);
	rosflight_gps_ecef->vel_ecef_x = mavlink_msg_rosflight_gps_ecef_get_vel_ecef_x(msg);
	rosflight_gps_ecef->vel_ecef_y = mavlink_msg_rosflight_gps_ecef_get_vel_ecef_y(msg);
	rosflight_gps_ecef->vel_ecef_z = mavlink_msg_rosflight_gps_ecef_get_vel_ecef_z(msg);
#else
	memcpy(rosflight_gps_ecef, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROSFLIGHT_GPS_ECEF_LEN);
#endif
}
