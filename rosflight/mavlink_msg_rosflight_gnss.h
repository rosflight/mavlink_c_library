// MESSAGE ROSFLIGHT_GNSS PACKING

#define MAVLINK_MSG_ID_ROSFLIGHT_GNSS 197

typedef struct __mavlink_rosflight_gnss_t
{
 uint64_t seconds; /*< */
 uint64_t nanos; /*< */
 double lat; /*< */
 double lon; /*< */
 float height; /*< */
 float vel_n; /*< */
 float vel_e; /*< */
 float vel_d; /*< */
 float h_acc; /*< */
 float v_acc; /*< */
 float s_acc; /*< */
 uint16_t year; /*< */
 uint8_t fix_type; /*< */
 uint8_t month; /*< */
 uint8_t day; /*< */
 uint8_t hour; /*< */
 uint8_t min; /*< */
 uint8_t sec; /*< */
 uint8_t num_sat; /*< */
} mavlink_rosflight_gnss_t;

#define MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN 69
#define MAVLINK_MSG_ID_197_LEN 69

#define MAVLINK_MSG_ID_ROSFLIGHT_GNSS_CRC 119
#define MAVLINK_MSG_ID_197_CRC 119



#define MAVLINK_MESSAGE_INFO_ROSFLIGHT_GNSS { \
	"ROSFLIGHT_GNSS", \
	19, \
	{  { "seconds", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_rosflight_gnss_t, seconds) }, \
         { "nanos", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_rosflight_gnss_t, nanos) }, \
         { "lat", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_rosflight_gnss_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_DOUBLE, 0, 24, offsetof(mavlink_rosflight_gnss_t, lon) }, \
         { "height", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_rosflight_gnss_t, height) }, \
         { "vel_n", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_rosflight_gnss_t, vel_n) }, \
         { "vel_e", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_rosflight_gnss_t, vel_e) }, \
         { "vel_d", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_rosflight_gnss_t, vel_d) }, \
         { "h_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_rosflight_gnss_t, h_acc) }, \
         { "v_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_rosflight_gnss_t, v_acc) }, \
         { "s_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_rosflight_gnss_t, s_acc) }, \
         { "year", NULL, MAVLINK_TYPE_UINT16_T, 0, 60, offsetof(mavlink_rosflight_gnss_t, year) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 62, offsetof(mavlink_rosflight_gnss_t, fix_type) }, \
         { "month", NULL, MAVLINK_TYPE_UINT8_T, 0, 63, offsetof(mavlink_rosflight_gnss_t, month) }, \
         { "day", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_rosflight_gnss_t, day) }, \
         { "hour", NULL, MAVLINK_TYPE_UINT8_T, 0, 65, offsetof(mavlink_rosflight_gnss_t, hour) }, \
         { "min", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_rosflight_gnss_t, min) }, \
         { "sec", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_rosflight_gnss_t, sec) }, \
         { "num_sat", NULL, MAVLINK_TYPE_UINT8_T, 0, 68, offsetof(mavlink_rosflight_gnss_t, num_sat) }, \
         } \
}


/**
 * @brief Pack a rosflight_gnss message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param seconds 
 * @param nanos 
 * @param fix_type 
 * @param year 
 * @param month 
 * @param day 
 * @param hour 
 * @param min 
 * @param sec 
 * @param num_sat 
 * @param lat 
 * @param lon 
 * @param height 
 * @param vel_n 
 * @param vel_e 
 * @param vel_d 
 * @param h_acc 
 * @param v_acc 
 * @param s_acc 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_gnss_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t seconds, uint64_t nanos, uint8_t fix_type, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t min, uint8_t sec, uint8_t num_sat, double lat, double lon, float height, float vel_n, float vel_e, float vel_d, float h_acc, float v_acc, float s_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN];
	_mav_put_uint64_t(buf, 0, seconds);
	_mav_put_uint64_t(buf, 8, nanos);
	_mav_put_double(buf, 16, lat);
	_mav_put_double(buf, 24, lon);
	_mav_put_float(buf, 32, height);
	_mav_put_float(buf, 36, vel_n);
	_mav_put_float(buf, 40, vel_e);
	_mav_put_float(buf, 44, vel_d);
	_mav_put_float(buf, 48, h_acc);
	_mav_put_float(buf, 52, v_acc);
	_mav_put_float(buf, 56, s_acc);
	_mav_put_uint16_t(buf, 60, year);
	_mav_put_uint8_t(buf, 62, fix_type);
	_mav_put_uint8_t(buf, 63, month);
	_mav_put_uint8_t(buf, 64, day);
	_mav_put_uint8_t(buf, 65, hour);
	_mav_put_uint8_t(buf, 66, min);
	_mav_put_uint8_t(buf, 67, sec);
	_mav_put_uint8_t(buf, 68, num_sat);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN);
#else
	mavlink_rosflight_gnss_t packet;
	packet.seconds = seconds;
	packet.nanos = nanos;
	packet.lat = lat;
	packet.lon = lon;
	packet.height = height;
	packet.vel_n = vel_n;
	packet.vel_e = vel_e;
	packet.vel_d = vel_d;
	packet.h_acc = h_acc;
	packet.v_acc = v_acc;
	packet.s_acc = s_acc;
	packet.year = year;
	packet.fix_type = fix_type;
	packet.month = month;
	packet.day = day;
	packet.hour = hour;
	packet.min = min;
	packet.sec = sec;
	packet.num_sat = num_sat;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_GNSS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN);
#endif
}

/**
 * @brief Pack a rosflight_gnss message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param seconds 
 * @param nanos 
 * @param fix_type 
 * @param year 
 * @param month 
 * @param day 
 * @param hour 
 * @param min 
 * @param sec 
 * @param num_sat 
 * @param lat 
 * @param lon 
 * @param height 
 * @param vel_n 
 * @param vel_e 
 * @param vel_d 
 * @param h_acc 
 * @param v_acc 
 * @param s_acc 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_gnss_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t seconds,uint64_t nanos,uint8_t fix_type,uint16_t year,uint8_t month,uint8_t day,uint8_t hour,uint8_t min,uint8_t sec,uint8_t num_sat,double lat,double lon,float height,float vel_n,float vel_e,float vel_d,float h_acc,float v_acc,float s_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN];
	_mav_put_uint64_t(buf, 0, seconds);
	_mav_put_uint64_t(buf, 8, nanos);
	_mav_put_double(buf, 16, lat);
	_mav_put_double(buf, 24, lon);
	_mav_put_float(buf, 32, height);
	_mav_put_float(buf, 36, vel_n);
	_mav_put_float(buf, 40, vel_e);
	_mav_put_float(buf, 44, vel_d);
	_mav_put_float(buf, 48, h_acc);
	_mav_put_float(buf, 52, v_acc);
	_mav_put_float(buf, 56, s_acc);
	_mav_put_uint16_t(buf, 60, year);
	_mav_put_uint8_t(buf, 62, fix_type);
	_mav_put_uint8_t(buf, 63, month);
	_mav_put_uint8_t(buf, 64, day);
	_mav_put_uint8_t(buf, 65, hour);
	_mav_put_uint8_t(buf, 66, min);
	_mav_put_uint8_t(buf, 67, sec);
	_mav_put_uint8_t(buf, 68, num_sat);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN);
#else
	mavlink_rosflight_gnss_t packet;
	packet.seconds = seconds;
	packet.nanos = nanos;
	packet.lat = lat;
	packet.lon = lon;
	packet.height = height;
	packet.vel_n = vel_n;
	packet.vel_e = vel_e;
	packet.vel_d = vel_d;
	packet.h_acc = h_acc;
	packet.v_acc = v_acc;
	packet.s_acc = s_acc;
	packet.year = year;
	packet.fix_type = fix_type;
	packet.month = month;
	packet.day = day;
	packet.hour = hour;
	packet.min = min;
	packet.sec = sec;
	packet.num_sat = num_sat;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_GNSS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN);
#endif
}

/**
 * @brief Encode a rosflight_gnss struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_gnss C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_gnss_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rosflight_gnss_t* rosflight_gnss)
{
	return mavlink_msg_rosflight_gnss_pack(system_id, component_id, msg, rosflight_gnss->seconds, rosflight_gnss->nanos, rosflight_gnss->fix_type, rosflight_gnss->year, rosflight_gnss->month, rosflight_gnss->day, rosflight_gnss->hour, rosflight_gnss->min, rosflight_gnss->sec, rosflight_gnss->num_sat, rosflight_gnss->lat, rosflight_gnss->lon, rosflight_gnss->height, rosflight_gnss->vel_n, rosflight_gnss->vel_e, rosflight_gnss->vel_d, rosflight_gnss->h_acc, rosflight_gnss->v_acc, rosflight_gnss->s_acc);
}

/**
 * @brief Encode a rosflight_gnss struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_gnss C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_gnss_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rosflight_gnss_t* rosflight_gnss)
{
	return mavlink_msg_rosflight_gnss_pack_chan(system_id, component_id, chan, msg, rosflight_gnss->seconds, rosflight_gnss->nanos, rosflight_gnss->fix_type, rosflight_gnss->year, rosflight_gnss->month, rosflight_gnss->day, rosflight_gnss->hour, rosflight_gnss->min, rosflight_gnss->sec, rosflight_gnss->num_sat, rosflight_gnss->lat, rosflight_gnss->lon, rosflight_gnss->height, rosflight_gnss->vel_n, rosflight_gnss->vel_e, rosflight_gnss->vel_d, rosflight_gnss->h_acc, rosflight_gnss->v_acc, rosflight_gnss->s_acc);
}

/**
 * @brief Send a rosflight_gnss message
 * @param chan MAVLink channel to send the message
 *
 * @param seconds 
 * @param nanos 
 * @param fix_type 
 * @param year 
 * @param month 
 * @param day 
 * @param hour 
 * @param min 
 * @param sec 
 * @param num_sat 
 * @param lat 
 * @param lon 
 * @param height 
 * @param vel_n 
 * @param vel_e 
 * @param vel_d 
 * @param h_acc 
 * @param v_acc 
 * @param s_acc 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rosflight_gnss_send(mavlink_channel_t chan, uint64_t seconds, uint64_t nanos, uint8_t fix_type, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t min, uint8_t sec, uint8_t num_sat, double lat, double lon, float height, float vel_n, float vel_e, float vel_d, float h_acc, float v_acc, float s_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN];
	_mav_put_uint64_t(buf, 0, seconds);
	_mav_put_uint64_t(buf, 8, nanos);
	_mav_put_double(buf, 16, lat);
	_mav_put_double(buf, 24, lon);
	_mav_put_float(buf, 32, height);
	_mav_put_float(buf, 36, vel_n);
	_mav_put_float(buf, 40, vel_e);
	_mav_put_float(buf, 44, vel_d);
	_mav_put_float(buf, 48, h_acc);
	_mav_put_float(buf, 52, v_acc);
	_mav_put_float(buf, 56, s_acc);
	_mav_put_uint16_t(buf, 60, year);
	_mav_put_uint8_t(buf, 62, fix_type);
	_mav_put_uint8_t(buf, 63, month);
	_mav_put_uint8_t(buf, 64, day);
	_mav_put_uint8_t(buf, 65, hour);
	_mav_put_uint8_t(buf, 66, min);
	_mav_put_uint8_t(buf, 67, sec);
	_mav_put_uint8_t(buf, 68, num_sat);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS, buf, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS, buf, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN);
#endif
#else
	mavlink_rosflight_gnss_t packet;
	packet.seconds = seconds;
	packet.nanos = nanos;
	packet.lat = lat;
	packet.lon = lon;
	packet.height = height;
	packet.vel_n = vel_n;
	packet.vel_e = vel_e;
	packet.vel_d = vel_d;
	packet.h_acc = h_acc;
	packet.v_acc = v_acc;
	packet.s_acc = s_acc;
	packet.year = year;
	packet.fix_type = fix_type;
	packet.month = month;
	packet.day = day;
	packet.hour = hour;
	packet.min = min;
	packet.sec = sec;
	packet.num_sat = num_sat;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rosflight_gnss_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t seconds, uint64_t nanos, uint8_t fix_type, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t min, uint8_t sec, uint8_t num_sat, double lat, double lon, float height, float vel_n, float vel_e, float vel_d, float h_acc, float v_acc, float s_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, seconds);
	_mav_put_uint64_t(buf, 8, nanos);
	_mav_put_double(buf, 16, lat);
	_mav_put_double(buf, 24, lon);
	_mav_put_float(buf, 32, height);
	_mav_put_float(buf, 36, vel_n);
	_mav_put_float(buf, 40, vel_e);
	_mav_put_float(buf, 44, vel_d);
	_mav_put_float(buf, 48, h_acc);
	_mav_put_float(buf, 52, v_acc);
	_mav_put_float(buf, 56, s_acc);
	_mav_put_uint16_t(buf, 60, year);
	_mav_put_uint8_t(buf, 62, fix_type);
	_mav_put_uint8_t(buf, 63, month);
	_mav_put_uint8_t(buf, 64, day);
	_mav_put_uint8_t(buf, 65, hour);
	_mav_put_uint8_t(buf, 66, min);
	_mav_put_uint8_t(buf, 67, sec);
	_mav_put_uint8_t(buf, 68, num_sat);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS, buf, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS, buf, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN);
#endif
#else
	mavlink_rosflight_gnss_t *packet = (mavlink_rosflight_gnss_t *)msgbuf;
	packet->seconds = seconds;
	packet->nanos = nanos;
	packet->lat = lat;
	packet->lon = lon;
	packet->height = height;
	packet->vel_n = vel_n;
	packet->vel_e = vel_e;
	packet->vel_d = vel_d;
	packet->h_acc = h_acc;
	packet->v_acc = v_acc;
	packet->s_acc = s_acc;
	packet->year = year;
	packet->fix_type = fix_type;
	packet->month = month;
	packet->day = day;
	packet->hour = hour;
	packet->min = min;
	packet->sec = sec;
	packet->num_sat = num_sat;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROSFLIGHT_GNSS UNPACKING


/**
 * @brief Get field seconds from rosflight_gnss message
 *
 * @return 
 */
static inline uint64_t mavlink_msg_rosflight_gnss_get_seconds(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field nanos from rosflight_gnss message
 *
 * @return 
 */
static inline uint64_t mavlink_msg_rosflight_gnss_get_nanos(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field fix_type from rosflight_gnss message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosflight_gnss_get_fix_type(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  62);
}

/**
 * @brief Get field year from rosflight_gnss message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_rosflight_gnss_get_year(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  60);
}

/**
 * @brief Get field month from rosflight_gnss message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosflight_gnss_get_month(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  63);
}

/**
 * @brief Get field day from rosflight_gnss message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosflight_gnss_get_day(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  64);
}

/**
 * @brief Get field hour from rosflight_gnss message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosflight_gnss_get_hour(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  65);
}

/**
 * @brief Get field min from rosflight_gnss message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosflight_gnss_get_min(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  66);
}

/**
 * @brief Get field sec from rosflight_gnss message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosflight_gnss_get_sec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  67);
}

/**
 * @brief Get field num_sat from rosflight_gnss message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosflight_gnss_get_num_sat(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  68);
}

/**
 * @brief Get field lat from rosflight_gnss message
 *
 * @return 
 */
static inline double mavlink_msg_rosflight_gnss_get_lat(const mavlink_message_t* msg)
{
	return _MAV_RETURN_double(msg,  16);
}

/**
 * @brief Get field lon from rosflight_gnss message
 *
 * @return 
 */
static inline double mavlink_msg_rosflight_gnss_get_lon(const mavlink_message_t* msg)
{
	return _MAV_RETURN_double(msg,  24);
}

/**
 * @brief Get field height from rosflight_gnss message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gnss_get_height(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field vel_n from rosflight_gnss message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gnss_get_vel_n(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field vel_e from rosflight_gnss message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gnss_get_vel_e(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field vel_d from rosflight_gnss message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gnss_get_vel_d(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field h_acc from rosflight_gnss message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gnss_get_h_acc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field v_acc from rosflight_gnss message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gnss_get_v_acc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field s_acc from rosflight_gnss message
 *
 * @return 
 */
static inline float mavlink_msg_rosflight_gnss_get_s_acc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Decode a rosflight_gnss message into a struct
 *
 * @param msg The message to decode
 * @param rosflight_gnss C-struct to decode the message contents into
 */
static inline void mavlink_msg_rosflight_gnss_decode(const mavlink_message_t* msg, mavlink_rosflight_gnss_t* rosflight_gnss)
{
#if MAVLINK_NEED_BYTE_SWAP
	rosflight_gnss->seconds = mavlink_msg_rosflight_gnss_get_seconds(msg);
	rosflight_gnss->nanos = mavlink_msg_rosflight_gnss_get_nanos(msg);
	rosflight_gnss->lat = mavlink_msg_rosflight_gnss_get_lat(msg);
	rosflight_gnss->lon = mavlink_msg_rosflight_gnss_get_lon(msg);
	rosflight_gnss->height = mavlink_msg_rosflight_gnss_get_height(msg);
	rosflight_gnss->vel_n = mavlink_msg_rosflight_gnss_get_vel_n(msg);
	rosflight_gnss->vel_e = mavlink_msg_rosflight_gnss_get_vel_e(msg);
	rosflight_gnss->vel_d = mavlink_msg_rosflight_gnss_get_vel_d(msg);
	rosflight_gnss->h_acc = mavlink_msg_rosflight_gnss_get_h_acc(msg);
	rosflight_gnss->v_acc = mavlink_msg_rosflight_gnss_get_v_acc(msg);
	rosflight_gnss->s_acc = mavlink_msg_rosflight_gnss_get_s_acc(msg);
	rosflight_gnss->year = mavlink_msg_rosflight_gnss_get_year(msg);
	rosflight_gnss->fix_type = mavlink_msg_rosflight_gnss_get_fix_type(msg);
	rosflight_gnss->month = mavlink_msg_rosflight_gnss_get_month(msg);
	rosflight_gnss->day = mavlink_msg_rosflight_gnss_get_day(msg);
	rosflight_gnss->hour = mavlink_msg_rosflight_gnss_get_hour(msg);
	rosflight_gnss->min = mavlink_msg_rosflight_gnss_get_min(msg);
	rosflight_gnss->sec = mavlink_msg_rosflight_gnss_get_sec(msg);
	rosflight_gnss->num_sat = mavlink_msg_rosflight_gnss_get_num_sat(msg);
#else
	memcpy(rosflight_gnss, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROSFLIGHT_GNSS_LEN);
#endif
}
