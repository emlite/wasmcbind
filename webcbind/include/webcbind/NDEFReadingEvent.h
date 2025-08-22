#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NDEFReadingEventInit NDEFReadingEventInit;
typedef struct NDEFMessage NDEFMessage;


/**
 * @brief Interface NDEFReadingEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NDEFReadingEvent)
 */
DECLARE_EMLITE_TYPE(NDEFReadingEvent, Event);

/**
 * @brief Creates a new `NDEFReadingEvent` object. 
*/
NDEFReadingEvent NDEFReadingEvent_new(jb_String * type, NDEFReadingEventInit * readingEventInitDict);

/**
 * @brief Gets the `serialNumber` property. 
*/
jb_String NDEFReadingEvent_serialNumber(const NDEFReadingEvent *self);

/**
 * @brief Gets the `message` property. 
*/
NDEFMessage NDEFReadingEvent_message(const NDEFReadingEvent *self);

#ifdef __cplusplus
}
#endif
