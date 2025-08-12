#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CapturedMouseEventInit CapturedMouseEventInit;


/**
 * @brief Interface CapturedMouseEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CapturedMouseEvent)
 */
DECLARE_EMLITE_TYPE(CapturedMouseEvent, Event);

/**
 * @brief Creates a new `CapturedMouseEvent` object. 
*/
CapturedMouseEvent CapturedMouseEvent_new0(jb_String * type);

/**
 * @brief Creates a new `CapturedMouseEvent` object. 
*/
CapturedMouseEvent CapturedMouseEvent_new1(jb_String * type, CapturedMouseEventInit * eventInitDict);

/**
 * @brief Gets the `surfaceX` property. 
*/
long CapturedMouseEvent_surfaceX(const CapturedMouseEvent *self);

/**
 * @brief Gets the `surfaceY` property. 
*/
long CapturedMouseEvent_surfaceY(const CapturedMouseEvent *self);

#ifdef __cplusplus
}
#endif
