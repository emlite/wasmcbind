#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface RTCDTMFSender
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFSender)
 */
DECLARE_EMLITE_TYPE(RTCDTMFSender, EventTarget);

/**
 * @brief Calls the `insertDTMF` method. 
*/
jb_Undefined RTCDTMFSender_insertDTMF0(RTCDTMFSender* self , jb_String * tones);

/**
 * @brief Calls the `insertDTMF` method. 
*/
jb_Undefined RTCDTMFSender_insertDTMF1(RTCDTMFSender* self , jb_String * tones, unsigned long duration);

/**
 * @brief Calls the `insertDTMF` method. 
*/
jb_Undefined RTCDTMFSender_insertDTMF2(RTCDTMFSender* self , jb_String * tones, unsigned long duration, unsigned long interToneGap);

/**
 * @brief Gets the `ontonechange` property. 
*/
jb_Any RTCDTMFSender_ontonechange(const RTCDTMFSender *self);

/**
 * @brief Sets the `ontonechange` property. 
*/
void RTCDTMFSender_set_ontonechange(RTCDTMFSender* self, jb_Any * value);

/**
 * @brief Gets the `canInsertDTMF` property. 
*/
bool RTCDTMFSender_canInsertDTMF(const RTCDTMFSender *self);

/**
 * @brief Gets the `toneBuffer` property. 
*/
jb_String RTCDTMFSender_toneBuffer(const RTCDTMFSender *self);

#ifdef __cplusplus
}
#endif
