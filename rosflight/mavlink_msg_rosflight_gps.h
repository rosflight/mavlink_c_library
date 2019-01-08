// MESSAGE ROSFLIGHT_GPS PACKING

#define MAVLINK_MSG_ID_ROSFLIGHT_GPS 197

typedef struct __mavlink_rosflight_gps_t
{
 double latitude; /*< */
 double longitude; /*< */
 float altitude; /*< */
 float velN; /*< */
 float velE; /*< */
 float velD; /*< */
 uint32_t tow_ms; /*< */
 float hacc; /*< */
 float vacc; /*< */
 float sacc; /*< */
 uint8_t fix_type; /*< */
} mavlink_rosflight_gps_t;

#define MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN 49
#define MAVLINK_MSG_ID_197_LEN 49

#define MAVLINK_MSG_ID_ROSFLIGHT_GPS_CRC 106
#define MAVLINK_MSG_ID_197_CRC 106



#define MAVLINK_MESSAGE_INFO_ROSFLIGHT_GPS { \
	"ROSFLIGHT_GPS", \
	11, \
	{  { "latitude", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_rosflight_gps_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_rosflight_gps_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_rosflight_gps_t, altitude) }, \
         { "velN", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_rosflight_gps_t, velN) }, \
         { "velE", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_rosflight_gps_t, velE) }, \
         { "velD", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_rosflight_gps_t, velD) }, \
         { "tow_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_rosflight_gps_t, tow_ms) }, \
         { "hacc", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_rosflight_gps_t, hacc) }, \
         { "vacc", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_rosflight_gps_t, vacc) }, \
         { "sacc", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_rosflight_gps_t, sacc) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_rosflight_gps_t, fix_type) }, \
         } \
}


/**
 * @brief Pack a rosflight_gps message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param latitude 
 * @param longitude 
 * @param altitude 
 * @param velN 
 * @param velE 
 * @param velD 
 * @param fix_type 
 * @param tow_ms 
 * @param hacc 
 * @param vacc 
 * @param sacc 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_gps_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       double latitude, double longitude, float altitude, float velN, float velE, float velD, uint8_t fix_type, uint32_t tow_ms, float hacc, float vacc, float sacc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN];
	_mav_put_double(buf, 0, latitude);
	_mav_put_double(buf, 8, longitude);
	_mav_put_float(buf, 16, altitude);
	_mav_put_float(buf, 20, velN);
	_mav_put_float(buf, 24, velE);
	_mav_put_float(buf, 28, velD);
	_mav_put_uint32_t(buf, 32, tow_ms);
	_mav_put_float(buf, 36, hacc);
	_mav_put_float(buf, 40, vacc);
	_mav_put_float(buf, 44, sacc);
	_mav_put_uint8_t(buf, 48, fix_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN);
#else
	mavlink_rosflight_gps_t packet;
	packet.latitude = latitude;
	packet.longitude = longitude;
	packet.altitude = altitude;
	packet.velN = velN;
	packet.velE = velE;
	packet.velD = velD;
	packet.tow_ms = tow_ms;
	packet.hacc = hacc;
	packet.vacc = vacc;
	packet.sacc = sacc;
	packet.fix_type = fix_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_GPS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GPS_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN);
#endif
}

/**
 * @brief Pack a rosflight_gps message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param latitude 
 * @param longitude 
 * @param altitude 
 * @param velN 
 * @param velE 
 * @param velD 
 * @param fix_type 
 * @param tow_ms 
 * @param hacc 
 * @param vacc 
 * @param sacc 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_gps_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           double latitude,double longitude,float altitude,float velN,float velE,float velD,uint8_t fix_type,uint32_t tow_ms,float hacc,float vacc,float sacc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN];
	_mav_put_double(buf, 0, latitude);
	_mav_put_double(buf, 8, longitude);
	_mav_put_float(buf, 16, altitude);
	_mav_put_float(buf, 20, velN);
	_mav_put_float(buf, 24, velE);
	_mav_put_float(buf, 28, velD);
	_mav_put_uint32_t(buf, 32, tow_ms);
	_mav_put_float(buf, 36, hacc);
	_mav_put_float(buf, 40, vacc);
	_mav_put_float(buf, 44, sacc);
	_mav_put_uint8_t(buf, 48, fix_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN);
#else
	mavlink_rosflight_gps_t packet;
	packet.latitude = latitude;
	packet.longitude = longitude;
	packet.altitude = altitude;
	packet.velN = velN;
	packet.velE = velE;
	packet.velD = velD;
	packet.tow_ms = tow_ms;
	packet.hacc = hacc;
	packet.vacc = vacc;
	packet.sacc = sacc;
	packet.fix_type = fix_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_GPS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GPS_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN);
#endif
}

/**
 * @brief Encode a rosflight_gps struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_gps C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_gps_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rosflight_gps_t* rosflight_gps)
{
	return mavlink_msg_rosflight_gps_pack(system_id, component_id, msg, rosflight_gps->latitude, rosflight_gps->longitude, rosflight_gps->altitude, rosflight_gps->velN, rosflight_gps->velE, rosflight_gps->velD, rosflight_gps->fix_type, rosflight_gps->tow_ms, rosflight_gps->hacc, rosflight_gps->vacc, rosflight_gps->sacc);
}

/**
 * @brief Encode a rosflight_gps struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_gps C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_gps_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rosflight_gps_t* rosflight_gps)
{
	return mavlink_msg_rosflight_gps_pack_chan(system_id, component_id, chan, msg, rosflight_gps->latitude, rosflight_gps->longitude, rosflight_gps->altitude, rosflight_gps->velN, rosflight_gps->velE, rosflight_gps->velD, rosflight_gps->fix_type, rosflight_gps->tow_ms, rosflight_gps->hacc, rosflight_gps->vacc, rosflight_gps->sacc);
}

/**
 * @brief Send a rosflight_gps message
 * @param chan MAVLink channel to send the message
 *
 * @param latitude 
 * @param longitude 
 * @param altitude 
 * @param velN 
 * @param velE 
 * @param velD 
 * @param fix_type 
 * @param tow_ms 
 * @param hacc 
 * @param vacc 
 * @param sacc 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rosflight_gps_send(mavlink_channel_t chan, double latitude, double longitude, float altitude, float velN, float velE, float velD, uint8_t fix_type, uint32_t tow_ms, float hacc, float vacc, float sacc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN];
	_mav_put_double(buf, 0, latitude);
	_mav_put_double(buf, 8, longitude);
	_mav_put_float(buf, 16, altitude);
	_mav_put_float(buf, 20, velN);
	_mav_put_float(buf, 24, velE);
	_mav_put_float(buf, 28, velD);
	_mav_put_uint32_t(buf, 32, tow_ms);
	_mav_put_float(buf, 36, hacc);
	_mav_put_float(buf, 40, vacc);
	_mav_put_float(buf, 44, sacc);
	_mav_put_uint8_t(buf, 48, fix_type);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS, buf, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GPS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS, buf, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN);
#endif
#else
	mavlink_rosflight_gps_t packet;
	packet.latitude = latitude;
	packet.longitude = longitude;
	packet.altitude = altitude;
	packet.velN = velN;
	packet.velE = velE;
	packet.velD = velD;
	packet.tow_ms = tow_ms;
	packet.hacc = hacc;
	packet.vacc = vacc;
	packet.sacc = sacc;
	packet.fix_type = fix_type;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GPS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rosflight_gps_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  double latitude, double longitude, float altitude, float velN, float velE, float velD, uint8_t fix_type, uint32_t tow_ms, float hacc, float vacc, float sacc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_double(buf, 0, latitude);
	_mav_put_double(buf, 8, longitude);
	_mav_put_float(buf, 16, altitude);
	_mav_put_float(buf, 20, velN);
	_mav_put_float(buf, 24, velE);
	_mav_put_float(buf, 28, velD);
	_mav_put_uint32_t(buf, 32, tow_ms);
	_mav_put_float(buf, 36, hacc);
	_mav_put_float(buf, 40, vacc);
	_mav_put_float(buf, 44, sacc);
	_mav_put_uint8_t(buf, 48, fix_type);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS, buf, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GPS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS, buf, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN);
#endif
#else
	mavlink_rosflight_gps_t *packet = (mavlink_rosflight_gps_t *)msgbuf;
	packet->latitude = latitude;
	packet->longitude = longitude;
	packet->altitude = altitude;
	packet->velN = velN;
	packet->velE = velE;
	packet->velD = velD;
	packet->tow_ms = tow_ms;
	packet->hacc = hacc;
	packet->vacc = vacc;
	packet->sacc = sacc;
	packet->fix_type = fix_type;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GPS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GPS, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROSFLIGHT_GPS UNPACKING


/**
 * @brief Get field latitude from rosflight_gps message
 *
 * @return 
 */
static inline double mavlink_msg_rosflight_gps_get_latitude(const mavlink_message_t* msg)
{
	return _MAV_RETURN_double(msg,  0);
}

/**
 * @brief Get field longitude from rosflight_gps message
 *
 * @return 
 */
static inline double mavlink_msg_rosflight_gps_get_longitude(const mavlink_message_t* msg)
{
	return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field altitude from rosflight_gps message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_get_altitude(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field velN from rosflight_gps message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_get_velN(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field velE from rosflight_gps message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_get_velE(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field velD from rosflight_gps message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_get_velD(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field fix_type from rosflight_gps message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosflight_gps_get_fix_type(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  48);
}

/**
 * @brief Get field tow_ms from rosflight_gps message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_rosflight_gps_get_tow_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  32);
}

/**
 * @brief Get field hacc from rosflight_gps message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_get_hacc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field vacc from rosflight_gps message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_get_vacc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field sacc from rosflight_gps message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gps_get_sacc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Decode a rosflight_gps message into a struct
 *
 * @param msg The message to decode
 * @param rosflight_gps C-struct to decode the message contents into
 */
static inline void mavlink_msg_rosflight_gps_decode(const mavlink_message_t* msg, mavlink_rosflight_gps_t* rosflight_gps)
{
#if MAVLINK_NEED_BYTE_SWAP
	rosflight_gps->latitude = mavlink_msg_rosflight_gps_get_latitude(msg);
	rosflight_gps->longitude = mavlink_msg_rosflight_gps_get_longitude(msg);
	rosflight_gps->altitude = mavlink_msg_rosflight_gps_get_altitude(msg);
	rosflight_gps->velN = mavlink_msg_rosflight_gps_get_velN(msg);
	rosflight_gps->velE = mavlink_msg_rosflight_gps_get_velE(msg);
	rosflight_gps->velD = mavlink_msg_rosflight_gps_get_velD(msg);
	rosflight_gps->tow_ms = mavlink_msg_rosflight_gps_get_tow_ms(msg);
	rosflight_gps->hacc = mavlink_msg_rosflight_gps_get_hacc(msg);
	rosflight_gps->vacc = mavlink_msg_rosflight_gps_get_vacc(msg);
	rosflight_gps->sacc = mavlink_msg_rosflight_gps_get_sacc(msg);
	rosflight_gps->fix_type = mavlink_msg_rosflight_gps_get_fix_type(msg);
#else
	memcpy(rosflight_gps, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROSFLIGHT_GPS_LEN);
#endif
}
