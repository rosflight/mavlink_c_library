#pragma once
// MESSAGE ROSFLIGHT_HARD_ERROR PACKING

#define MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR 198

MAVPACKED(
typedef struct __mavlink_rosflight_hard_error_t {
 uint32_t r0; /*<  */
 uint32_t r1; /*<  */
 uint32_t r2; /*<  */
 uint32_t r3; /*<  */
 uint32_t r12; /*<  */
 uint32_t lr; /*<  */
 uint32_t pc; /*<  */
 uint32_t psr; /*<  */
}) mavlink_rosflight_hard_error_t;

#define MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN 32
#define MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_MIN_LEN 32
#define MAVLINK_MSG_ID_198_LEN 32
#define MAVLINK_MSG_ID_198_MIN_LEN 32

#define MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_CRC 86
#define MAVLINK_MSG_ID_198_CRC 86



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ROSFLIGHT_HARD_ERROR { \
    198, \
    "ROSFLIGHT_HARD_ERROR", \
    8, \
    {  { "r0", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rosflight_hard_error_t, r0) }, \
         { "r1", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_rosflight_hard_error_t, r1) }, \
         { "r2", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_rosflight_hard_error_t, r2) }, \
         { "r3", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_rosflight_hard_error_t, r3) }, \
         { "r12", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_rosflight_hard_error_t, r12) }, \
         { "lr", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_rosflight_hard_error_t, lr) }, \
         { "pc", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_rosflight_hard_error_t, pc) }, \
         { "psr", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_rosflight_hard_error_t, psr) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ROSFLIGHT_HARD_ERROR { \
    "ROSFLIGHT_HARD_ERROR", \
    8, \
    {  { "r0", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rosflight_hard_error_t, r0) }, \
         { "r1", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_rosflight_hard_error_t, r1) }, \
         { "r2", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_rosflight_hard_error_t, r2) }, \
         { "r3", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_rosflight_hard_error_t, r3) }, \
         { "r12", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_rosflight_hard_error_t, r12) }, \
         { "lr", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_rosflight_hard_error_t, lr) }, \
         { "pc", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_rosflight_hard_error_t, pc) }, \
         { "psr", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_rosflight_hard_error_t, psr) }, \
         } \
}
#endif

/**
 * @brief Pack a rosflight_hard_error message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param r0  
 * @param r1  
 * @param r2  
 * @param r3  
 * @param r12  
 * @param lr  
 * @param pc  
 * @param psr  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_hard_error_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t r0, uint32_t r1, uint32_t r2, uint32_t r3, uint32_t r12, uint32_t lr, uint32_t pc, uint32_t psr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN];
    _mav_put_uint32_t(buf, 0, r0);
    _mav_put_uint32_t(buf, 4, r1);
    _mav_put_uint32_t(buf, 8, r2);
    _mav_put_uint32_t(buf, 12, r3);
    _mav_put_uint32_t(buf, 16, r12);
    _mav_put_uint32_t(buf, 20, lr);
    _mav_put_uint32_t(buf, 24, pc);
    _mav_put_uint32_t(buf, 28, psr);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN);
#else
    mavlink_rosflight_hard_error_t packet;
    packet.r0 = r0;
    packet.r1 = r1;
    packet.r2 = r2;
    packet.r3 = r3;
    packet.r12 = r12;
    packet.lr = lr;
    packet.pc = pc;
    packet.psr = psr;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_MIN_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_CRC);
}

/**
 * @brief Pack a rosflight_hard_error message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param r0  
 * @param r1  
 * @param r2  
 * @param r3  
 * @param r12  
 * @param lr  
 * @param pc  
 * @param psr  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_hard_error_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t r0,uint32_t r1,uint32_t r2,uint32_t r3,uint32_t r12,uint32_t lr,uint32_t pc,uint32_t psr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN];
    _mav_put_uint32_t(buf, 0, r0);
    _mav_put_uint32_t(buf, 4, r1);
    _mav_put_uint32_t(buf, 8, r2);
    _mav_put_uint32_t(buf, 12, r3);
    _mav_put_uint32_t(buf, 16, r12);
    _mav_put_uint32_t(buf, 20, lr);
    _mav_put_uint32_t(buf, 24, pc);
    _mav_put_uint32_t(buf, 28, psr);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN);
#else
    mavlink_rosflight_hard_error_t packet;
    packet.r0 = r0;
    packet.r1 = r1;
    packet.r2 = r2;
    packet.r3 = r3;
    packet.r12 = r12;
    packet.lr = lr;
    packet.pc = pc;
    packet.psr = psr;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_MIN_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_CRC);
}

/**
 * @brief Encode a rosflight_hard_error struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_hard_error C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_hard_error_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rosflight_hard_error_t* rosflight_hard_error)
{
    return mavlink_msg_rosflight_hard_error_pack(system_id, component_id, msg, rosflight_hard_error->r0, rosflight_hard_error->r1, rosflight_hard_error->r2, rosflight_hard_error->r3, rosflight_hard_error->r12, rosflight_hard_error->lr, rosflight_hard_error->pc, rosflight_hard_error->psr);
}

/**
 * @brief Encode a rosflight_hard_error struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_hard_error C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_hard_error_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rosflight_hard_error_t* rosflight_hard_error)
{
    return mavlink_msg_rosflight_hard_error_pack_chan(system_id, component_id, chan, msg, rosflight_hard_error->r0, rosflight_hard_error->r1, rosflight_hard_error->r2, rosflight_hard_error->r3, rosflight_hard_error->r12, rosflight_hard_error->lr, rosflight_hard_error->pc, rosflight_hard_error->psr);
}

/**
 * @brief Send a rosflight_hard_error message
 * @param chan MAVLink channel to send the message
 *
 * @param r0  
 * @param r1  
 * @param r2  
 * @param r3  
 * @param r12  
 * @param lr  
 * @param pc  
 * @param psr  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rosflight_hard_error_send(mavlink_channel_t chan, uint32_t r0, uint32_t r1, uint32_t r2, uint32_t r3, uint32_t r12, uint32_t lr, uint32_t pc, uint32_t psr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN];
    _mav_put_uint32_t(buf, 0, r0);
    _mav_put_uint32_t(buf, 4, r1);
    _mav_put_uint32_t(buf, 8, r2);
    _mav_put_uint32_t(buf, 12, r3);
    _mav_put_uint32_t(buf, 16, r12);
    _mav_put_uint32_t(buf, 20, lr);
    _mav_put_uint32_t(buf, 24, pc);
    _mav_put_uint32_t(buf, 28, psr);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR, buf, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_MIN_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_CRC);
#else
    mavlink_rosflight_hard_error_t packet;
    packet.r0 = r0;
    packet.r1 = r1;
    packet.r2 = r2;
    packet.r3 = r3;
    packet.r12 = r12;
    packet.lr = lr;
    packet.pc = pc;
    packet.psr = psr;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_MIN_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_CRC);
#endif
}

/**
 * @brief Send a rosflight_hard_error message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rosflight_hard_error_send_struct(mavlink_channel_t chan, const mavlink_rosflight_hard_error_t* rosflight_hard_error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rosflight_hard_error_send(chan, rosflight_hard_error->r0, rosflight_hard_error->r1, rosflight_hard_error->r2, rosflight_hard_error->r3, rosflight_hard_error->r12, rosflight_hard_error->lr, rosflight_hard_error->pc, rosflight_hard_error->psr);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR, (const char *)rosflight_hard_error, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_MIN_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_CRC);
#endif
}

#if MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rosflight_hard_error_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t r0, uint32_t r1, uint32_t r2, uint32_t r3, uint32_t r12, uint32_t lr, uint32_t pc, uint32_t psr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, r0);
    _mav_put_uint32_t(buf, 4, r1);
    _mav_put_uint32_t(buf, 8, r2);
    _mav_put_uint32_t(buf, 12, r3);
    _mav_put_uint32_t(buf, 16, r12);
    _mav_put_uint32_t(buf, 20, lr);
    _mav_put_uint32_t(buf, 24, pc);
    _mav_put_uint32_t(buf, 28, psr);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR, buf, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_MIN_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_CRC);
#else
    mavlink_rosflight_hard_error_t *packet = (mavlink_rosflight_hard_error_t *)msgbuf;
    packet->r0 = r0;
    packet->r1 = r1;
    packet->r2 = r2;
    packet->r3 = r3;
    packet->r12 = r12;
    packet->lr = lr;
    packet->pc = pc;
    packet->psr = psr;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_MIN_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_CRC);
#endif
}
#endif

#endif

// MESSAGE ROSFLIGHT_HARD_ERROR UNPACKING


/**
 * @brief Get field r0 from rosflight_hard_error message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_rosflight_hard_error_get_r0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field r1 from rosflight_hard_error message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_rosflight_hard_error_get_r1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field r2 from rosflight_hard_error message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_rosflight_hard_error_get_r2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field r3 from rosflight_hard_error message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_rosflight_hard_error_get_r3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field r12 from rosflight_hard_error message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_rosflight_hard_error_get_r12(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field lr from rosflight_hard_error message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_rosflight_hard_error_get_lr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field pc from rosflight_hard_error message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_rosflight_hard_error_get_pc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field psr from rosflight_hard_error message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_rosflight_hard_error_get_psr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  28);
}

/**
 * @brief Decode a rosflight_hard_error message into a struct
 *
 * @param msg The message to decode
 * @param rosflight_hard_error C-struct to decode the message contents into
 */
static inline void mavlink_msg_rosflight_hard_error_decode(const mavlink_message_t* msg, mavlink_rosflight_hard_error_t* rosflight_hard_error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rosflight_hard_error->r0 = mavlink_msg_rosflight_hard_error_get_r0(msg);
    rosflight_hard_error->r1 = mavlink_msg_rosflight_hard_error_get_r1(msg);
    rosflight_hard_error->r2 = mavlink_msg_rosflight_hard_error_get_r2(msg);
    rosflight_hard_error->r3 = mavlink_msg_rosflight_hard_error_get_r3(msg);
    rosflight_hard_error->r12 = mavlink_msg_rosflight_hard_error_get_r12(msg);
    rosflight_hard_error->lr = mavlink_msg_rosflight_hard_error_get_lr(msg);
    rosflight_hard_error->pc = mavlink_msg_rosflight_hard_error_get_pc(msg);
    rosflight_hard_error->psr = mavlink_msg_rosflight_hard_error_get_psr(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN? msg->len : MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN;
        memset(rosflight_hard_error, 0, MAVLINK_MSG_ID_ROSFLIGHT_HARD_ERROR_LEN);
    memcpy(rosflight_hard_error, _MAV_PAYLOAD(msg), len);
#endif
}
