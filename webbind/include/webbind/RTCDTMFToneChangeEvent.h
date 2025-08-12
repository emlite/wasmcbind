#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCDTMFToneChangeEventInit RTCDTMFToneChangeEventInit;


/**
 * @brief Interface RTCDTMFToneChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFToneChangeEvent)
 */
DECLARE_EMLITE_TYPE(RTCDTMFToneChangeEvent, Event);

/**
 * @brief Creates a new `RTCDTMFToneChangeEvent` object. 
*/
RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new0(jb_String * type);

/**
 * @brief Creates a new `RTCDTMFToneChangeEvent` object. 
*/
RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new1(jb_String * type, RTCDTMFToneChangeEventInit * eventInitDict);

/**
 * @brief Gets the `tone` property. 
*/
jb_String RTCDTMFToneChangeEvent_tone(const RTCDTMFToneChangeEvent *self);

#ifdef __cplusplus
}
#endif
