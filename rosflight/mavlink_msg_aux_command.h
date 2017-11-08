// MESSAGE AUX_COMMAND PACKING

#define MAVLINK_MSG_ID_AUX_COMMAND 193

typedef struct __mavlink_aux_command_t
{
 float value[14]; /*< */
 uint8_t channel[14]; /*< */
} mavlink_aux_command_t;

#define MAVLINK_MSG_ID_AUX_COMMAND_LEN 70
#define MAVLINK_MSG_ID_193_LEN 70

#define MAVLINK_MSG_ID_AUX_COMMAND_CRC 247
#define MAVLINK_MSG_ID_193_CRC 247

#define MAVLINK_MSG_AUX_COMMAND_FIELD_VALUE_LEN 14
#define MAVLINK_MSG_AUX_COMMAND_FIELD_CHANNEL_LEN 14

#define MAVLINK_MESSAGE_INFO_AUX_COMMAND { \
	"AUX_COMMAND", \
	2, \
	{  { "value", NULL, MAVLINK_TYPE_FLOAT, 14, 0, offsetof(mavlink_aux_command_t, value) }, \
         { "channel", NULL, MAVLINK_TYPE_UINT8_T, 14, 56, offsetof(mavlink_aux_command_t, channel) }, \
         } \
}


/**
 * @brief Pack a aux_command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param channel 
 * @param value 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aux_command_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const uint8_t *channel, const float *value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AUX_COMMAND_LEN];

	_mav_put_float_array(buf, 0, value, 14);
	_mav_put_uint8_t_array(buf, 56, channel, 14);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUX_COMMAND_LEN);
#else
	mavlink_aux_command_t packet;

	mav_array_memcpy(packet.value, value, sizeof(float)*14);
	mav_array_memcpy(packet.channel, channel, sizeof(uint8_t)*14);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUX_COMMAND_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_AUX_COMMAND;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AUX_COMMAND_LEN, MAVLINK_MSG_ID_AUX_COMMAND_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AUX_COMMAND_LEN);
#endif
}

/**
 * @brief Pack a aux_command message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param channel 
 * @param value 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aux_command_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const uint8_t *channel,const float *value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AUX_COMMAND_LEN];

	_mav_put_float_array(buf, 0, value, 14);
	_mav_put_uint8_t_array(buf, 56, channel, 14);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUX_COMMAND_LEN);
#else
	mavlink_aux_command_t packet;

	mav_array_memcpy(packet.value, value, sizeof(float)*14);
	mav_array_memcpy(packet.channel, channel, sizeof(uint8_t)*14);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUX_COMMAND_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_AUX_COMMAND;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AUX_COMMAND_LEN, MAVLINK_MSG_ID_AUX_COMMAND_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AUX_COMMAND_LEN);
#endif
}

/**
 * @brief Encode a aux_command struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aux_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aux_command_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aux_command_t* aux_command)
{
	return mavlink_msg_aux_command_pack(system_id, component_id, msg, aux_command->channel, aux_command->value);
}

/**
 * @brief Encode a aux_command struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aux_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aux_command_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aux_command_t* aux_command)
{
	return mavlink_msg_aux_command_pack_chan(system_id, component_id, chan, msg, aux_command->channel, aux_command->value);
}

/**
 * @brief Send a aux_command message
 * @param chan MAVLink channel to send the message
 *
 * @param channel 
 * @param value 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aux_command_send(mavlink_channel_t chan, const uint8_t *channel, const float *value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AUX_COMMAND_LEN];

	_mav_put_float_array(buf, 0, value, 14);
	_mav_put_uint8_t_array(buf, 56, channel, 14);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_COMMAND, buf, MAVLINK_MSG_ID_AUX_COMMAND_LEN, MAVLINK_MSG_ID_AUX_COMMAND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_COMMAND, buf, MAVLINK_MSG_ID_AUX_COMMAND_LEN);
#endif
#else
	mavlink_aux_command_t packet;

	mav_array_memcpy(packet.value, value, sizeof(float)*14);
	mav_array_memcpy(packet.channel, channel, sizeof(uint8_t)*14);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_AUX_COMMAND_LEN, MAVLINK_MSG_ID_AUX_COMMAND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_AUX_COMMAND_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_AUX_COMMAND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aux_command_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *channel, const float *value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;

	_mav_put_float_array(buf, 0, value, 14);
	_mav_put_uint8_t_array(buf, 56, channel, 14);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_COMMAND, buf, MAVLINK_MSG_ID_AUX_COMMAND_LEN, MAVLINK_MSG_ID_AUX_COMMAND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_COMMAND, buf, MAVLINK_MSG_ID_AUX_COMMAND_LEN);
#endif
#else
	mavlink_aux_command_t *packet = (mavlink_aux_command_t *)msgbuf;

	mav_array_memcpy(packet->value, value, sizeof(float)*14);
	mav_array_memcpy(packet->channel, channel, sizeof(uint8_t)*14);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_COMMAND, (const char *)packet, MAVLINK_MSG_ID_AUX_COMMAND_LEN, MAVLINK_MSG_ID_AUX_COMMAND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_COMMAND, (const char *)packet, MAVLINK_MSG_ID_AUX_COMMAND_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE AUX_COMMAND UNPACKING


/**
 * @brief Get field channel from aux_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_aux_command_get_channel(const mavlink_message_t* msg, uint8_t *channel)
{
	return _MAV_RETURN_uint8_t_array(msg, channel, 14,  56);
}

/**
 * @brief Get field value from aux_command message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_aux_command_get_value(const mavlink_message_t* msg, float *value)
{
	return _MAV_RETURN_float_array(msg, value, 14,  0);
}

/**
 * @brief Decode a aux_command message into a struct
 *
 * @param msg The message to decode
 * @param aux_command C-struct to decode the message contents into
 */
static inline void mavlink_msg_aux_command_decode(const mavlink_message_t* msg, mavlink_aux_command_t* aux_command)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_aux_command_get_value(msg, aux_command->value);
	mavlink_msg_aux_command_get_channel(msg, aux_command->channel);
#else
	memcpy(aux_command, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_AUX_COMMAND_LEN);
#endif
}
