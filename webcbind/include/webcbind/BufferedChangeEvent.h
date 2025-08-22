#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BufferedChangeEventInit BufferedChangeEventInit;
typedef struct TimeRanges TimeRanges;


/**
 * @brief Interface BufferedChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BufferedChangeEvent)
 */
DECLARE_EMLITE_TYPE(BufferedChangeEvent, Event);

/**
 * @brief Creates a new `BufferedChangeEvent` object. 
*/
BufferedChangeEvent BufferedChangeEvent_new0(jb_String * type);

/**
 * @brief Creates a new `BufferedChangeEvent` object. 
*/
BufferedChangeEvent BufferedChangeEvent_new1(jb_String * type, BufferedChangeEventInit * eventInitDict);

/**
 * @brief Gets the `addedRanges` property. 
*/
TimeRanges BufferedChangeEvent_addedRanges(const BufferedChangeEvent *self);

/**
 * @brief Gets the `removedRanges` property. 
*/
TimeRanges BufferedChangeEvent_removedRanges(const BufferedChangeEvent *self);

#ifdef __cplusplus
}
#endif
