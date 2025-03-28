/** @file
 *	@brief MAVLink comm protocol generated from rosflight.xml
 *	@see http://mavlink.org
 */
#ifndef MAVLINK_ROSFLIGHT_H
#define MAVLINK_ROSFLIGHT_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_ROSFLIGHT.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {9, 31, 12, 0, 14, 28, 3, 32, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 20, 2, 25, 23, 30, 101, 22, 26, 16, 14, 28, 32, 28, 28, 22, 22, 21, 6, 6, 37, 4, 4, 2, 2, 4, 2, 2, 3, 13, 12, 37, 4, 0, 0, 27, 25, 0, 0, 0, 0, 0, 68, 26, 185, 229, 42, 6, 4, 0, 11, 18, 0, 0, 37, 20, 35, 33, 3, 0, 0, 0, 22, 39, 37, 53, 51, 53, 51, 0, 28, 56, 42, 33, 0, 0, 0, 0, 0, 0, 0, 26, 32, 32, 20, 32, 62, 44, 64, 84, 9, 254, 16, 12, 36, 44, 64, 22, 6, 14, 12, 97, 2, 2, 113, 35, 6, 79, 35, 35, 22, 13, 255, 14, 18, 43, 8, 22, 14, 36, 43, 41, 32, 243, 14, 93, 0, 100, 36, 60, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 36, 12, 12, 12, 37, 36, 13, 1, 2, 64, 10, 0, 70, 52, 16, 16, 93, 84, 8, 1, 2, 23, 22, 53, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 52, 53, 6, 2, 38, 0, 254, 36, 30, 18, 18, 51, 9, 0}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {50, 124, 137, 0, 237, 217, 104, 119, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 214, 159, 220, 168, 24, 23, 170, 144, 67, 115, 39, 246, 185, 104, 237, 244, 222, 212, 9, 254, 230, 28, 28, 132, 221, 232, 11, 153, 41, 39, 78, 196, 0, 0, 15, 3, 0, 0, 0, 0, 0, 153, 183, 51, 59, 118, 148, 21, 0, 243, 124, 0, 0, 38, 20, 158, 152, 143, 0, 0, 0, 106, 49, 22, 143, 140, 5, 150, 0, 231, 183, 63, 54, 0, 0, 0, 0, 0, 0, 0, 175, 102, 158, 208, 56, 93, 138, 108, 32, 185, 84, 34, 174, 124, 237, 4, 76, 128, 56, 116, 134, 237, 203, 250, 87, 203, 220, 25, 226, 46, 29, 223, 85, 6, 229, 203, 1, 195, 109, 168, 181, 47, 72, 131, 127, 0, 103, 154, 178, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 67, 218, 206, 169, 209, 221, 60, 249, 113, 181, 183, 0, 1, 125, 65, 10, 9, 204, 48, 174, 248, 236, 123, 116, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 104, 85, 95, 130, 184, 0, 8, 204, 49, 170, 44, 83, 46, 0}
#endif

#ifndef MAVLINK_MESSAGE_INFO
#define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_SYS_STATUS, MAVLINK_MESSAGE_INFO_SYSTEM_TIME, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PING, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL_ACK, MAVLINK_MESSAGE_INFO_AUTH_KEY, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SET_MODE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_VALUE, MAVLINK_MESSAGE_INFO_PARAM_SET, MAVLINK_MESSAGE_INFO_GPS_RAW_INT, MAVLINK_MESSAGE_INFO_GPS_STATUS, MAVLINK_MESSAGE_INFO_SCALED_IMU, MAVLINK_MESSAGE_INFO_RAW_IMU, MAVLINK_MESSAGE_INFO_RAW_PRESSURE, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE, MAVLINK_MESSAGE_INFO_ATTITUDE, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT, MAVLINK_MESSAGE_INFO_RC_CHANNELS_SCALED, MAVLINK_MESSAGE_INFO_RC_CHANNELS_RAW, MAVLINK_MESSAGE_INFO_SERVO_OUTPUT_RAW, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_WRITE_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_ITEM, MAVLINK_MESSAGE_INFO_MISSION_REQUEST, MAVLINK_MESSAGE_INFO_MISSION_SET_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_LIST, MAVLINK_MESSAGE_INFO_MISSION_COUNT, MAVLINK_MESSAGE_INFO_MISSION_CLEAR_ALL, MAVLINK_MESSAGE_INFO_MISSION_ITEM_REACHED, MAVLINK_MESSAGE_INFO_MISSION_ACK, MAVLINK_MESSAGE_INFO_SET_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_PARAM_MAP_RC, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_SAFETY_SET_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_SAFETY_ALLOWED_AREA, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION_COV, MAVLINK_MESSAGE_INFO_NAV_CONTROLLER_OUTPUT, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT_COV, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_COV, MAVLINK_MESSAGE_INFO_RC_CHANNELS, MAVLINK_MESSAGE_INFO_REQUEST_DATA_STREAM, MAVLINK_MESSAGE_INFO_DATA_STREAM, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MANUAL_CONTROL, MAVLINK_MESSAGE_INFO_RC_CHANNELS_OVERRIDE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MISSION_ITEM_INT, MAVLINK_MESSAGE_INFO_VFR_HUD, MAVLINK_MESSAGE_INFO_COMMAND_INT, MAVLINK_MESSAGE_INFO_COMMAND_LONG, MAVLINK_MESSAGE_INFO_COMMAND_ACK, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_MANUAL_SETPOINT, MAVLINK_MESSAGE_INFO_SET_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_GLOBAL_INT, MAVLINK_MESSAGE_INFO_POSITION_TARGET_GLOBAL_INT, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET, MAVLINK_MESSAGE_INFO_HIL_STATE, MAVLINK_MESSAGE_INFO_HIL_CONTROLS, MAVLINK_MESSAGE_INFO_HIL_RC_INPUTS_RAW, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_GLOBAL_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_SPEED_ESTIMATE, MAVLINK_MESSAGE_INFO_VICON_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_HIGHRES_IMU, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW_RAD, MAVLINK_MESSAGE_INFO_HIL_SENSOR, MAVLINK_MESSAGE_INFO_SIM_STATE, MAVLINK_MESSAGE_INFO_RADIO_STATUS, MAVLINK_MESSAGE_INFO_FILE_TRANSFER_PROTOCOL, MAVLINK_MESSAGE_INFO_TIMESYNC, MAVLINK_MESSAGE_INFO_CAMERA_TRIGGER, MAVLINK_MESSAGE_INFO_HIL_GPS, MAVLINK_MESSAGE_INFO_HIL_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_HIL_STATE_QUATERNION, MAVLINK_MESSAGE_INFO_SCALED_IMU2, MAVLINK_MESSAGE_INFO_LOG_REQUEST_LIST, MAVLINK_MESSAGE_INFO_LOG_ENTRY, MAVLINK_MESSAGE_INFO_LOG_REQUEST_DATA, MAVLINK_MESSAGE_INFO_LOG_DATA, MAVLINK_MESSAGE_INFO_LOG_ERASE, MAVLINK_MESSAGE_INFO_LOG_REQUEST_END, MAVLINK_MESSAGE_INFO_GPS_INJECT_DATA, MAVLINK_MESSAGE_INFO_GPS2_RAW, MAVLINK_MESSAGE_INFO_POWER_STATUS, MAVLINK_MESSAGE_INFO_SERIAL_CONTROL, MAVLINK_MESSAGE_INFO_GPS_RTK, MAVLINK_MESSAGE_INFO_GPS2_RTK, MAVLINK_MESSAGE_INFO_SCALED_IMU3, MAVLINK_MESSAGE_INFO_DATA_TRANSMISSION_HANDSHAKE, MAVLINK_MESSAGE_INFO_ENCAPSULATED_DATA, MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR, MAVLINK_MESSAGE_INFO_TERRAIN_REQUEST, MAVLINK_MESSAGE_INFO_TERRAIN_DATA, MAVLINK_MESSAGE_INFO_TERRAIN_CHECK, MAVLINK_MESSAGE_INFO_TERRAIN_REPORT, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE2, MAVLINK_MESSAGE_INFO_ATT_POS_MOCAP, MAVLINK_MESSAGE_INFO_SET_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ALTITUDE, MAVLINK_MESSAGE_INFO_RESOURCE_REQUEST, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE3, MAVLINK_MESSAGE_INFO_FOLLOW_TARGET, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_CONTROL_SYSTEM_STATE, MAVLINK_MESSAGE_INFO_BATTERY_STATUS, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION, MAVLINK_MESSAGE_INFO_LANDING_TARGET, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_OFFBOARD_CONTROL, MAVLINK_MESSAGE_INFO_SMALL_IMU, MAVLINK_MESSAGE_INFO_SMALL_MAG, MAVLINK_MESSAGE_INFO_SMALL_BARO, MAVLINK_MESSAGE_INFO_DIFF_PRESSURE, MAVLINK_MESSAGE_INFO_CAMERA_STAMPED_SMALL_IMU, MAVLINK_MESSAGE_INFO_NAMED_COMMAND_STRUCT, MAVLINK_MESSAGE_INFO_SMALL_RANGE, MAVLINK_MESSAGE_INFO_ROSFLIGHT_CMD, MAVLINK_MESSAGE_INFO_ROSFLIGHT_CMD_ACK, MAVLINK_MESSAGE_INFO_ROSFLIGHT_OUTPUT_RAW, MAVLINK_MESSAGE_INFO_ROSFLIGHT_STATUS, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ROSFLIGHT_AUX_CMD, MAVLINK_MESSAGE_INFO_ROSFLIGHT_INS, MAVLINK_MESSAGE_INFO_EXTERNAL_ATTITUDE, MAVLINK_MESSAGE_INFO_ROSFLIGHT_HARD_ERROR, MAVLINK_MESSAGE_INFO_ROSFLIGHT_GNSS, MAVLINK_MESSAGE_INFO_ROSFLIGHT_GNSS_FULL, MAVLINK_MESSAGE_INFO_ROSFLIGHT_BATTERY_STATUS, MAVLINK_MESSAGE_INFO_ROSFLIGHT_CONFIG_REQUEST, MAVLINK_MESSAGE_INFO_ROSFLIGHT_CONFIG, MAVLINK_MESSAGE_INFO_ROSFLIGHT_DEVICE_INFO, MAVLINK_MESSAGE_INFO_ROSFLIGHT_CONFIG_INFO, MAVLINK_MESSAGE_INFO_ROSFLIGHT_CONFIG_STATUS, MAVLINK_MESSAGE_INFO_ROSFLIGHT_VERSION, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_ESTIMATOR_STATUS, MAVLINK_MESSAGE_INFO_WIND_COV, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_VIBRATION, MAVLINK_MESSAGE_INFO_HOME_POSITION, MAVLINK_MESSAGE_INFO_SET_HOME_POSITION, MAVLINK_MESSAGE_INFO_MESSAGE_INTERVAL, MAVLINK_MESSAGE_INFO_EXTENDED_SYS_STATE, MAVLINK_MESSAGE_INFO_ADSB_VEHICLE, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}, MAVLINK_MESSAGE_INFO_V2_EXTENSION, MAVLINK_MESSAGE_INFO_MEMORY_VECT, MAVLINK_MESSAGE_INFO_DEBUG_VECT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_FLOAT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_INT, MAVLINK_MESSAGE_INFO_STATUSTEXT, MAVLINK_MESSAGE_INFO_DEBUG, {"EMPTY",0,{{"","",MAVLINK_TYPE_CHAR,0,0,0}}}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_ROSFLIGHT

// ENUM DEFINITIONS


/** @brief  */
#ifndef HAVE_ENUM_ROSFLIGHT_CMD
#define HAVE_ENUM_ROSFLIGHT_CMD
typedef enum ROSFLIGHT_CMD
{
	ROSFLIGHT_CMD_RC_CALIBRATION=0, /*  | */
	ROSFLIGHT_CMD_ACCEL_CALIBRATION=1, /*  | */
	ROSFLIGHT_CMD_GYRO_CALIBRATION=2, /*  | */
	ROSFLIGHT_CMD_BARO_CALIBRATION=3, /*  | */
	ROSFLIGHT_CMD_AIRSPEED_CALIBRATION=4, /*  | */
	ROSFLIGHT_CMD_READ_PARAMS=5, /*  | */
	ROSFLIGHT_CMD_WRITE_PARAMS=6, /*  | */
	ROSFLIGHT_CMD_SET_PARAM_DEFAULTS=7, /*  | */
	ROSFLIGHT_CMD_REBOOT=8, /*  | */
	ROSFLIGHT_CMD_REBOOT_TO_BOOTLOADER=9, /*  | */
	ROSFLIGHT_CMD_SEND_VERSION=10, /*  | */
	ROSFLIGHT_CMD_RESET_ORIGIN=11, /*  | */
	ROSFLIGHT_CMD_SEND_ALL_CONFIG_INFOS=12, /*  | */
	ROSFLIGHT_CMD_ENUM_END=13, /*  | */
} ROSFLIGHT_CMD;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ROSFLIGHT_AUX_CMD_TYPE
#define HAVE_ENUM_ROSFLIGHT_AUX_CMD_TYPE
typedef enum ROSFLIGHT_AUX_CMD_TYPE
{
	DISABLED=0, /*  | */
	SERVO=1, /*  | */
	MOTOR=2, /*  | */
	ROSFLIGHT_AUX_CMD_TYPE_ENUM_END=3, /*  | */
} ROSFLIGHT_AUX_CMD_TYPE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ROSFLIGHT_CMD_RESPONSE
#define HAVE_ENUM_ROSFLIGHT_CMD_RESPONSE
typedef enum ROSFLIGHT_CMD_RESPONSE
{
	ROSFLIGHT_CMD_FAILED=0, /*  | */
	ROSFLIGHT_CMD_SUCCESS=1, /*  | */
	ROSFLIGHT_CMD_RESPONSE_ENUM_END=2, /*  | */
} ROSFLIGHT_CMD_RESPONSE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_OFFBOARD_CONTROL_MODE
#define HAVE_ENUM_OFFBOARD_CONTROL_MODE
typedef enum OFFBOARD_CONTROL_MODE
{
	MODE_PASS_THROUGH=0, /* Pass commanded values directly to actuators | */
	MODE_ROLLRATE_PITCHRATE_YAWRATE_THROTTLE=1, /* Command roll rate, pitch rate, yaw rate, and throttle | */
	MODE_ROLL_PITCH_YAWRATE_THROTTLE=2, /* Command roll angle, pitch angle, yaw rate, and throttle | */
	MODE_ROLL_PITCH_YAWRATE_ALTITUDE=3, /* Command roll angle, pitch angle, yaw rate, and altitude above ground | */
	MODE_XVEL_YVEL_YAWRATE_ALTITUDE=4, /* Command body-fixed, x and y velocity, and yaw rate, and altitude above ground | */
	MODE_XPOS_YPOS_YAW_ALTITUDE=5, /* Command inertial x, y position (m) wrt origin, yaw angle wrt north, and altitude above ground | */
	OFFBOARD_CONTROL_MODE_ENUM_END=6, /*  | */
} OFFBOARD_CONTROL_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_OFFBOARD_CONTROL_IGNORE
#define HAVE_ENUM_OFFBOARD_CONTROL_IGNORE
typedef enum OFFBOARD_CONTROL_IGNORE
{
	IGNORE_NONE=0, /* Convenience value for specifying no fields should be ignored | */
	IGNORE_VALUE1=1, /* Field value1 should be ignored | */
	IGNORE_VALUE2=2, /* Field value2 should be ignored | */
	IGNORE_VALUE3=4, /* Field value3 should be ignored | */
	IGNORE_VALUE4=8, /* Field value4 should be ignored | */
	IGNORE_VALUE5=22, /* Field value5 should be ignored | */
	IGNORE_VALUE6=50, /* Field value6 should be ignored | */
	OFFBOARD_CONTROL_IGNORE_ENUM_END=51, /*  | */
} OFFBOARD_CONTROL_IGNORE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ROSFLIGHT_ERROR_CODE
#define HAVE_ENUM_ROSFLIGHT_ERROR_CODE
typedef enum ROSFLIGHT_ERROR_CODE
{
	ROSFLIGHT_ERROR_NONE=0, /*  | */
	ROSFLIGHT_ERROR_INVALID_MIXER=1, /*  | */
	ROSFLIGHT_ERROR_IMU_NOT_RESPONDING=2, /*  | */
	ROSFLIGHT_ERROR_RC_LOST=4, /*  | */
	ROSFLIGHT_ERROR_UNHEALTHY_ESTIMATOR=8, /*  | */
	ROSFLIGHT_ERROR_TIME_GOING_BACKWARDS=16, /*  | */
	ROSFLIGHT_ERROR_UNCALIBRATED_IMU=32, /*  | */
	ROSFLIGHT_ERROR_BUFFER_OVERRUN=64, /*  | */
	ROSFLIGHT_ERROR_CODE_ENUM_END=65, /*  | */
} ROSFLIGHT_ERROR_CODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_ROSFLIGHT_RANGE_TYPE
#define HAVE_ENUM_ROSFLIGHT_RANGE_TYPE
typedef enum ROSFLIGHT_RANGE_TYPE
{
	ROSFLIGHT_RANGE_SONAR=0, /*  | */
	ROSFLIGHT_RANGE_LIDAR=1, /*  | */
	ROSFLIGHT_RANGE_TYPE_ENUM_END=2, /*  | */
} ROSFLIGHT_RANGE_TYPE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_GNSS_FIX_TYPE
#define HAVE_ENUM_GNSS_FIX_TYPE
typedef enum GNSS_FIX_TYPE
{
	GNSS_FIX_NO_FIX=0, /*  | */
	GNSS_FIX_FIX=1, /*  | */
	GNSS_FIX_RTK_FLOAT=2, /*  | */
	GNSS_FIX_RTK_FIXED=3, /*  | */
	GNSS_FIX_TYPE_ENUM_END=4, /*  | */
} GNSS_FIX_TYPE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_UBLOX_FIX_TYPE
#define HAVE_ENUM_UBLOX_FIX_TYPE
typedef enum UBLOX_FIX_TYPE
{
	NO_FIX=0, /*  | */
	DEAD_RECKONING_ONLY=1, /*  | */
	FIX_2D=2, /*  | */
	FIX_3D=3, /*  | */
	GNSS_AND_DEAD_RECKONING=4, /*  | */
	TIME_ONLY=5, /*  | */
	UBLOX_FIX_TYPE_ENUM_END=6, /*  | */
} UBLOX_FIX_TYPE;
#endif

#include "../common/common.h"

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_offboard_control.h"
#include "./mavlink_msg_small_imu.h"
#include "./mavlink_msg_small_mag.h"
#include "./mavlink_msg_small_baro.h"
#include "./mavlink_msg_diff_pressure.h"
#include "./mavlink_msg_camera_stamped_small_imu.h"
#include "./mavlink_msg_named_command_struct.h"
#include "./mavlink_msg_small_range.h"
#include "./mavlink_msg_rosflight_cmd.h"
#include "./mavlink_msg_rosflight_cmd_ack.h"
#include "./mavlink_msg_rosflight_output_raw.h"
#include "./mavlink_msg_rosflight_status.h"
#include "./mavlink_msg_rosflight_version.h"
#include "./mavlink_msg_rosflight_aux_cmd.h"
#include "./mavlink_msg_rosflight_ins.h"
#include "./mavlink_msg_external_attitude.h"
#include "./mavlink_msg_rosflight_hard_error.h"
#include "./mavlink_msg_rosflight_gnss.h"
#include "./mavlink_msg_rosflight_gnss_full.h"
#include "./mavlink_msg_rosflight_battery_status.h"
#include "./mavlink_msg_rosflight_config_request.h"
#include "./mavlink_msg_rosflight_config.h"
#include "./mavlink_msg_rosflight_device_info.h"
#include "./mavlink_msg_rosflight_config_info.h"
#include "./mavlink_msg_rosflight_config_status.h"

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_ROSFLIGHT_H
