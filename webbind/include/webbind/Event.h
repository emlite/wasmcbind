#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventInit EventInit;
typedef struct EventTarget EventTarget;


/**
 * @brief Interface Event
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Event)
 */
DECLARE_EMLITE_TYPE(Event, em_Val);

/**
 * @brief Creates a new `Event` object. 
*/
Event Event_new0(jb_String * type);

/**
 * @brief Creates a new `Event` object. 
*/
Event Event_new1(jb_String * type, EventInit * eventInitDict);

/**
 * @brief Gets the `type` property. 
*/
jb_String Event_type(const Event *self);

/**
 * @brief Gets the `target` property. 
*/
EventTarget Event_target(const Event *self);

/**
 * @brief Gets the `srcElement` property. 
*/
EventTarget Event_srcElement(const Event *self);

/**
 * @brief Gets the `currentTarget` property. 
*/
EventTarget Event_currentTarget(const Event *self);

/**
 * @brief Calls the `composedPath` method. 
*/
jb_Array Event_composedPath(Event* self );

/**
 * @brief Gets the `eventPhase` property. 
*/
unsigned short Event_eventPhase(const Event *self);

/**
 * @brief Calls the `stopPropagation` method. 
*/
jb_Undefined Event_stopPropagation(Event* self );

/**
 * @brief Gets the `cancelBubble` property. 
*/
bool Event_cancelBubble(const Event *self);

/**
 * @brief Sets the `cancelBubble` property. 
*/
void Event_set_cancelBubble(Event* self, bool value);

/**
 * @brief Calls the `stopImmediatePropagation` method. 
*/
jb_Undefined Event_stopImmediatePropagation(Event* self );

/**
 * @brief Gets the `bubbles` property. 
*/
bool Event_bubbles(const Event *self);

/**
 * @brief Gets the `cancelable` property. 
*/
bool Event_cancelable(const Event *self);

/**
 * @brief Gets the `returnValue` property. 
*/
bool Event_returnValue(const Event *self);

/**
 * @brief Sets the `returnValue` property. 
*/
void Event_set_returnValue(Event* self, bool value);

/**
 * @brief Calls the `preventDefault` method. 
*/
jb_Undefined Event_preventDefault(Event* self );

/**
 * @brief Gets the `defaultPrevented` property. 
*/
bool Event_defaultPrevented(const Event *self);

/**
 * @brief Gets the `composed` property. 
*/
bool Event_composed(const Event *self);

/**
 * @brief Gets the `isTrusted` property. 
*/
bool Event_isTrusted(const Event *self);

/**
 * @brief Gets the `timeStamp` property. 
*/
jb_Any Event_timeStamp(const Event *self);

/**
 * @brief Calls the `initEvent` method. 
*/
jb_Undefined Event_initEvent0(Event* self , jb_String * type);

/**
 * @brief Calls the `initEvent` method. 
*/
jb_Undefined Event_initEvent1(Event* self , jb_String * type, bool bubbles);

/**
 * @brief Calls the `initEvent` method. 
*/
jb_Undefined Event_initEvent2(Event* self , jb_String * type, bool bubbles, bool cancelable);

#ifdef __cplusplus
}
#endif
