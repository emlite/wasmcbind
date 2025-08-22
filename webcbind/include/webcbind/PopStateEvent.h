#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PopStateEventInit PopStateEventInit;


/**
 * @brief Interface PopStateEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PopStateEvent)
 */
DECLARE_EMLITE_TYPE(PopStateEvent, Event);

/**
 * @brief Creates a new `PopStateEvent` object. 
*/
PopStateEvent PopStateEvent_new0(jb_String * type);

/**
 * @brief Creates a new `PopStateEvent` object. 
*/
PopStateEvent PopStateEvent_new1(jb_String * type, PopStateEventInit * eventInitDict);

/**
 * @brief Gets the `state` property. 
*/
jb_Any PopStateEvent_state(const PopStateEvent *self);

/**
 * @brief Gets the `hasUAVisualTransition` property. 
*/
bool PopStateEvent_hasUAVisualTransition(const PopStateEvent *self);

#ifdef __cplusplus
}
#endif
