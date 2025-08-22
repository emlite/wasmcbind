#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CharacterBoundsUpdateEventInit CharacterBoundsUpdateEventInit;


/**
 * @brief Interface CharacterBoundsUpdateEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CharacterBoundsUpdateEvent)
 */
DECLARE_EMLITE_TYPE(CharacterBoundsUpdateEvent, Event);

/**
 * @brief Creates a new `CharacterBoundsUpdateEvent` object. 
*/
CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent_new0(jb_String * type);

/**
 * @brief Creates a new `CharacterBoundsUpdateEvent` object. 
*/
CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent_new1(jb_String * type, CharacterBoundsUpdateEventInit * options);

/**
 * @brief Gets the `rangeStart` property. 
*/
unsigned long CharacterBoundsUpdateEvent_rangeStart(const CharacterBoundsUpdateEvent *self);

/**
 * @brief Gets the `rangeEnd` property. 
*/
unsigned long CharacterBoundsUpdateEvent_rangeEnd(const CharacterBoundsUpdateEvent *self);

#ifdef __cplusplus
}
#endif
