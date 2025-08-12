#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ValueEventInit ValueEventInit;


/**
 * @brief Interface ValueEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ValueEvent)
 */
DECLARE_EMLITE_TYPE(ValueEvent, Event);

/**
 * @brief Creates a new `ValueEvent` object. 
*/
ValueEvent ValueEvent_new0(jb_String * type);

/**
 * @brief Creates a new `ValueEvent` object. 
*/
ValueEvent ValueEvent_new1(jb_String * type, ValueEventInit * initDict);

/**
 * @brief Gets the `value` property. 
*/
jb_Any ValueEvent_value(const ValueEvent *self);

#ifdef __cplusplus
}
#endif
