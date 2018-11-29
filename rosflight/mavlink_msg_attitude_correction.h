// MESSAGE ATTITUDE_CORRECTION PACKING

#define MAVLINK_MSG_ID_ATTITUDE_CORRECTION 195

typedef struct __mavlink_attitude_correction_t
{
 float qw; /*< Quaternion scalar value*/
 float qx; /*< Quaternion x value*/
 float qy; /*< Quaternion y value*/
 float qz; /*< Quaternion z value*/
} mavlink_attitude_correction_t;

#define MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN 16
#define MAVLINK_MSG_ID_195_LEN 16

#define MAVLINK_MSG_ID_ATTITUDE_CORRECTION_CRC 253
#define MAVLINK_MSG_ID_195_CRC 253



#define MAVLINK_MESSAGE_INFO_ATTITUDE_CORRECTION { \
	"ATTITUDE_CORRECTION", \
	4, \
	{  { "qw", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_attitude_correction_t, qw) }, \
         { "qx", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_attitude_correction_t, qx) }, \
         { "qy", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_attitude_correction_t, qy) }, \
         { "qz", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_attitude_correction_t, qz) }, \
         } \
}


/**
 * @brief Pack a attitude_correction message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param qw Quaternion scalar value
 * @param qx Quaternion x value
 * @param qy Quaternion y value
 * @param qz Quaternion z value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_correction_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float qw, float qx, float qy, float qz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN];
	_mav_put_float(buf, 0, qw);
	_mav_put_float(buf, 4, qx);
	_mav_put_float(buf, 8, qy);
	_mav_put_float(buf, 12, qz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN);
#else
	mavlink_attitude_correction_t packet;
	packet.qw = qw;
	packet.qx = qx;
	packet.qy = qy;
	packet.qz = qz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ATTITUDE_CORRECTION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN);
#endif
}

/**
 * @brief Pack a attitude_correction message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param qw Quaternion scalar value
 * @param qx Quaternion x value
 * @param qy Quaternion y value
 * @param qz Quaternion z value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_attitude_correction_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float qw,float qx,float qy,float qz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN];
	_mav_put_float(buf, 0, qw);
	_mav_put_float(buf, 4, qx);
	_mav_put_float(buf, 8, qy);
	_mav_put_float(buf, 12, qz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN);
#else
	mavlink_attitude_correction_t packet;
	packet.qw = qw;
	packet.qx = qx;
	packet.qy = qy;
	packet.qz = qz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ATTITUDE_CORRECTION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN);
#endif
}

/**
 * @brief Encode a attitude_correction struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param attitude_correction C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_attitude_correction_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_attitude_correction_t* attitude_correction)
{
	return mavlink_msg_attitude_correction_pack(system_id, component_id, msg, attitude_correction->qw, attitude_correction->qx, attitude_correction->qy, attitude_correction->qz);
}

/**
 * @brief Encode a attitude_correction struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param attitude_correction C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_attitude_correction_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_attitude_correction_t* attitude_correction)
{
	return mavlink_msg_attitude_correction_pack_chan(system_id, component_id, chan, msg, attitude_correction->qw, attitude_correction->qx, attitude_correction->qy, attitude_correction->qz);
}

/**
 * @brief Send a attitude_correction message
 * @param chan MAVLink channel to send the message
 *
 * @param qw Quaternion scalar value
 * @param qx Quaternion x value
 * @param qy Quaternion y value
 * @param qz Quaternion z value
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_attitude_correction_send(mavlink_channel_t chan, float qw, float qx, float qy, float qz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN];
	_mav_put_float(buf, 0, qw);
	_mav_put_float(buf, 4, qx);
	_mav_put_float(buf, 8, qy);
	_mav_put_float(buf, 12, qz);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CORRECTION, buf, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CORRECTION, buf, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN);
#endif
#else
	mavlink_attitude_correction_t packet;
	packet.qw = qw;
	packet.qx = qx;
	packet.qy = qy;
	packet.qz = qz;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CORRECTION, (const char *)&packet, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CORRECTION, (const char *)&packet, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_attitude_correction_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float qw, float qx, float qy, float qz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, qw);
	_mav_put_float(buf, 4, qx);
	_mav_put_float(buf, 8, qy);
	_mav_put_float(buf, 12, qz);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CORRECTION, buf, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CORRECTION, buf, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN);
#endif
#else
	mavlink_attitude_correction_t *packet = (mavlink_attitude_correction_t *)msgbuf;
	packet->qw = qw;
	packet->qx = qx;
	packet->qy = qy;
	packet->qz = qz;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CORRECTION, (const char *)packet, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ATTITUDE_CORRECTION, (const char *)packet, MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ATTITUDE_CORRECTION UNPACKING


/**
 * @brief Get field qw from attitude_correction message
 *
 * @return Quaternion scalar value
 */
static inline float mavlink_msg_attitude_correction_get_qw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field qx from attitude_correction message
 *
 * @return Quaternion x value
 */
static inline float mavlink_msg_attitude_correction_get_qx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field qy from attitude_correction message
 *
 * @return Quaternion y value
 */
static inline float mavlink_msg_attitude_correction_get_qy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field qz from attitude_correction message
 *
 * @return Quaternion z value
 */
static inline float mavlink_msg_attitude_correction_get_qz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a attitude_correction message into a struct
 *
 * @param msg The message to decode
 * @param attitude_correction C-struct to decode the message contents into
 */
static inline void mavlink_msg_attitude_correction_decode(const mavlink_message_t* msg, mavlink_attitude_correction_t* attitude_correction)
{
#if MAVLINK_NEED_BYTE_SWAP
	attitude_correction->qw = mavlink_msg_attitude_correction_get_qw(msg);
	attitude_correction->qx = mavlink_msg_attitude_correction_get_qx(msg);
	attitude_correction->qy = mavlink_msg_attitude_correction_get_qy(msg);
	attitude_correction->qz = mavlink_msg_attitude_correction_get_qz(msg);
#else
	memcpy(attitude_correction, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ATTITUDE_CORRECTION_LEN);
#endif
}
