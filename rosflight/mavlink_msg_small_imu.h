// MESSAGE SMALL_IMU PACKING

#define MAVLINK_MSG_ID_SMALL_IMU 181

typedef struct __mavlink_small_imu_t
{
 int16_t stamp; /*< Time in us since last IMU message*/
 int16_t temp; /*< Temperature of IMU*/
 int16_t xacc; /*< Acceleration along X axis*/
 int16_t yacc; /*< Acceleration along Y axis*/
 int16_t zacc; /*< Acceleration along Z axis*/
 int16_t xgyro; /*< Angular speed around X axis*/
 int16_t ygyro; /*< Angular speed around Y axis*/
 int16_t zgyro; /*< Angular speed around Z axis*/
} mavlink_small_imu_t;

#define MAVLINK_MSG_ID_SMALL_IMU_LEN 16
#define MAVLINK_MSG_ID_181_LEN 16

#define MAVLINK_MSG_ID_SMALL_IMU_CRC 173
#define MAVLINK_MSG_ID_181_CRC 173



#define MAVLINK_MESSAGE_INFO_SMALL_IMU { \
	"SMALL_IMU", \
	8, \
	{  { "stamp", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_small_imu_t, stamp) }, \
         { "temp", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_small_imu_t, temp) }, \
         { "xacc", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_small_imu_t, xacc) }, \
         { "yacc", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_small_imu_t, yacc) }, \
         { "zacc", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_small_imu_t, zacc) }, \
         { "xgyro", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_small_imu_t, xgyro) }, \
         { "ygyro", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_small_imu_t, ygyro) }, \
         { "zgyro", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_small_imu_t, zgyro) }, \
         } \
}


/**
 * @brief Pack a small_imu message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param stamp Time in us since last IMU message
 * @param temp Temperature of IMU
 * @param xacc Acceleration along X axis
 * @param yacc Acceleration along Y axis
 * @param zacc Acceleration along Z axis
 * @param xgyro Angular speed around X axis
 * @param ygyro Angular speed around Y axis
 * @param zgyro Angular speed around Z axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_small_imu_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int16_t stamp, int16_t temp, int16_t xacc, int16_t yacc, int16_t zacc, int16_t xgyro, int16_t ygyro, int16_t zgyro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SMALL_IMU_LEN];
	_mav_put_int16_t(buf, 0, stamp);
	_mav_put_int16_t(buf, 2, temp);
	_mav_put_int16_t(buf, 4, xacc);
	_mav_put_int16_t(buf, 6, yacc);
	_mav_put_int16_t(buf, 8, zacc);
	_mav_put_int16_t(buf, 10, xgyro);
	_mav_put_int16_t(buf, 12, ygyro);
	_mav_put_int16_t(buf, 14, zgyro);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SMALL_IMU_LEN);
#else
	mavlink_small_imu_t packet;
	packet.stamp = stamp;
	packet.temp = temp;
	packet.xacc = xacc;
	packet.yacc = yacc;
	packet.zacc = zacc;
	packet.xgyro = xgyro;
	packet.ygyro = ygyro;
	packet.zgyro = zgyro;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SMALL_IMU_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SMALL_IMU;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SMALL_IMU_LEN, MAVLINK_MSG_ID_SMALL_IMU_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SMALL_IMU_LEN);
#endif
}

/**
 * @brief Pack a small_imu message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param stamp Time in us since last IMU message
 * @param temp Temperature of IMU
 * @param xacc Acceleration along X axis
 * @param yacc Acceleration along Y axis
 * @param zacc Acceleration along Z axis
 * @param xgyro Angular speed around X axis
 * @param ygyro Angular speed around Y axis
 * @param zgyro Angular speed around Z axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_small_imu_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int16_t stamp,int16_t temp,int16_t xacc,int16_t yacc,int16_t zacc,int16_t xgyro,int16_t ygyro,int16_t zgyro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SMALL_IMU_LEN];
	_mav_put_int16_t(buf, 0, stamp);
	_mav_put_int16_t(buf, 2, temp);
	_mav_put_int16_t(buf, 4, xacc);
	_mav_put_int16_t(buf, 6, yacc);
	_mav_put_int16_t(buf, 8, zacc);
	_mav_put_int16_t(buf, 10, xgyro);
	_mav_put_int16_t(buf, 12, ygyro);
	_mav_put_int16_t(buf, 14, zgyro);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SMALL_IMU_LEN);
#else
	mavlink_small_imu_t packet;
	packet.stamp = stamp;
	packet.temp = temp;
	packet.xacc = xacc;
	packet.yacc = yacc;
	packet.zacc = zacc;
	packet.xgyro = xgyro;
	packet.ygyro = ygyro;
	packet.zgyro = zgyro;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SMALL_IMU_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SMALL_IMU;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SMALL_IMU_LEN, MAVLINK_MSG_ID_SMALL_IMU_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SMALL_IMU_LEN);
#endif
}

/**
 * @brief Encode a small_imu struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param small_imu C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_small_imu_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_small_imu_t* small_imu)
{
	return mavlink_msg_small_imu_pack(system_id, component_id, msg, small_imu->stamp, small_imu->temp, small_imu->xacc, small_imu->yacc, small_imu->zacc, small_imu->xgyro, small_imu->ygyro, small_imu->zgyro);
}

/**
 * @brief Encode a small_imu struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param small_imu C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_small_imu_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_small_imu_t* small_imu)
{
	return mavlink_msg_small_imu_pack_chan(system_id, component_id, chan, msg, small_imu->stamp, small_imu->temp, small_imu->xacc, small_imu->yacc, small_imu->zacc, small_imu->xgyro, small_imu->ygyro, small_imu->zgyro);
}

/**
 * @brief Send a small_imu message
 * @param chan MAVLink channel to send the message
 *
 * @param stamp Time in us since last IMU message
 * @param temp Temperature of IMU
 * @param xacc Acceleration along X axis
 * @param yacc Acceleration along Y axis
 * @param zacc Acceleration along Z axis
 * @param xgyro Angular speed around X axis
 * @param ygyro Angular speed around Y axis
 * @param zgyro Angular speed around Z axis
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_small_imu_send(mavlink_channel_t chan, int16_t stamp, int16_t temp, int16_t xacc, int16_t yacc, int16_t zacc, int16_t xgyro, int16_t ygyro, int16_t zgyro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SMALL_IMU_LEN];
	_mav_put_int16_t(buf, 0, stamp);
	_mav_put_int16_t(buf, 2, temp);
	_mav_put_int16_t(buf, 4, xacc);
	_mav_put_int16_t(buf, 6, yacc);
	_mav_put_int16_t(buf, 8, zacc);
	_mav_put_int16_t(buf, 10, xgyro);
	_mav_put_int16_t(buf, 12, ygyro);
	_mav_put_int16_t(buf, 14, zgyro);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU, buf, MAVLINK_MSG_ID_SMALL_IMU_LEN, MAVLINK_MSG_ID_SMALL_IMU_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU, buf, MAVLINK_MSG_ID_SMALL_IMU_LEN);
#endif
#else
	mavlink_small_imu_t packet;
	packet.stamp = stamp;
	packet.temp = temp;
	packet.xacc = xacc;
	packet.yacc = yacc;
	packet.zacc = zacc;
	packet.xgyro = xgyro;
	packet.ygyro = ygyro;
	packet.zgyro = zgyro;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU, (const char *)&packet, MAVLINK_MSG_ID_SMALL_IMU_LEN, MAVLINK_MSG_ID_SMALL_IMU_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU, (const char *)&packet, MAVLINK_MSG_ID_SMALL_IMU_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_SMALL_IMU_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_small_imu_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t stamp, int16_t temp, int16_t xacc, int16_t yacc, int16_t zacc, int16_t xgyro, int16_t ygyro, int16_t zgyro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int16_t(buf, 0, stamp);
	_mav_put_int16_t(buf, 2, temp);
	_mav_put_int16_t(buf, 4, xacc);
	_mav_put_int16_t(buf, 6, yacc);
	_mav_put_int16_t(buf, 8, zacc);
	_mav_put_int16_t(buf, 10, xgyro);
	_mav_put_int16_t(buf, 12, ygyro);
	_mav_put_int16_t(buf, 14, zgyro);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU, buf, MAVLINK_MSG_ID_SMALL_IMU_LEN, MAVLINK_MSG_ID_SMALL_IMU_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU, buf, MAVLINK_MSG_ID_SMALL_IMU_LEN);
#endif
#else
	mavlink_small_imu_t *packet = (mavlink_small_imu_t *)msgbuf;
	packet->stamp = stamp;
	packet->temp = temp;
	packet->xacc = xacc;
	packet->yacc = yacc;
	packet->zacc = zacc;
	packet->xgyro = xgyro;
	packet->ygyro = ygyro;
	packet->zgyro = zgyro;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU, (const char *)packet, MAVLINK_MSG_ID_SMALL_IMU_LEN, MAVLINK_MSG_ID_SMALL_IMU_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU, (const char *)packet, MAVLINK_MSG_ID_SMALL_IMU_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE SMALL_IMU UNPACKING


/**
 * @brief Get field stamp from small_imu message
 *
 * @return Time in us since last IMU message
 */
static inline int16_t mavlink_msg_small_imu_get_stamp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field temp from small_imu message
 *
 * @return Temperature of IMU
 */
static inline int16_t mavlink_msg_small_imu_get_temp(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field xacc from small_imu message
 *
 * @return Acceleration along X axis
 */
static inline int16_t mavlink_msg_small_imu_get_xacc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field yacc from small_imu message
 *
 * @return Acceleration along Y axis
 */
static inline int16_t mavlink_msg_small_imu_get_yacc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field zacc from small_imu message
 *
 * @return Acceleration along Z axis
 */
static inline int16_t mavlink_msg_small_imu_get_zacc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field xgyro from small_imu message
 *
 * @return Angular speed around X axis
 */
static inline int16_t mavlink_msg_small_imu_get_xgyro(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field ygyro from small_imu message
 *
 * @return Angular speed around Y axis
 */
static inline int16_t mavlink_msg_small_imu_get_ygyro(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field zgyro from small_imu message
 *
 * @return Angular speed around Z axis
 */
static inline int16_t mavlink_msg_small_imu_get_zgyro(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Decode a small_imu message into a struct
 *
 * @param msg The message to decode
 * @param small_imu C-struct to decode the message contents into
 */
static inline void mavlink_msg_small_imu_decode(const mavlink_message_t* msg, mavlink_small_imu_t* small_imu)
{
#if MAVLINK_NEED_BYTE_SWAP
	small_imu->stamp = mavlink_msg_small_imu_get_stamp(msg);
	small_imu->temp = mavlink_msg_small_imu_get_temp(msg);
	small_imu->xacc = mavlink_msg_small_imu_get_xacc(msg);
	small_imu->yacc = mavlink_msg_small_imu_get_yacc(msg);
	small_imu->zacc = mavlink_msg_small_imu_get_zacc(msg);
	small_imu->xgyro = mavlink_msg_small_imu_get_xgyro(msg);
	small_imu->ygyro = mavlink_msg_small_imu_get_ygyro(msg);
	small_imu->zgyro = mavlink_msg_small_imu_get_zgyro(msg);
#else
	memcpy(small_imu, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_SMALL_IMU_LEN);
#endif
}
