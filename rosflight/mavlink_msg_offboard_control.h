// MESSAGE OFFBOARD_CONTROL PACKING

#define MAVLINK_MSG_ID_OFFBOARD_CONTROL 180

typedef struct __mavlink_offboard_control_t
{
 int16_t value1; /*< First value, interpreted according to mode*/
 int16_t value2; /*< Second value, interpreted according to mode*/
 int16_t value3; /*< Third value, interpreted according to mode*/
 int16_t value4; /*< Fourth value, interpreted according to mode*/
 uint8_t mode; /*< Offboard control mode, see OFFBOARD_CONTROL_MODE*/
} mavlink_offboard_control_t;

#define MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN 9
#define MAVLINK_MSG_ID_180_LEN 9

#define MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC 139
#define MAVLINK_MSG_ID_180_CRC 139



#define MAVLINK_MESSAGE_INFO_OFFBOARD_CONTROL { \
	"OFFBOARD_CONTROL", \
	5, \
	{  { "value1", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_offboard_control_t, value1) }, \
         { "value2", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_offboard_control_t, value2) }, \
         { "value3", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_offboard_control_t, value3) }, \
         { "value4", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_offboard_control_t, value4) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_offboard_control_t, mode) }, \
         } \
}


/**
 * @brief Pack a offboard_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mode Offboard control mode, see OFFBOARD_CONTROL_MODE
 * @param value1 First value, interpreted according to mode
 * @param value2 Second value, interpreted according to mode
 * @param value3 Third value, interpreted according to mode
 * @param value4 Fourth value, interpreted according to mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_offboard_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t mode, int16_t value1, int16_t value2, int16_t value3, int16_t value4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN];
	_mav_put_int16_t(buf, 0, value1);
	_mav_put_int16_t(buf, 2, value2);
	_mav_put_int16_t(buf, 4, value3);
	_mav_put_int16_t(buf, 6, value4);
	_mav_put_uint8_t(buf, 8, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#else
	mavlink_offboard_control_t packet;
	packet.value1 = value1;
	packet.value2 = value2;
	packet.value3 = value3;
	packet.value4 = value4;
	packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_OFFBOARD_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
}

/**
 * @brief Pack a offboard_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mode Offboard control mode, see OFFBOARD_CONTROL_MODE
 * @param value1 First value, interpreted according to mode
 * @param value2 Second value, interpreted according to mode
 * @param value3 Third value, interpreted according to mode
 * @param value4 Fourth value, interpreted according to mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_offboard_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t mode,int16_t value1,int16_t value2,int16_t value3,int16_t value4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN];
	_mav_put_int16_t(buf, 0, value1);
	_mav_put_int16_t(buf, 2, value2);
	_mav_put_int16_t(buf, 4, value3);
	_mav_put_int16_t(buf, 6, value4);
	_mav_put_uint8_t(buf, 8, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#else
	mavlink_offboard_control_t packet;
	packet.value1 = value1;
	packet.value2 = value2;
	packet.value3 = value3;
	packet.value4 = value4;
	packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_OFFBOARD_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
}

/**
 * @brief Encode a offboard_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param offboard_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_offboard_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_offboard_control_t* offboard_control)
{
	return mavlink_msg_offboard_control_pack(system_id, component_id, msg, offboard_control->mode, offboard_control->value1, offboard_control->value2, offboard_control->value3, offboard_control->value4);
}

/**
 * @brief Encode a offboard_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param offboard_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_offboard_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_offboard_control_t* offboard_control)
{
	return mavlink_msg_offboard_control_pack_chan(system_id, component_id, chan, msg, offboard_control->mode, offboard_control->value1, offboard_control->value2, offboard_control->value3, offboard_control->value4);
}

/**
 * @brief Send a offboard_control message
 * @param chan MAVLink channel to send the message
 *
 * @param mode Offboard control mode, see OFFBOARD_CONTROL_MODE
 * @param value1 First value, interpreted according to mode
 * @param value2 Second value, interpreted according to mode
 * @param value3 Third value, interpreted according to mode
 * @param value4 Fourth value, interpreted according to mode
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_offboard_control_send(mavlink_channel_t chan, uint8_t mode, int16_t value1, int16_t value2, int16_t value3, int16_t value4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN];
	_mav_put_int16_t(buf, 0, value1);
	_mav_put_int16_t(buf, 2, value2);
	_mav_put_int16_t(buf, 4, value3);
	_mav_put_int16_t(buf, 6, value4);
	_mav_put_uint8_t(buf, 8, mode);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
#else
	mavlink_offboard_control_t packet;
	packet.value1 = value1;
	packet.value2 = value2;
	packet.value3 = value3;
	packet.value4 = value4;
	packet.mode = mode;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_offboard_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t mode, int16_t value1, int16_t value2, int16_t value3, int16_t value4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int16_t(buf, 0, value1);
	_mav_put_int16_t(buf, 2, value2);
	_mav_put_int16_t(buf, 4, value3);
	_mav_put_int16_t(buf, 6, value4);
	_mav_put_uint8_t(buf, 8, mode);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
#else
	mavlink_offboard_control_t *packet = (mavlink_offboard_control_t *)msgbuf;
	packet->value1 = value1;
	packet->value2 = value2;
	packet->value3 = value3;
	packet->value4 = value4;
	packet->mode = mode;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, (const char *)packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL, (const char *)packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE OFFBOARD_CONTROL UNPACKING


/**
 * @brief Get field mode from offboard_control message
 *
 * @return Offboard control mode, see OFFBOARD_CONTROL_MODE
 */
static inline uint8_t mavlink_msg_offboard_control_get_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field value1 from offboard_control message
 *
 * @return First value, interpreted according to mode
 */
static inline int16_t mavlink_msg_offboard_control_get_value1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field value2 from offboard_control message
 *
 * @return Second value, interpreted according to mode
 */
static inline int16_t mavlink_msg_offboard_control_get_value2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field value3 from offboard_control message
 *
 * @return Third value, interpreted according to mode
 */
static inline int16_t mavlink_msg_offboard_control_get_value3(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field value4 from offboard_control message
 *
 * @return Fourth value, interpreted according to mode
 */
static inline int16_t mavlink_msg_offboard_control_get_value4(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Decode a offboard_control message into a struct
 *
 * @param msg The message to decode
 * @param offboard_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_offboard_control_decode(const mavlink_message_t* msg, mavlink_offboard_control_t* offboard_control)
{
#if MAVLINK_NEED_BYTE_SWAP
	offboard_control->value1 = mavlink_msg_offboard_control_get_value1(msg);
	offboard_control->value2 = mavlink_msg_offboard_control_get_value2(msg);
	offboard_control->value3 = mavlink_msg_offboard_control_get_value3(msg);
	offboard_control->value4 = mavlink_msg_offboard_control_get_value4(msg);
	offboard_control->mode = mavlink_msg_offboard_control_get_mode(msg);
#else
	memcpy(offboard_control, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_OFFBOARD_CONTROL_LEN);
#endif
}
