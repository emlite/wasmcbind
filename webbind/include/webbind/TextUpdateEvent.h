#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextUpdateEventInit TextUpdateEventInit;


/**
 * @brief Interface TextUpdateEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent)
 */
DECLARE_EMLITE_TYPE(TextUpdateEvent, Event);

/**
 * @brief Creates a new `TextUpdateEvent` object. 
*/
TextUpdateEvent TextUpdateEvent_new0(jb_String * type);

/**
 * @brief Creates a new `TextUpdateEvent` object. 
*/
TextUpdateEvent TextUpdateEvent_new1(jb_String * type, TextUpdateEventInit * options);

/**
 * @brief Gets the `updateRangeStart` property. 
*/
unsigned long TextUpdateEvent_updateRangeStart(const TextUpdateEvent *self);

/**
 * @brief Gets the `updateRangeEnd` property. 
*/
unsigned long TextUpdateEvent_updateRangeEnd(const TextUpdateEvent *self);

/**
 * @brief Gets the `text` property. 
*/
jb_String TextUpdateEvent_text(const TextUpdateEvent *self);

/**
 * @brief Gets the `selectionStart` property. 
*/
unsigned long TextUpdateEvent_selectionStart(const TextUpdateEvent *self);

/**
 * @brief Gets the `selectionEnd` property. 
*/
unsigned long TextUpdateEvent_selectionEnd(const TextUpdateEvent *self);

#ifdef __cplusplus
}
#endif
