#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Event Event;
typedef struct Observable Observable;
typedef struct ObservableEventListenerOptions ObservableEventListenerOptions;


/**
 * @brief Interface EventTarget
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget)
 */
DECLARE_EMLITE_TYPE(EventTarget, em_Val);

/**
 * @brief Creates a new `EventTarget` object. 
*/
EventTarget EventTarget_new();

/**
 * @brief Calls the `addEventListener` method. 
*/
jb_Undefined EventTarget_addEventListener0(EventTarget* self , jb_String * type, jb_Function * callback);

/**
 * @brief Calls the `addEventListener` method. 
*/
jb_Undefined EventTarget_addEventListener1(EventTarget* self , jb_String * type, jb_Function * callback, jb_Any * options);

/**
 * @brief Calls the `removeEventListener` method. 
*/
jb_Undefined EventTarget_removeEventListener0(EventTarget* self , jb_String * type, jb_Function * callback);

/**
 * @brief Calls the `removeEventListener` method. 
*/
jb_Undefined EventTarget_removeEventListener1(EventTarget* self , jb_String * type, jb_Function * callback, jb_Any * options);

/**
 * @brief Calls the `dispatchEvent` method. 
*/
bool EventTarget_dispatchEvent(EventTarget* self , Event * event);

/**
 * @brief Calls the `when` method. 
*/
Observable EventTarget_when0(EventTarget* self , jb_String * type);

/**
 * @brief Calls the `when` method. 
*/
Observable EventTarget_when1(EventTarget* self , jb_String * type, ObservableEventListenerOptions * options);

#ifdef __cplusplus
}
#endif
