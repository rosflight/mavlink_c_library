// MESSAGE LIDAR PACKING

#define MAVLINK_MSG_ID_LIDAR 193

typedef struct __mavlink_lidar_t
{
 float altitude; /*< Calculated Altitude (m)*/
} mavlink_lidar_t;

#define MAVLINK_MSG_ID_LIDAR_LEN 4
#define MAVLINK_MSG_ID_193_LEN 4

#define MAVLINK_MSG_ID_LIDAR_CRC 0
#define MAVLINK_MSG_ID_193_CRC 0



#define MAVLINK_MESSAGE_INFO_LIDAR { \
	"LIDAR", \
	1, \
	{  { "altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_lidar_t, altitude) }, \
         } \
}


/**
 * @brief Pack a lidar message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param altitude Calculated Altitude (m)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_lidar_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_LIDAR_LEN];
	_mav_put_float(buf, 0, altitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LIDAR_LEN);
#else
	mavlink_lidar_t packet;
	packet.altitude = altitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LIDAR_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_LIDAR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LIDAR_LEN, MAVLINK_MSG_ID_LIDAR_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LIDAR_LEN);
#endif
}

/**
 * @brief Pack a lidar message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param altitude Calculated Altitude (m)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_lidar_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_LIDAR_LEN];
	_mav_put_float(buf, 0, altitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LIDAR_LEN);
#else
	mavlink_lidar_t packet;
	packet.altitude = altitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LIDAR_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_LIDAR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LIDAR_LEN, MAVLINK_MSG_ID_LIDAR_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LIDAR_LEN);
#endif
}

/**
 * @brief Encode a lidar struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param lidar C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_lidar_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_lidar_t* lidar)
{
	return mavlink_msg_lidar_pack(system_id, component_id, msg, lidar->altitude);
}

/**
 * @brief Encode a lidar struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lidar C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_lidar_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_lidar_t* lidar)
{
	return mavlink_msg_lidar_pack_chan(system_id, component_id, chan, msg, lidar->altitude);
}

/**
 * @brief Send a lidar message
 * @param chan MAVLink channel to send the message
 *
 * @param altitude Calculated Altitude (m)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_lidar_send(mavlink_channel_t chan, float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_LIDAR_LEN];
	_mav_put_float(buf, 0, altitude);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LIDAR, buf, MAVLINK_MSG_ID_LIDAR_LEN, MAVLINK_MSG_ID_LIDAR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LIDAR, buf, MAVLINK_MSG_ID_LIDAR_LEN);
#endif
#else
	mavlink_lidar_t packet;
	packet.altitude = altitude;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LIDAR, (const char *)&packet, MAVLINK_MSG_ID_LIDAR_LEN, MAVLINK_MSG_ID_LIDAR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LIDAR, (const char *)&packet, MAVLINK_MSG_ID_LIDAR_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_LIDAR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_lidar_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, altitude);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LIDAR, buf, MAVLINK_MSG_ID_LIDAR_LEN, MAVLINK_MSG_ID_LIDAR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LIDAR, buf, MAVLINK_MSG_ID_LIDAR_LEN);
#endif
#else
	mavlink_lidar_t *packet = (mavlink_lidar_t *)msgbuf;
	packet->altitude = altitude;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LIDAR, (const char *)packet, MAVLINK_MSG_ID_LIDAR_LEN, MAVLINK_MSG_ID_LIDAR_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LIDAR, (const char *)packet, MAVLINK_MSG_ID_LIDAR_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE LIDAR UNPACKING


/**
 * @brief Get field altitude from lidar message
 *
 * @return Calculated Altitude (m)
 */
static inline float mavlink_msg_lidar_get_altitude(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a lidar message into a struct
 *
 * @param msg The message to decode
 * @param lidar C-struct to decode the message contents into
 */
static inline void mavlink_msg_lidar_decode(const mavlink_message_t* msg, mavlink_lidar_t* lidar)
{
#if MAVLINK_NEED_BYTE_SWAP
	lidar->altitude = mavlink_msg_lidar_get_altitude(msg);
#else
	memcpy(lidar, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_LIDAR_LEN);
#endif
}
