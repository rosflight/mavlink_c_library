#pragma once
// MESSAGE OFFBOARD_CONTROL_FULL PACKING

#define MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL 179


typedef struct __mavlink_offboard_control_full_t {
 float Qx; /*<  x control channel interpreted according to mode*/
 float Qy; /*<  y control channel, interpreted according to mode*/
 float Qz; /*<  z control channel, interpreted according to mode*/
 float Fx; /*<  F control channel, interpreted according to mode*/
 float Fy; /*<  F control channel, interpreted according to mode*/
 float Fz; /*<  F control channel, interpreted according to mode*/
 uint8_t mode; /*<  Offboard control mode, see OFFBOARD_CONTROL_MODE*/
 uint8_t ignore; /*<  Bitfield specifying which fields should be ignored, see OFFBOARD_CONTROL_IGNORE*/
} mavlink_offboard_control_full_t;

#define MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN 26
#define MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_MIN_LEN 26
#define MAVLINK_MSG_ID_179_LEN 26
#define MAVLINK_MSG_ID_179_MIN_LEN 26

#define MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_CRC 133
#define MAVLINK_MSG_ID_179_CRC 133



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OFFBOARD_CONTROL_FULL { \
    179, \
    "OFFBOARD_CONTROL_FULL", \
    8, \
    {  { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_offboard_control_full_t, mode) }, \
         { "ignore", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_offboard_control_full_t, ignore) }, \
         { "Qx", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_offboard_control_full_t, Qx) }, \
         { "Qy", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_offboard_control_full_t, Qy) }, \
         { "Qz", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_offboard_control_full_t, Qz) }, \
         { "Fx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_offboard_control_full_t, Fx) }, \
         { "Fy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_offboard_control_full_t, Fy) }, \
         { "Fz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_offboard_control_full_t, Fz) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OFFBOARD_CONTROL_FULL { \
    "OFFBOARD_CONTROL_FULL", \
    8, \
    {  { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_offboard_control_full_t, mode) }, \
         { "ignore", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_offboard_control_full_t, ignore) }, \
         { "Qx", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_offboard_control_full_t, Qx) }, \
         { "Qy", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_offboard_control_full_t, Qy) }, \
         { "Qz", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_offboard_control_full_t, Qz) }, \
         { "Fx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_offboard_control_full_t, Fx) }, \
         { "Fy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_offboard_control_full_t, Fy) }, \
         { "Fz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_offboard_control_full_t, Fz) }, \
         } \
}
#endif

/**
 * @brief Pack a offboard_control_full message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mode  Offboard control mode, see OFFBOARD_CONTROL_MODE
 * @param ignore  Bitfield specifying which fields should be ignored, see OFFBOARD_CONTROL_IGNORE
 * @param Qx  x control channel interpreted according to mode
 * @param Qy  y control channel, interpreted according to mode
 * @param Qz  z control channel, interpreted according to mode
 * @param Fx  F control channel, interpreted according to mode
 * @param Fy  F control channel, interpreted according to mode
 * @param Fz  F control channel, interpreted according to mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_offboard_control_full_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t mode, uint8_t ignore, float Qx, float Qy, float Qz, float Fx, float Fy, float Fz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN];
    _mav_put_float(buf, 0, Qx);
    _mav_put_float(buf, 4, Qy);
    _mav_put_float(buf, 8, Qz);
    _mav_put_float(buf, 12, Fx);
    _mav_put_float(buf, 16, Fy);
    _mav_put_float(buf, 20, Fz);
    _mav_put_uint8_t(buf, 24, mode);
    _mav_put_uint8_t(buf, 25, ignore);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN);
#else
    mavlink_offboard_control_full_t packet;
    packet.Qx = Qx;
    packet.Qy = Qy;
    packet.Qz = Qz;
    packet.Fx = Fx;
    packet.Fy = Fy;
    packet.Fz = Fz;
    packet.mode = mode;
    packet.ignore = ignore;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_CRC);
}

/**
 * @brief Pack a offboard_control_full message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param mode  Offboard control mode, see OFFBOARD_CONTROL_MODE
 * @param ignore  Bitfield specifying which fields should be ignored, see OFFBOARD_CONTROL_IGNORE
 * @param Qx  x control channel interpreted according to mode
 * @param Qy  y control channel, interpreted according to mode
 * @param Qz  z control channel, interpreted according to mode
 * @param Fx  F control channel, interpreted according to mode
 * @param Fy  F control channel, interpreted according to mode
 * @param Fz  F control channel, interpreted according to mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_offboard_control_full_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t mode, uint8_t ignore, float Qx, float Qy, float Qz, float Fx, float Fy, float Fz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN];
    _mav_put_float(buf, 0, Qx);
    _mav_put_float(buf, 4, Qy);
    _mav_put_float(buf, 8, Qz);
    _mav_put_float(buf, 12, Fx);
    _mav_put_float(buf, 16, Fy);
    _mav_put_float(buf, 20, Fz);
    _mav_put_uint8_t(buf, 24, mode);
    _mav_put_uint8_t(buf, 25, ignore);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN);
#else
    mavlink_offboard_control_full_t packet;
    packet.Qx = Qx;
    packet.Qy = Qy;
    packet.Qz = Qz;
    packet.Fx = Fx;
    packet.Fy = Fy;
    packet.Fz = Fz;
    packet.mode = mode;
    packet.ignore = ignore;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN);
#endif
}

/**
 * @brief Pack a offboard_control_full message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mode  Offboard control mode, see OFFBOARD_CONTROL_MODE
 * @param ignore  Bitfield specifying which fields should be ignored, see OFFBOARD_CONTROL_IGNORE
 * @param Qx  x control channel interpreted according to mode
 * @param Qy  y control channel, interpreted according to mode
 * @param Qz  z control channel, interpreted according to mode
 * @param Fx  F control channel, interpreted according to mode
 * @param Fy  F control channel, interpreted according to mode
 * @param Fz  F control channel, interpreted according to mode
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_offboard_control_full_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t mode,uint8_t ignore,float Qx,float Qy,float Qz,float Fx,float Fy,float Fz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN];
    _mav_put_float(buf, 0, Qx);
    _mav_put_float(buf, 4, Qy);
    _mav_put_float(buf, 8, Qz);
    _mav_put_float(buf, 12, Fx);
    _mav_put_float(buf, 16, Fy);
    _mav_put_float(buf, 20, Fz);
    _mav_put_uint8_t(buf, 24, mode);
    _mav_put_uint8_t(buf, 25, ignore);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN);
#else
    mavlink_offboard_control_full_t packet;
    packet.Qx = Qx;
    packet.Qy = Qy;
    packet.Qz = Qz;
    packet.Fx = Fx;
    packet.Fy = Fy;
    packet.Fz = Fz;
    packet.mode = mode;
    packet.ignore = ignore;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_CRC);
}

/**
 * @brief Encode a offboard_control_full struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param offboard_control_full C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_offboard_control_full_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_offboard_control_full_t* offboard_control_full)
{
    return mavlink_msg_offboard_control_full_pack(system_id, component_id, msg, offboard_control_full->mode, offboard_control_full->ignore, offboard_control_full->Qx, offboard_control_full->Qy, offboard_control_full->Qz, offboard_control_full->Fx, offboard_control_full->Fy, offboard_control_full->Fz);
}

/**
 * @brief Encode a offboard_control_full struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param offboard_control_full C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_offboard_control_full_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_offboard_control_full_t* offboard_control_full)
{
    return mavlink_msg_offboard_control_full_pack_chan(system_id, component_id, chan, msg, offboard_control_full->mode, offboard_control_full->ignore, offboard_control_full->Qx, offboard_control_full->Qy, offboard_control_full->Qz, offboard_control_full->Fx, offboard_control_full->Fy, offboard_control_full->Fz);
}

/**
 * @brief Encode a offboard_control_full struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param offboard_control_full C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_offboard_control_full_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_offboard_control_full_t* offboard_control_full)
{
    return mavlink_msg_offboard_control_full_pack_status(system_id, component_id, _status, msg,  offboard_control_full->mode, offboard_control_full->ignore, offboard_control_full->Qx, offboard_control_full->Qy, offboard_control_full->Qz, offboard_control_full->Fx, offboard_control_full->Fy, offboard_control_full->Fz);
}

/**
 * @brief Send a offboard_control_full message
 * @param chan MAVLink channel to send the message
 *
 * @param mode  Offboard control mode, see OFFBOARD_CONTROL_MODE
 * @param ignore  Bitfield specifying which fields should be ignored, see OFFBOARD_CONTROL_IGNORE
 * @param Qx  x control channel interpreted according to mode
 * @param Qy  y control channel, interpreted according to mode
 * @param Qz  z control channel, interpreted according to mode
 * @param Fx  F control channel, interpreted according to mode
 * @param Fy  F control channel, interpreted according to mode
 * @param Fz  F control channel, interpreted according to mode
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_offboard_control_full_send(mavlink_channel_t chan, uint8_t mode, uint8_t ignore, float Qx, float Qy, float Qz, float Fx, float Fy, float Fz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN];
    _mav_put_float(buf, 0, Qx);
    _mav_put_float(buf, 4, Qy);
    _mav_put_float(buf, 8, Qz);
    _mav_put_float(buf, 12, Fx);
    _mav_put_float(buf, 16, Fy);
    _mav_put_float(buf, 20, Fz);
    _mav_put_uint8_t(buf, 24, mode);
    _mav_put_uint8_t(buf, 25, ignore);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL, buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_CRC);
#else
    mavlink_offboard_control_full_t packet;
    packet.Qx = Qx;
    packet.Qy = Qy;
    packet.Qz = Qz;
    packet.Fx = Fx;
    packet.Fy = Fy;
    packet.Fz = Fz;
    packet.mode = mode;
    packet.ignore = ignore;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL, (const char *)&packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_CRC);
#endif
}

/**
 * @brief Send a offboard_control_full message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_offboard_control_full_send_struct(mavlink_channel_t chan, const mavlink_offboard_control_full_t* offboard_control_full)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_offboard_control_full_send(chan, offboard_control_full->mode, offboard_control_full->ignore, offboard_control_full->Qx, offboard_control_full->Qy, offboard_control_full->Qz, offboard_control_full->Fx, offboard_control_full->Fy, offboard_control_full->Fz);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL, (const char *)offboard_control_full, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_CRC);
#endif
}

#if MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_offboard_control_full_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t mode, uint8_t ignore, float Qx, float Qy, float Qz, float Fx, float Fy, float Fz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, Qx);
    _mav_put_float(buf, 4, Qy);
    _mav_put_float(buf, 8, Qz);
    _mav_put_float(buf, 12, Fx);
    _mav_put_float(buf, 16, Fy);
    _mav_put_float(buf, 20, Fz);
    _mav_put_uint8_t(buf, 24, mode);
    _mav_put_uint8_t(buf, 25, ignore);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL, buf, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_CRC);
#else
    mavlink_offboard_control_full_t *packet = (mavlink_offboard_control_full_t *)msgbuf;
    packet->Qx = Qx;
    packet->Qy = Qy;
    packet->Qz = Qz;
    packet->Fx = Fx;
    packet->Fy = Fy;
    packet->Fz = Fz;
    packet->mode = mode;
    packet->ignore = ignore;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL, (const char *)packet, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_CRC);
#endif
}
#endif

#endif

// MESSAGE OFFBOARD_CONTROL_FULL UNPACKING


/**
 * @brief Get field mode from offboard_control_full message
 *
 * @return  Offboard control mode, see OFFBOARD_CONTROL_MODE
 */
static inline uint8_t mavlink_msg_offboard_control_full_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field ignore from offboard_control_full message
 *
 * @return  Bitfield specifying which fields should be ignored, see OFFBOARD_CONTROL_IGNORE
 */
static inline uint8_t mavlink_msg_offboard_control_full_get_ignore(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field Qx from offboard_control_full message
 *
 * @return  x control channel interpreted according to mode
 */
static inline float mavlink_msg_offboard_control_full_get_Qx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field Qy from offboard_control_full message
 *
 * @return  y control channel, interpreted according to mode
 */
static inline float mavlink_msg_offboard_control_full_get_Qy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field Qz from offboard_control_full message
 *
 * @return  z control channel, interpreted according to mode
 */
static inline float mavlink_msg_offboard_control_full_get_Qz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field Fx from offboard_control_full message
 *
 * @return  F control channel, interpreted according to mode
 */
static inline float mavlink_msg_offboard_control_full_get_Fx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field Fy from offboard_control_full message
 *
 * @return  F control channel, interpreted according to mode
 */
static inline float mavlink_msg_offboard_control_full_get_Fy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field Fz from offboard_control_full message
 *
 * @return  F control channel, interpreted according to mode
 */
static inline float mavlink_msg_offboard_control_full_get_Fz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a offboard_control_full message into a struct
 *
 * @param msg The message to decode
 * @param offboard_control_full C-struct to decode the message contents into
 */
static inline void mavlink_msg_offboard_control_full_decode(const mavlink_message_t* msg, mavlink_offboard_control_full_t* offboard_control_full)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    offboard_control_full->Qx = mavlink_msg_offboard_control_full_get_Qx(msg);
    offboard_control_full->Qy = mavlink_msg_offboard_control_full_get_Qy(msg);
    offboard_control_full->Qz = mavlink_msg_offboard_control_full_get_Qz(msg);
    offboard_control_full->Fx = mavlink_msg_offboard_control_full_get_Fx(msg);
    offboard_control_full->Fy = mavlink_msg_offboard_control_full_get_Fy(msg);
    offboard_control_full->Fz = mavlink_msg_offboard_control_full_get_Fz(msg);
    offboard_control_full->mode = mavlink_msg_offboard_control_full_get_mode(msg);
    offboard_control_full->ignore = mavlink_msg_offboard_control_full_get_ignore(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN? msg->len : MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN;
        memset(offboard_control_full, 0, MAVLINK_MSG_ID_OFFBOARD_CONTROL_FULL_LEN);
    memcpy(offboard_control_full, _MAV_PAYLOAD(msg), len);
#endif
}
