#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CustomEventInit CustomEventInit;


/**
 * @brief Interface CustomEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CustomEvent)
 */
DECLARE_EMLITE_TYPE(CustomEvent, Event);

/**
 * @brief Creates a new `CustomEvent` object. 
*/
CustomEvent CustomEvent_new0(jb_String * type);

/**
 * @brief Creates a new `CustomEvent` object. 
*/
CustomEvent CustomEvent_new1(jb_String * type, CustomEventInit * eventInitDict);

/**
 * @brief Gets the `detail` property. 
*/
jb_Any CustomEvent_detail(const CustomEvent *self);

/**
 * @brief Calls the `initCustomEvent` method. 
*/
jb_Undefined CustomEvent_initCustomEvent0(CustomEvent* self , jb_String * type);

/**
 * @brief Calls the `initCustomEvent` method. 
*/
jb_Undefined CustomEvent_initCustomEvent1(CustomEvent* self , jb_String * type, bool bubbles);

/**
 * @brief Calls the `initCustomEvent` method. 
*/
jb_Undefined CustomEvent_initCustomEvent2(CustomEvent* self , jb_String * type, bool bubbles, bool cancelable);

/**
 * @brief Calls the `initCustomEvent` method. 
*/
jb_Undefined CustomEvent_initCustomEvent3(CustomEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * detail);

#ifdef __cplusplus
}
#endif
