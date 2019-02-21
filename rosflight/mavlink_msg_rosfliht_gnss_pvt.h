// MESSAGE ROSFLIHT_GNSS_PVT PACKING

#define MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT 199

typedef struct __mavlink_rosfliht_gnss_pvt_t
{
 uint32_t time_of_week; /*< */
 int32_t nano; /*< */
 uint32_t t_acc; /*< */
 int32_t height; /*< */
 int32_t height_msl; /*< */
 uint32_t h_acc; /*< */
 uint32_t v_acc; /*< */
 int32_t vel_n; /*< */
 int32_t vel_e; /*< */
 int32_t vel_d; /*< */
 int32_t ground_speed; /*< */
 int32_t heading_motion; /*< */
 uint32_t speed_acc; /*< */
 uint32_t heading_acc; /*< */
 uint16_t year; /*< */
 uint16_t p_dop; /*< */
 uint8_t month; /*< */
 uint8_t day; /*< */
 uint8_t hour; /*< */
 uint8_t min; /*< */
 uint8_t sec; /*< */
 uint8_t fix_type; /*< */
 uint8_t num_satellites; /*< */
 int8_t lon; /*< */
 int8_t lat; /*< */
} mavlink_rosfliht_gnss_pvt_t;

#define MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN 69
#define MAVLINK_MSG_ID_199_LEN 69

#define MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_CRC 156
#define MAVLINK_MSG_ID_199_CRC 156



#define MAVLINK_MESSAGE_INFO_ROSFLIHT_GNSS_PVT { \
	"ROSFLIHT_GNSS_PVT", \
	25, \
	{  { "time_of_week", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rosfliht_gnss_pvt_t, time_of_week) }, \
         { "nano", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_rosfliht_gnss_pvt_t, nano) }, \
         { "t_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_rosfliht_gnss_pvt_t, t_acc) }, \
         { "height", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_rosfliht_gnss_pvt_t, height) }, \
         { "height_msl", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_rosfliht_gnss_pvt_t, height_msl) }, \
         { "h_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_rosfliht_gnss_pvt_t, h_acc) }, \
         { "v_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_rosfliht_gnss_pvt_t, v_acc) }, \
         { "vel_n", NULL, MAVLINK_TYPE_INT32_T, 0, 28, offsetof(mavlink_rosfliht_gnss_pvt_t, vel_n) }, \
         { "vel_e", NULL, MAVLINK_TYPE_INT32_T, 0, 32, offsetof(mavlink_rosfliht_gnss_pvt_t, vel_e) }, \
         { "vel_d", NULL, MAVLINK_TYPE_INT32_T, 0, 36, offsetof(mavlink_rosfliht_gnss_pvt_t, vel_d) }, \
         { "ground_speed", NULL, MAVLINK_TYPE_INT32_T, 0, 40, offsetof(mavlink_rosfliht_gnss_pvt_t, ground_speed) }, \
         { "heading_motion", NULL, MAVLINK_TYPE_INT32_T, 0, 44, offsetof(mavlink_rosfliht_gnss_pvt_t, heading_motion) }, \
         { "speed_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 48, offsetof(mavlink_rosfliht_gnss_pvt_t, speed_acc) }, \
         { "heading_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 52, offsetof(mavlink_rosfliht_gnss_pvt_t, heading_acc) }, \
         { "year", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_rosfliht_gnss_pvt_t, year) }, \
         { "p_dop", NULL, MAVLINK_TYPE_UINT16_T, 0, 58, offsetof(mavlink_rosfliht_gnss_pvt_t, p_dop) }, \
         { "month", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_rosfliht_gnss_pvt_t, month) }, \
         { "day", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_rosfliht_gnss_pvt_t, day) }, \
         { "hour", NULL, MAVLINK_TYPE_UINT8_T, 0, 62, offsetof(mavlink_rosfliht_gnss_pvt_t, hour) }, \
         { "min", NULL, MAVLINK_TYPE_UINT8_T, 0, 63, offsetof(mavlink_rosfliht_gnss_pvt_t, min) }, \
         { "sec", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_rosfliht_gnss_pvt_t, sec) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 65, offsetof(mavlink_rosfliht_gnss_pvt_t, fix_type) }, \
         { "num_satellites", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_rosfliht_gnss_pvt_t, num_satellites) }, \
         { "lon", NULL, MAVLINK_TYPE_INT8_T, 0, 67, offsetof(mavlink_rosfliht_gnss_pvt_t, lon) }, \
         { "lat", NULL, MAVLINK_TYPE_INT8_T, 0, 68, offsetof(mavlink_rosfliht_gnss_pvt_t, lat) }, \
         } \
}


/**
 * @brief Pack a rosfliht_gnss_pvt message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_of_week 
 * @param year 
 * @param month 
 * @param day 
 * @param hour 
 * @param min 
 * @param sec 
 * @param nano 
 * @param t_acc 
 * @param fix_type 
 * @param num_satellites 
 * @param lon 
 * @param lat 
 * @param height 
 * @param height_msl 
 * @param h_acc 
 * @param v_acc 
 * @param vel_n 
 * @param vel_e 
 * @param vel_d 
 * @param ground_speed 
 * @param heading_motion 
 * @param speed_acc 
 * @param heading_acc 
 * @param p_dop 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosfliht_gnss_pvt_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_of_week, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t min, uint8_t sec, int32_t nano, uint32_t t_acc, uint8_t fix_type, uint8_t num_satellites, int8_t lon, int8_t lat, int32_t height, int32_t height_msl, uint32_t h_acc, uint32_t v_acc, int32_t vel_n, int32_t vel_e, int32_t vel_d, int32_t ground_speed, int32_t heading_motion, uint32_t speed_acc, uint32_t heading_acc, uint16_t p_dop)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN];
	_mav_put_uint32_t(buf, 0, time_of_week);
	_mav_put_int32_t(buf, 4, nano);
	_mav_put_uint32_t(buf, 8, t_acc);
	_mav_put_int32_t(buf, 12, height);
	_mav_put_int32_t(buf, 16, height_msl);
	_mav_put_uint32_t(buf, 20, h_acc);
	_mav_put_uint32_t(buf, 24, v_acc);
	_mav_put_int32_t(buf, 28, vel_n);
	_mav_put_int32_t(buf, 32, vel_e);
	_mav_put_int32_t(buf, 36, vel_d);
	_mav_put_int32_t(buf, 40, ground_speed);
	_mav_put_int32_t(buf, 44, heading_motion);
	_mav_put_uint32_t(buf, 48, speed_acc);
	_mav_put_uint32_t(buf, 52, heading_acc);
	_mav_put_uint16_t(buf, 56, year);
	_mav_put_uint16_t(buf, 58, p_dop);
	_mav_put_uint8_t(buf, 60, month);
	_mav_put_uint8_t(buf, 61, day);
	_mav_put_uint8_t(buf, 62, hour);
	_mav_put_uint8_t(buf, 63, min);
	_mav_put_uint8_t(buf, 64, sec);
	_mav_put_uint8_t(buf, 65, fix_type);
	_mav_put_uint8_t(buf, 66, num_satellites);
	_mav_put_int8_t(buf, 67, lon);
	_mav_put_int8_t(buf, 68, lat);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN);
#else
	mavlink_rosfliht_gnss_pvt_t packet;
	packet.time_of_week = time_of_week;
	packet.nano = nano;
	packet.t_acc = t_acc;
	packet.height = height;
	packet.height_msl = height_msl;
	packet.h_acc = h_acc;
	packet.v_acc = v_acc;
	packet.vel_n = vel_n;
	packet.vel_e = vel_e;
	packet.vel_d = vel_d;
	packet.ground_speed = ground_speed;
	packet.heading_motion = heading_motion;
	packet.speed_acc = speed_acc;
	packet.heading_acc = heading_acc;
	packet.year = year;
	packet.p_dop = p_dop;
	packet.month = month;
	packet.day = day;
	packet.hour = hour;
	packet.min = min;
	packet.sec = sec;
	packet.fix_type = fix_type;
	packet.num_satellites = num_satellites;
	packet.lon = lon;
	packet.lat = lat;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN);
#endif
}

/**
 * @brief Pack a rosfliht_gnss_pvt message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_of_week 
 * @param year 
 * @param month 
 * @param day 
 * @param hour 
 * @param min 
 * @param sec 
 * @param nano 
 * @param t_acc 
 * @param fix_type 
 * @param num_satellites 
 * @param lon 
 * @param lat 
 * @param height 
 * @param height_msl 
 * @param h_acc 
 * @param v_acc 
 * @param vel_n 
 * @param vel_e 
 * @param vel_d 
 * @param ground_speed 
 * @param heading_motion 
 * @param speed_acc 
 * @param heading_acc 
 * @param p_dop 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosfliht_gnss_pvt_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_of_week,uint16_t year,uint8_t month,uint8_t day,uint8_t hour,uint8_t min,uint8_t sec,int32_t nano,uint32_t t_acc,uint8_t fix_type,uint8_t num_satellites,int8_t lon,int8_t lat,int32_t height,int32_t height_msl,uint32_t h_acc,uint32_t v_acc,int32_t vel_n,int32_t vel_e,int32_t vel_d,int32_t ground_speed,int32_t heading_motion,uint32_t speed_acc,uint32_t heading_acc,uint16_t p_dop)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN];
	_mav_put_uint32_t(buf, 0, time_of_week);
	_mav_put_int32_t(buf, 4, nano);
	_mav_put_uint32_t(buf, 8, t_acc);
	_mav_put_int32_t(buf, 12, height);
	_mav_put_int32_t(buf, 16, height_msl);
	_mav_put_uint32_t(buf, 20, h_acc);
	_mav_put_uint32_t(buf, 24, v_acc);
	_mav_put_int32_t(buf, 28, vel_n);
	_mav_put_int32_t(buf, 32, vel_e);
	_mav_put_int32_t(buf, 36, vel_d);
	_mav_put_int32_t(buf, 40, ground_speed);
	_mav_put_int32_t(buf, 44, heading_motion);
	_mav_put_uint32_t(buf, 48, speed_acc);
	_mav_put_uint32_t(buf, 52, heading_acc);
	_mav_put_uint16_t(buf, 56, year);
	_mav_put_uint16_t(buf, 58, p_dop);
	_mav_put_uint8_t(buf, 60, month);
	_mav_put_uint8_t(buf, 61, day);
	_mav_put_uint8_t(buf, 62, hour);
	_mav_put_uint8_t(buf, 63, min);
	_mav_put_uint8_t(buf, 64, sec);
	_mav_put_uint8_t(buf, 65, fix_type);
	_mav_put_uint8_t(buf, 66, num_satellites);
	_mav_put_int8_t(buf, 67, lon);
	_mav_put_int8_t(buf, 68, lat);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN);
#else
	mavlink_rosfliht_gnss_pvt_t packet;
	packet.time_of_week = time_of_week;
	packet.nano = nano;
	packet.t_acc = t_acc;
	packet.height = height;
	packet.height_msl = height_msl;
	packet.h_acc = h_acc;
	packet.v_acc = v_acc;
	packet.vel_n = vel_n;
	packet.vel_e = vel_e;
	packet.vel_d = vel_d;
	packet.ground_speed = ground_speed;
	packet.heading_motion = heading_motion;
	packet.speed_acc = speed_acc;
	packet.heading_acc = heading_acc;
	packet.year = year;
	packet.p_dop = p_dop;
	packet.month = month;
	packet.day = day;
	packet.hour = hour;
	packet.min = min;
	packet.sec = sec;
	packet.fix_type = fix_type;
	packet.num_satellites = num_satellites;
	packet.lon = lon;
	packet.lat = lat;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN);
#endif
}

/**
 * @brief Encode a rosfliht_gnss_pvt struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rosfliht_gnss_pvt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosfliht_gnss_pvt_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rosfliht_gnss_pvt_t* rosfliht_gnss_pvt)
{
	return mavlink_msg_rosfliht_gnss_pvt_pack(system_id, component_id, msg, rosfliht_gnss_pvt->time_of_week, rosfliht_gnss_pvt->year, rosfliht_gnss_pvt->month, rosfliht_gnss_pvt->day, rosfliht_gnss_pvt->hour, rosfliht_gnss_pvt->min, rosfliht_gnss_pvt->sec, rosfliht_gnss_pvt->nano, rosfliht_gnss_pvt->t_acc, rosfliht_gnss_pvt->fix_type, rosfliht_gnss_pvt->num_satellites, rosfliht_gnss_pvt->lon, rosfliht_gnss_pvt->lat, rosfliht_gnss_pvt->height, rosfliht_gnss_pvt->height_msl, rosfliht_gnss_pvt->h_acc, rosfliht_gnss_pvt->v_acc, rosfliht_gnss_pvt->vel_n, rosfliht_gnss_pvt->vel_e, rosfliht_gnss_pvt->vel_d, rosfliht_gnss_pvt->ground_speed, rosfliht_gnss_pvt->heading_motion, rosfliht_gnss_pvt->speed_acc, rosfliht_gnss_pvt->heading_acc, rosfliht_gnss_pvt->p_dop);
}

/**
 * @brief Encode a rosfliht_gnss_pvt struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rosfliht_gnss_pvt C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosfliht_gnss_pvt_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rosfliht_gnss_pvt_t* rosfliht_gnss_pvt)
{
	return mavlink_msg_rosfliht_gnss_pvt_pack_chan(system_id, component_id, chan, msg, rosfliht_gnss_pvt->time_of_week, rosfliht_gnss_pvt->year, rosfliht_gnss_pvt->month, rosfliht_gnss_pvt->day, rosfliht_gnss_pvt->hour, rosfliht_gnss_pvt->min, rosfliht_gnss_pvt->sec, rosfliht_gnss_pvt->nano, rosfliht_gnss_pvt->t_acc, rosfliht_gnss_pvt->fix_type, rosfliht_gnss_pvt->num_satellites, rosfliht_gnss_pvt->lon, rosfliht_gnss_pvt->lat, rosfliht_gnss_pvt->height, rosfliht_gnss_pvt->height_msl, rosfliht_gnss_pvt->h_acc, rosfliht_gnss_pvt->v_acc, rosfliht_gnss_pvt->vel_n, rosfliht_gnss_pvt->vel_e, rosfliht_gnss_pvt->vel_d, rosfliht_gnss_pvt->ground_speed, rosfliht_gnss_pvt->heading_motion, rosfliht_gnss_pvt->speed_acc, rosfliht_gnss_pvt->heading_acc, rosfliht_gnss_pvt->p_dop);
}

/**
 * @brief Send a rosfliht_gnss_pvt message
 * @param chan MAVLink channel to send the message
 *
 * @param time_of_week 
 * @param year 
 * @param month 
 * @param day 
 * @param hour 
 * @param min 
 * @param sec 
 * @param nano 
 * @param t_acc 
 * @param fix_type 
 * @param num_satellites 
 * @param lon 
 * @param lat 
 * @param height 
 * @param height_msl 
 * @param h_acc 
 * @param v_acc 
 * @param vel_n 
 * @param vel_e 
 * @param vel_d 
 * @param ground_speed 
 * @param heading_motion 
 * @param speed_acc 
 * @param heading_acc 
 * @param p_dop 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rosfliht_gnss_pvt_send(mavlink_channel_t chan, uint32_t time_of_week, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t min, uint8_t sec, int32_t nano, uint32_t t_acc, uint8_t fix_type, uint8_t num_satellites, int8_t lon, int8_t lat, int32_t height, int32_t height_msl, uint32_t h_acc, uint32_t v_acc, int32_t vel_n, int32_t vel_e, int32_t vel_d, int32_t ground_speed, int32_t heading_motion, uint32_t speed_acc, uint32_t heading_acc, uint16_t p_dop)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN];
	_mav_put_uint32_t(buf, 0, time_of_week);
	_mav_put_int32_t(buf, 4, nano);
	_mav_put_uint32_t(buf, 8, t_acc);
	_mav_put_int32_t(buf, 12, height);
	_mav_put_int32_t(buf, 16, height_msl);
	_mav_put_uint32_t(buf, 20, h_acc);
	_mav_put_uint32_t(buf, 24, v_acc);
	_mav_put_int32_t(buf, 28, vel_n);
	_mav_put_int32_t(buf, 32, vel_e);
	_mav_put_int32_t(buf, 36, vel_d);
	_mav_put_int32_t(buf, 40, ground_speed);
	_mav_put_int32_t(buf, 44, heading_motion);
	_mav_put_uint32_t(buf, 48, speed_acc);
	_mav_put_uint32_t(buf, 52, heading_acc);
	_mav_put_uint16_t(buf, 56, year);
	_mav_put_uint16_t(buf, 58, p_dop);
	_mav_put_uint8_t(buf, 60, month);
	_mav_put_uint8_t(buf, 61, day);
	_mav_put_uint8_t(buf, 62, hour);
	_mav_put_uint8_t(buf, 63, min);
	_mav_put_uint8_t(buf, 64, sec);
	_mav_put_uint8_t(buf, 65, fix_type);
	_mav_put_uint8_t(buf, 66, num_satellites);
	_mav_put_int8_t(buf, 67, lon);
	_mav_put_int8_t(buf, 68, lat);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT, buf, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT, buf, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN);
#endif
#else
	mavlink_rosfliht_gnss_pvt_t packet;
	packet.time_of_week = time_of_week;
	packet.nano = nano;
	packet.t_acc = t_acc;
	packet.height = height;
	packet.height_msl = height_msl;
	packet.h_acc = h_acc;
	packet.v_acc = v_acc;
	packet.vel_n = vel_n;
	packet.vel_e = vel_e;
	packet.vel_d = vel_d;
	packet.ground_speed = ground_speed;
	packet.heading_motion = heading_motion;
	packet.speed_acc = speed_acc;
	packet.heading_acc = heading_acc;
	packet.year = year;
	packet.p_dop = p_dop;
	packet.month = month;
	packet.day = day;
	packet.hour = hour;
	packet.min = min;
	packet.sec = sec;
	packet.fix_type = fix_type;
	packet.num_satellites = num_satellites;
	packet.lon = lon;
	packet.lat = lat;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rosfliht_gnss_pvt_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_of_week, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t min, uint8_t sec, int32_t nano, uint32_t t_acc, uint8_t fix_type, uint8_t num_satellites, int8_t lon, int8_t lat, int32_t height, int32_t height_msl, uint32_t h_acc, uint32_t v_acc, int32_t vel_n, int32_t vel_e, int32_t vel_d, int32_t ground_speed, int32_t heading_motion, uint32_t speed_acc, uint32_t heading_acc, uint16_t p_dop)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_of_week);
	_mav_put_int32_t(buf, 4, nano);
	_mav_put_uint32_t(buf, 8, t_acc);
	_mav_put_int32_t(buf, 12, height);
	_mav_put_int32_t(buf, 16, height_msl);
	_mav_put_uint32_t(buf, 20, h_acc);
	_mav_put_uint32_t(buf, 24, v_acc);
	_mav_put_int32_t(buf, 28, vel_n);
	_mav_put_int32_t(buf, 32, vel_e);
	_mav_put_int32_t(buf, 36, vel_d);
	_mav_put_int32_t(buf, 40, ground_speed);
	_mav_put_int32_t(buf, 44, heading_motion);
	_mav_put_uint32_t(buf, 48, speed_acc);
	_mav_put_uint32_t(buf, 52, heading_acc);
	_mav_put_uint16_t(buf, 56, year);
	_mav_put_uint16_t(buf, 58, p_dop);
	_mav_put_uint8_t(buf, 60, month);
	_mav_put_uint8_t(buf, 61, day);
	_mav_put_uint8_t(buf, 62, hour);
	_mav_put_uint8_t(buf, 63, min);
	_mav_put_uint8_t(buf, 64, sec);
	_mav_put_uint8_t(buf, 65, fix_type);
	_mav_put_uint8_t(buf, 66, num_satellites);
	_mav_put_int8_t(buf, 67, lon);
	_mav_put_int8_t(buf, 68, lat);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT, buf, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT, buf, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN);
#endif
#else
	mavlink_rosfliht_gnss_pvt_t *packet = (mavlink_rosfliht_gnss_pvt_t *)msgbuf;
	packet->time_of_week = time_of_week;
	packet->nano = nano;
	packet->t_acc = t_acc;
	packet->height = height;
	packet->height_msl = height_msl;
	packet->h_acc = h_acc;
	packet->v_acc = v_acc;
	packet->vel_n = vel_n;
	packet->vel_e = vel_e;
	packet->vel_d = vel_d;
	packet->ground_speed = ground_speed;
	packet->heading_motion = heading_motion;
	packet->speed_acc = speed_acc;
	packet->heading_acc = heading_acc;
	packet->year = year;
	packet->p_dop = p_dop;
	packet->month = month;
	packet->day = day;
	packet->hour = hour;
	packet->min = min;
	packet->sec = sec;
	packet->fix_type = fix_type;
	packet->num_satellites = num_satellites;
	packet->lon = lon;
	packet->lat = lat;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT, (const char *)packet, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT, (const char *)packet, MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROSFLIHT_GNSS_PVT UNPACKING


/**
 * @brief Get field time_of_week from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_rosfliht_gnss_pvt_get_time_of_week(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field year from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_rosfliht_gnss_pvt_get_year(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  56);
}

/**
 * @brief Get field month from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosfliht_gnss_pvt_get_month(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  60);
}

/**
 * @brief Get field day from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosfliht_gnss_pvt_get_day(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  61);
}

/**
 * @brief Get field hour from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosfliht_gnss_pvt_get_hour(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  62);
}

/**
 * @brief Get field min from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosfliht_gnss_pvt_get_min(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  63);
}

/**
 * @brief Get field sec from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosfliht_gnss_pvt_get_sec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  64);
}

/**
 * @brief Get field nano from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline int32_t mavlink_msg_rosfliht_gnss_pvt_get_nano(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field t_acc from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_rosfliht_gnss_pvt_get_t_acc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field fix_type from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosfliht_gnss_pvt_get_fix_type(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  65);
}

/**
 * @brief Get field num_satellites from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint8_t mavlink_msg_rosfliht_gnss_pvt_get_num_satellites(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  66);
}

/**
 * @brief Get field lon from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline int8_t mavlink_msg_rosfliht_gnss_pvt_get_lon(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  67);
}

/**
 * @brief Get field lat from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline int8_t mavlink_msg_rosfliht_gnss_pvt_get_lat(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  68);
}

/**
 * @brief Get field height from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline int32_t mavlink_msg_rosfliht_gnss_pvt_get_height(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field height_msl from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline int32_t mavlink_msg_rosfliht_gnss_pvt_get_height_msl(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field h_acc from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_rosfliht_gnss_pvt_get_h_acc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field v_acc from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_rosfliht_gnss_pvt_get_v_acc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field vel_n from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline int32_t mavlink_msg_rosfliht_gnss_pvt_get_vel_n(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  28);
}

/**
 * @brief Get field vel_e from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline int32_t mavlink_msg_rosfliht_gnss_pvt_get_vel_e(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  32);
}

/**
 * @brief Get field vel_d from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline int32_t mavlink_msg_rosfliht_gnss_pvt_get_vel_d(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  36);
}

/**
 * @brief Get field ground_speed from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline int32_t mavlink_msg_rosfliht_gnss_pvt_get_ground_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  40);
}

/**
 * @brief Get field heading_motion from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline int32_t mavlink_msg_rosfliht_gnss_pvt_get_heading_motion(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  44);
}

/**
 * @brief Get field speed_acc from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_rosfliht_gnss_pvt_get_speed_acc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  48);
}

/**
 * @brief Get field heading_acc from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint32_t mavlink_msg_rosfliht_gnss_pvt_get_heading_acc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  52);
}

/**
 * @brief Get field p_dop from rosfliht_gnss_pvt message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_rosfliht_gnss_pvt_get_p_dop(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  58);
}

/**
 * @brief Decode a rosfliht_gnss_pvt message into a struct
 *
 * @param msg The message to decode
 * @param rosfliht_gnss_pvt C-struct to decode the message contents into
 */
static inline void mavlink_msg_rosfliht_gnss_pvt_decode(const mavlink_message_t* msg, mavlink_rosfliht_gnss_pvt_t* rosfliht_gnss_pvt)
{
#if MAVLINK_NEED_BYTE_SWAP
	rosfliht_gnss_pvt->time_of_week = mavlink_msg_rosfliht_gnss_pvt_get_time_of_week(msg);
	rosfliht_gnss_pvt->nano = mavlink_msg_rosfliht_gnss_pvt_get_nano(msg);
	rosfliht_gnss_pvt->t_acc = mavlink_msg_rosfliht_gnss_pvt_get_t_acc(msg);
	rosfliht_gnss_pvt->height = mavlink_msg_rosfliht_gnss_pvt_get_height(msg);
	rosfliht_gnss_pvt->height_msl = mavlink_msg_rosfliht_gnss_pvt_get_height_msl(msg);
	rosfliht_gnss_pvt->h_acc = mavlink_msg_rosfliht_gnss_pvt_get_h_acc(msg);
	rosfliht_gnss_pvt->v_acc = mavlink_msg_rosfliht_gnss_pvt_get_v_acc(msg);
	rosfliht_gnss_pvt->vel_n = mavlink_msg_rosfliht_gnss_pvt_get_vel_n(msg);
	rosfliht_gnss_pvt->vel_e = mavlink_msg_rosfliht_gnss_pvt_get_vel_e(msg);
	rosfliht_gnss_pvt->vel_d = mavlink_msg_rosfliht_gnss_pvt_get_vel_d(msg);
	rosfliht_gnss_pvt->ground_speed = mavlink_msg_rosfliht_gnss_pvt_get_ground_speed(msg);
	rosfliht_gnss_pvt->heading_motion = mavlink_msg_rosfliht_gnss_pvt_get_heading_motion(msg);
	rosfliht_gnss_pvt->speed_acc = mavlink_msg_rosfliht_gnss_pvt_get_speed_acc(msg);
	rosfliht_gnss_pvt->heading_acc = mavlink_msg_rosfliht_gnss_pvt_get_heading_acc(msg);
	rosfliht_gnss_pvt->year = mavlink_msg_rosfliht_gnss_pvt_get_year(msg);
	rosfliht_gnss_pvt->p_dop = mavlink_msg_rosfliht_gnss_pvt_get_p_dop(msg);
	rosfliht_gnss_pvt->month = mavlink_msg_rosfliht_gnss_pvt_get_month(msg);
	rosfliht_gnss_pvt->day = mavlink_msg_rosfliht_gnss_pvt_get_day(msg);
	rosfliht_gnss_pvt->hour = mavlink_msg_rosfliht_gnss_pvt_get_hour(msg);
	rosfliht_gnss_pvt->min = mavlink_msg_rosfliht_gnss_pvt_get_min(msg);
	rosfliht_gnss_pvt->sec = mavlink_msg_rosfliht_gnss_pvt_get_sec(msg);
	rosfliht_gnss_pvt->fix_type = mavlink_msg_rosfliht_gnss_pvt_get_fix_type(msg);
	rosfliht_gnss_pvt->num_satellites = mavlink_msg_rosfliht_gnss_pvt_get_num_satellites(msg);
	rosfliht_gnss_pvt->lon = mavlink_msg_rosfliht_gnss_pvt_get_lon(msg);
	rosfliht_gnss_pvt->lat = mavlink_msg_rosfliht_gnss_pvt_get_lat(msg);
#else
	memcpy(rosfliht_gnss_pvt, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROSFLIHT_GNSS_PVT_LEN);
#endif
}
