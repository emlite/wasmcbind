#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "UIEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Window Window;


/**
 * @brief Interface TextEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextEvent)
 */
DECLARE_EMLITE_TYPE(TextEvent, UIEvent);

/**
 * @brief Gets the `data` property. 
*/
jb_String TextEvent_data(const TextEvent *self);

/**
 * @brief Calls the `initTextEvent` method. 
*/
jb_Undefined TextEvent_initTextEvent0(TextEvent* self , jb_String * type);

/**
 * @brief Calls the `initTextEvent` method. 
*/
jb_Undefined TextEvent_initTextEvent1(TextEvent* self , jb_String * type, bool bubbles);

/**
 * @brief Calls the `initTextEvent` method. 
*/
jb_Undefined TextEvent_initTextEvent2(TextEvent* self , jb_String * type, bool bubbles, bool cancelable);

/**
 * @brief Calls the `initTextEvent` method. 
*/
jb_Undefined TextEvent_initTextEvent3(TextEvent* self , jb_String * type, bool bubbles, bool cancelable, Window * view);

/**
 * @brief Calls the `initTextEvent` method. 
*/
jb_Undefined TextEvent_initTextEvent4(TextEvent* self , jb_String * type, bool bubbles, bool cancelable, Window * view, jb_String * data);

#ifdef __cplusplus
}
#endif
