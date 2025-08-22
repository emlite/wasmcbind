#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCRtpSender RTCRtpSender;
typedef struct RTCRtpReceiver RTCRtpReceiver;
typedef struct RTCRtpCodec RTCRtpCodec;


/**
 * @brief Interface RTCRtpTransceiver
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiver)
 */
DECLARE_EMLITE_TYPE(RTCRtpTransceiver, em_Val);

/**
 * @brief Gets the `mid` property. 
*/
jb_String RTCRtpTransceiver_mid(const RTCRtpTransceiver *self);

/**
 * @brief Gets the `sender` property. 
*/
RTCRtpSender RTCRtpTransceiver_sender(const RTCRtpTransceiver *self);

/**
 * @brief Gets the `receiver` property. 
*/
RTCRtpReceiver RTCRtpTransceiver_receiver(const RTCRtpTransceiver *self);

/**
 * @brief Gets the `direction` property. 
*/
RTCRtpTransceiverDirection RTCRtpTransceiver_direction(const RTCRtpTransceiver *self);

/**
 * @brief Sets the `direction` property. 
*/
void RTCRtpTransceiver_set_direction(RTCRtpTransceiver* self, RTCRtpTransceiverDirection * value);

/**
 * @brief Gets the `currentDirection` property. 
*/
RTCRtpTransceiverDirection RTCRtpTransceiver_currentDirection(const RTCRtpTransceiver *self);

/**
 * @brief Calls the `stop` method. 
*/
jb_Undefined RTCRtpTransceiver_stop(RTCRtpTransceiver* self );

/**
 * @brief Calls the `setCodecPreferences` method. 
*/
jb_Undefined RTCRtpTransceiver_setCodecPreferences(RTCRtpTransceiver* self , jb_Array * codecs);

#ifdef __cplusplus
}
#endif
