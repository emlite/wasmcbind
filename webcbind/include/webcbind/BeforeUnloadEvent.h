#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface BeforeUnloadEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BeforeUnloadEvent)
 */
DECLARE_EMLITE_TYPE(BeforeUnloadEvent, Event);

/**
 * @brief Gets the `returnValue` property. 
*/
jb_String BeforeUnloadEvent_returnValue(const BeforeUnloadEvent *self);

/**
 * @brief Sets the `returnValue` property. 
*/
void BeforeUnloadEvent_set_returnValue(BeforeUnloadEvent* self, jb_String * value);

#ifdef __cplusplus
}
#endif
