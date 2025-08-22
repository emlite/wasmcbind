#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCDataChannelEventInit RTCDataChannelEventInit;
typedef struct RTCDataChannel RTCDataChannel;


/**
 * @brief Interface RTCDataChannelEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannelEvent)
 */
DECLARE_EMLITE_TYPE(RTCDataChannelEvent, Event);

/**
 * @brief Creates a new `RTCDataChannelEvent` object. 
*/
RTCDataChannelEvent RTCDataChannelEvent_new(jb_String * type, RTCDataChannelEventInit * eventInitDict);

/**
 * @brief Gets the `channel` property. 
*/
RTCDataChannel RTCDataChannelEvent_channel(const RTCDataChannelEvent *self);

#ifdef __cplusplus
}
#endif
