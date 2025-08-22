#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TransitionEventInit TransitionEventInit;


/**
 * @brief Interface TransitionEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TransitionEvent)
 */
DECLARE_EMLITE_TYPE(TransitionEvent, Event);

/**
 * @brief Creates a new `TransitionEvent` object. 
*/
TransitionEvent TransitionEvent_new0(jb_String * type);

/**
 * @brief Creates a new `TransitionEvent` object. 
*/
TransitionEvent TransitionEvent_new1(jb_String * type, TransitionEventInit * transitionEventInitDict);

/**
 * @brief Gets the `propertyName` property. 
*/
jb_String TransitionEvent_propertyName(const TransitionEvent *self);

/**
 * @brief Gets the `elapsedTime` property. 
*/
double TransitionEvent_elapsedTime(const TransitionEvent *self);

/**
 * @brief Gets the `pseudoElement` property. 
*/
jb_String TransitionEvent_pseudoElement(const TransitionEvent *self);

#ifdef __cplusplus
}
#endif
