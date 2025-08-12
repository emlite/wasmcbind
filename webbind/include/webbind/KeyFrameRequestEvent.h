#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface KeyFrameRequestEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/KeyFrameRequestEvent)
 */
DECLARE_EMLITE_TYPE(KeyFrameRequestEvent, Event);

/**
 * @brief Creates a new `KeyFrameRequestEvent` object. 
*/
KeyFrameRequestEvent KeyFrameRequestEvent_new0(jb_String * type);

/**
 * @brief Creates a new `KeyFrameRequestEvent` object. 
*/
KeyFrameRequestEvent KeyFrameRequestEvent_new1(jb_String * type, jb_String * rid);

/**
 * @brief Gets the `rid` property. 
*/
jb_String KeyFrameRequestEvent_rid(const KeyFrameRequestEvent *self);

#ifdef __cplusplus
}
#endif
