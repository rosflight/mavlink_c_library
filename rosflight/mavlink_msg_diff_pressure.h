// MESSAGE DIFF_PRESSURE PACKING

#define MAVLINK_MSG_ID_DIFF_PRESSURE 185

typedef struct __mavlink_diff_pressure_t
{
 int16_t diff_pressure; /*< Measured Differential Pressure*/
 int16_t temperature; /*< Measured Temperature*/
} mavlink_diff_pressure_t;

#define MAVLINK_MSG_ID_DIFF_PRESSURE_LEN 4
#define MAVLINK_MSG_ID_185_LEN 4

#define MAVLINK_MSG_ID_DIFF_PRESSURE_CRC 254
#define MAVLINK_MSG_ID_185_CRC 254



#define MAVLINK_MESSAGE_INFO_DIFF_PRESSURE { \
	"DIFF_PRESSURE", \
	2, \
	{  { "diff_pressure", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_diff_pressure_t, diff_pressure) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_diff_pressure_t, temperature) }, \
         } \
}


/**
 * @brief Pack a diff_pressure message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param diff_pressure Measured Differential Pressure
 * @param temperature Measured Temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_diff_pressure_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       int16_t diff_pressure, int16_t temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_DIFF_PRESSURE_LEN];
	_mav_put_int16_t(buf, 0, diff_pressure);
	_mav_put_int16_t(buf, 2, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN);
#else
	mavlink_diff_pressure_t packet;
	packet.diff_pressure = diff_pressure;
	packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_DIFF_PRESSURE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN, MAVLINK_MSG_ID_DIFF_PRESSURE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN);
#endif
}

/**
 * @brief Pack a diff_pressure message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param diff_pressure Measured Differential Pressure
 * @param temperature Measured Temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_diff_pressure_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           int16_t diff_pressure,int16_t temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_DIFF_PRESSURE_LEN];
	_mav_put_int16_t(buf, 0, diff_pressure);
	_mav_put_int16_t(buf, 2, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN);
#else
	mavlink_diff_pressure_t packet;
	packet.diff_pressure = diff_pressure;
	packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_DIFF_PRESSURE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN, MAVLINK_MSG_ID_DIFF_PRESSURE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN);
#endif
}

/**
 * @brief Encode a diff_pressure struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param diff_pressure C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_diff_pressure_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_diff_pressure_t* diff_pressure)
{
	return mavlink_msg_diff_pressure_pack(system_id, component_id, msg, diff_pressure->diff_pressure, diff_pressure->temperature);
}

/**
 * @brief Encode a diff_pressure struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param diff_pressure C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_diff_pressure_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_diff_pressure_t* diff_pressure)
{
	return mavlink_msg_diff_pressure_pack_chan(system_id, component_id, chan, msg, diff_pressure->diff_pressure, diff_pressure->temperature);
}

/**
 * @brief Send a diff_pressure message
 * @param chan MAVLink channel to send the message
 *
 * @param diff_pressure Measured Differential Pressure
 * @param temperature Measured Temperature
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_diff_pressure_send(mavlink_channel_t chan, int16_t diff_pressure, int16_t temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_DIFF_PRESSURE_LEN];
	_mav_put_int16_t(buf, 0, diff_pressure);
	_mav_put_int16_t(buf, 2, temperature);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIFF_PRESSURE, buf, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN, MAVLINK_MSG_ID_DIFF_PRESSURE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIFF_PRESSURE, buf, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN);
#endif
#else
	mavlink_diff_pressure_t packet;
	packet.diff_pressure = diff_pressure;
	packet.temperature = temperature;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIFF_PRESSURE, (const char *)&packet, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN, MAVLINK_MSG_ID_DIFF_PRESSURE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIFF_PRESSURE, (const char *)&packet, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_DIFF_PRESSURE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_diff_pressure_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t diff_pressure, int16_t temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int16_t(buf, 0, diff_pressure);
	_mav_put_int16_t(buf, 2, temperature);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIFF_PRESSURE, buf, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN, MAVLINK_MSG_ID_DIFF_PRESSURE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIFF_PRESSURE, buf, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN);
#endif
#else
	mavlink_diff_pressure_t *packet = (mavlink_diff_pressure_t *)msgbuf;
	packet->diff_pressure = diff_pressure;
	packet->temperature = temperature;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIFF_PRESSURE, (const char *)packet, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN, MAVLINK_MSG_ID_DIFF_PRESSURE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DIFF_PRESSURE, (const char *)packet, MAVLINK_MSG_ID_DIFF_PRESSURE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE DIFF_PRESSURE UNPACKING


/**
 * @brief Get field diff_pressure from diff_pressure message
 *
 * @return Measured Differential Pressure
 */
static inline int16_t mavlink_msg_diff_pressure_get_diff_pressure(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field temperature from diff_pressure message
 *
 * @return Measured Temperature
 */
static inline int16_t mavlink_msg_diff_pressure_get_temperature(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Decode a diff_pressure message into a struct
 *
 * @param msg The message to decode
 * @param diff_pressure C-struct to decode the message contents into
 */
static inline void mavlink_msg_diff_pressure_decode(const mavlink_message_t* msg, mavlink_diff_pressure_t* diff_pressure)
{
#if MAVLINK_NEED_BYTE_SWAP
	diff_pressure->diff_pressure = mavlink_msg_diff_pressure_get_diff_pressure(msg);
	diff_pressure->temperature = mavlink_msg_diff_pressure_get_temperature(msg);
#else
	memcpy(diff_pressure, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_DIFF_PRESSURE_LEN);
#endif
}
