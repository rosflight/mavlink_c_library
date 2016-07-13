// MESSAGE SMALL_IMU_HIL PACKING

#define MAVLINK_MSG_ID_SMALL_IMU_HIL 186

typedef struct __mavlink_small_imu_hil_t
{
 uint32_t time_boot_us; /*< Measurement timestamp as microseconds since boot*/
 float xacc; /*< Acceleration along X axis*/
 float yacc; /*< Acceleration along Y axis*/
 float zacc; /*< Acceleration along Z axis*/
 float xgyro; /*< Angular speed around X axis*/
 float ygyro; /*< Angular speed around Y axis*/
 float zgyro; /*< Angular speed around Z axis*/
} mavlink_small_imu_hil_t;

#define MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN 28
#define MAVLINK_MSG_ID_186_LEN 28

#define MAVLINK_MSG_ID_SMALL_IMU_HIL_CRC 245
#define MAVLINK_MSG_ID_186_CRC 245



#define MAVLINK_MESSAGE_INFO_SMALL_IMU_HIL { \
	"SMALL_IMU_HIL", \
	7, \
	{  { "time_boot_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_small_imu_hil_t, time_boot_us) }, \
         { "xacc", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_small_imu_hil_t, xacc) }, \
         { "yacc", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_small_imu_hil_t, yacc) }, \
         { "zacc", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_small_imu_hil_t, zacc) }, \
         { "xgyro", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_small_imu_hil_t, xgyro) }, \
         { "ygyro", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_small_imu_hil_t, ygyro) }, \
         { "zgyro", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_small_imu_hil_t, zgyro) }, \
         } \
}


/**
 * @brief Pack a small_imu_hil message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_us Measurement timestamp as microseconds since boot
 * @param xacc Acceleration along X axis
 * @param yacc Acceleration along Y axis
 * @param zacc Acceleration along Z axis
 * @param xgyro Angular speed around X axis
 * @param ygyro Angular speed around Y axis
 * @param zgyro Angular speed around Z axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_small_imu_hil_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_us, float xacc, float yacc, float zacc, float xgyro, float ygyro, float zgyro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_us);
	_mav_put_float(buf, 4, xacc);
	_mav_put_float(buf, 8, yacc);
	_mav_put_float(buf, 12, zacc);
	_mav_put_float(buf, 16, xgyro);
	_mav_put_float(buf, 20, ygyro);
	_mav_put_float(buf, 24, zgyro);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN);
#else
	mavlink_small_imu_hil_t packet;
	packet.time_boot_us = time_boot_us;
	packet.xacc = xacc;
	packet.yacc = yacc;
	packet.zacc = zacc;
	packet.xgyro = xgyro;
	packet.ygyro = ygyro;
	packet.zgyro = zgyro;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SMALL_IMU_HIL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN, MAVLINK_MSG_ID_SMALL_IMU_HIL_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN);
#endif
}

/**
 * @brief Pack a small_imu_hil message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_us Measurement timestamp as microseconds since boot
 * @param xacc Acceleration along X axis
 * @param yacc Acceleration along Y axis
 * @param zacc Acceleration along Z axis
 * @param xgyro Angular speed around X axis
 * @param ygyro Angular speed around Y axis
 * @param zgyro Angular speed around Z axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_small_imu_hil_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_us,float xacc,float yacc,float zacc,float xgyro,float ygyro,float zgyro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_us);
	_mav_put_float(buf, 4, xacc);
	_mav_put_float(buf, 8, yacc);
	_mav_put_float(buf, 12, zacc);
	_mav_put_float(buf, 16, xgyro);
	_mav_put_float(buf, 20, ygyro);
	_mav_put_float(buf, 24, zgyro);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN);
#else
	mavlink_small_imu_hil_t packet;
	packet.time_boot_us = time_boot_us;
	packet.xacc = xacc;
	packet.yacc = yacc;
	packet.zacc = zacc;
	packet.xgyro = xgyro;
	packet.ygyro = ygyro;
	packet.zgyro = zgyro;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SMALL_IMU_HIL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN, MAVLINK_MSG_ID_SMALL_IMU_HIL_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN);
#endif
}

/**
 * @brief Encode a small_imu_hil struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param small_imu_hil C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_small_imu_hil_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_small_imu_hil_t* small_imu_hil)
{
	return mavlink_msg_small_imu_hil_pack(system_id, component_id, msg, small_imu_hil->time_boot_us, small_imu_hil->xacc, small_imu_hil->yacc, small_imu_hil->zacc, small_imu_hil->xgyro, small_imu_hil->ygyro, small_imu_hil->zgyro);
}

/**
 * @brief Encode a small_imu_hil struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param small_imu_hil C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_small_imu_hil_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_small_imu_hil_t* small_imu_hil)
{
	return mavlink_msg_small_imu_hil_pack_chan(system_id, component_id, chan, msg, small_imu_hil->time_boot_us, small_imu_hil->xacc, small_imu_hil->yacc, small_imu_hil->zacc, small_imu_hil->xgyro, small_imu_hil->ygyro, small_imu_hil->zgyro);
}

/**
 * @brief Send a small_imu_hil message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_us Measurement timestamp as microseconds since boot
 * @param xacc Acceleration along X axis
 * @param yacc Acceleration along Y axis
 * @param zacc Acceleration along Z axis
 * @param xgyro Angular speed around X axis
 * @param ygyro Angular speed around Y axis
 * @param zgyro Angular speed around Z axis
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_small_imu_hil_send(mavlink_channel_t chan, uint32_t time_boot_us, float xacc, float yacc, float zacc, float xgyro, float ygyro, float zgyro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_us);
	_mav_put_float(buf, 4, xacc);
	_mav_put_float(buf, 8, yacc);
	_mav_put_float(buf, 12, zacc);
	_mav_put_float(buf, 16, xgyro);
	_mav_put_float(buf, 20, ygyro);
	_mav_put_float(buf, 24, zgyro);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU_HIL, buf, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN, MAVLINK_MSG_ID_SMALL_IMU_HIL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU_HIL, buf, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN);
#endif
#else
	mavlink_small_imu_hil_t packet;
	packet.time_boot_us = time_boot_us;
	packet.xacc = xacc;
	packet.yacc = yacc;
	packet.zacc = zacc;
	packet.xgyro = xgyro;
	packet.ygyro = ygyro;
	packet.zgyro = zgyro;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU_HIL, (const char *)&packet, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN, MAVLINK_MSG_ID_SMALL_IMU_HIL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU_HIL, (const char *)&packet, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_small_imu_hil_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_us, float xacc, float yacc, float zacc, float xgyro, float ygyro, float zgyro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_us);
	_mav_put_float(buf, 4, xacc);
	_mav_put_float(buf, 8, yacc);
	_mav_put_float(buf, 12, zacc);
	_mav_put_float(buf, 16, xgyro);
	_mav_put_float(buf, 20, ygyro);
	_mav_put_float(buf, 24, zgyro);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU_HIL, buf, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN, MAVLINK_MSG_ID_SMALL_IMU_HIL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU_HIL, buf, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN);
#endif
#else
	mavlink_small_imu_hil_t *packet = (mavlink_small_imu_hil_t *)msgbuf;
	packet->time_boot_us = time_boot_us;
	packet->xacc = xacc;
	packet->yacc = yacc;
	packet->zacc = zacc;
	packet->xgyro = xgyro;
	packet->ygyro = ygyro;
	packet->zgyro = zgyro;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU_HIL, (const char *)packet, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN, MAVLINK_MSG_ID_SMALL_IMU_HIL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SMALL_IMU_HIL, (const char *)packet, MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE SMALL_IMU_HIL UNPACKING


/**
 * @brief Get field time_boot_us from small_imu_hil message
 *
 * @return Measurement timestamp as microseconds since boot
 */
static inline uint32_t mavlink_msg_small_imu_hil_get_time_boot_us(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field xacc from small_imu_hil message
 *
 * @return Acceleration along X axis
 */
static inline float mavlink_msg_small_imu_hil_get_xacc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field yacc from small_imu_hil message
 *
 * @return Acceleration along Y axis
 */
static inline float mavlink_msg_small_imu_hil_get_yacc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field zacc from small_imu_hil message
 *
 * @return Acceleration along Z axis
 */
static inline float mavlink_msg_small_imu_hil_get_zacc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field xgyro from small_imu_hil message
 *
 * @return Angular speed around X axis
 */
static inline float mavlink_msg_small_imu_hil_get_xgyro(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field ygyro from small_imu_hil message
 *
 * @return Angular speed around Y axis
 */
static inline float mavlink_msg_small_imu_hil_get_ygyro(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field zgyro from small_imu_hil message
 *
 * @return Angular speed around Z axis
 */
static inline float mavlink_msg_small_imu_hil_get_zgyro(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a small_imu_hil message into a struct
 *
 * @param msg The message to decode
 * @param small_imu_hil C-struct to decode the message contents into
 */
static inline void mavlink_msg_small_imu_hil_decode(const mavlink_message_t* msg, mavlink_small_imu_hil_t* small_imu_hil)
{
#if MAVLINK_NEED_BYTE_SWAP
	small_imu_hil->time_boot_us = mavlink_msg_small_imu_hil_get_time_boot_us(msg);
	small_imu_hil->xacc = mavlink_msg_small_imu_hil_get_xacc(msg);
	small_imu_hil->yacc = mavlink_msg_small_imu_hil_get_yacc(msg);
	small_imu_hil->zacc = mavlink_msg_small_imu_hil_get_zacc(msg);
	small_imu_hil->xgyro = mavlink_msg_small_imu_hil_get_xgyro(msg);
	small_imu_hil->ygyro = mavlink_msg_small_imu_hil_get_ygyro(msg);
	small_imu_hil->zgyro = mavlink_msg_small_imu_hil_get_zgyro(msg);
#else
	memcpy(small_imu_hil, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_SMALL_IMU_HIL_LEN);
#endif
}
