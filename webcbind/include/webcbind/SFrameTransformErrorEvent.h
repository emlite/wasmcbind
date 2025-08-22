#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SFrameTransformErrorEventInit SFrameTransformErrorEventInit;


/**
 * @brief Interface SFrameTransformErrorEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransformErrorEvent)
 */
DECLARE_EMLITE_TYPE(SFrameTransformErrorEvent, Event);

/**
 * @brief Creates a new `SFrameTransformErrorEvent` object. 
*/
SFrameTransformErrorEvent SFrameTransformErrorEvent_new(jb_String * type, SFrameTransformErrorEventInit * eventInitDict);

/**
 * @brief Gets the `errorType` property. 
*/
SFrameTransformErrorEventType SFrameTransformErrorEvent_errorType(const SFrameTransformErrorEvent *self);

/**
 * @brief Gets the `keyID` property. 
*/
jb_Any SFrameTransformErrorEvent_keyID(const SFrameTransformErrorEvent *self);

/**
 * @brief Gets the `frame` property. 
*/
jb_Any SFrameTransformErrorEvent_frame(const SFrameTransformErrorEvent *self);

#ifdef __cplusplus
}
#endif
