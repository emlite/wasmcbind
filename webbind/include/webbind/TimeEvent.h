#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Window Window;


/**
 * @brief Interface TimeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TimeEvent)
 */
DECLARE_EMLITE_TYPE(TimeEvent, Event);

/**
 * @brief Gets the `view` property. 
*/
jb_Any TimeEvent_view(const TimeEvent *self);

/**
 * @brief Gets the `detail` property. 
*/
long TimeEvent_detail(const TimeEvent *self);

/**
 * @brief Calls the `initTimeEvent` method. 
*/
jb_Undefined TimeEvent_initTimeEvent(TimeEvent* self , jb_String * typeArg, Window * viewArg, long detailArg);

#ifdef __cplusplus
}
#endif
