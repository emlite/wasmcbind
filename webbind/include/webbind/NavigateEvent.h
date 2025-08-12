#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigateEventInit NavigateEventInit;
typedef struct NavigationDestination NavigationDestination;
typedef struct AbortSignal AbortSignal;
typedef struct FormData FormData;
typedef struct Element Element;
typedef struct NavigationInterceptOptions NavigationInterceptOptions;


/**
 * @brief Interface NavigateEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NavigateEvent)
 */
DECLARE_EMLITE_TYPE(NavigateEvent, Event);

/**
 * @brief Creates a new `NavigateEvent` object. 
*/
NavigateEvent NavigateEvent_new(jb_String * type, NavigateEventInit * eventInitDict);

/**
 * @brief Gets the `navigationType` property. 
*/
NavigationType NavigateEvent_navigationType(const NavigateEvent *self);

/**
 * @brief Gets the `destination` property. 
*/
NavigationDestination NavigateEvent_destination(const NavigateEvent *self);

/**
 * @brief Gets the `canIntercept` property. 
*/
bool NavigateEvent_canIntercept(const NavigateEvent *self);

/**
 * @brief Gets the `userInitiated` property. 
*/
bool NavigateEvent_userInitiated(const NavigateEvent *self);

/**
 * @brief Gets the `hashChange` property. 
*/
bool NavigateEvent_hashChange(const NavigateEvent *self);

/**
 * @brief Gets the `signal` property. 
*/
AbortSignal NavigateEvent_signal(const NavigateEvent *self);

/**
 * @brief Gets the `formData` property. 
*/
FormData NavigateEvent_formData(const NavigateEvent *self);

/**
 * @brief Gets the `downloadRequest` property. 
*/
jb_String NavigateEvent_downloadRequest(const NavigateEvent *self);

/**
 * @brief Gets the `info` property. 
*/
jb_Any NavigateEvent_info(const NavigateEvent *self);

/**
 * @brief Gets the `hasUAVisualTransition` property. 
*/
bool NavigateEvent_hasUAVisualTransition(const NavigateEvent *self);

/**
 * @brief Gets the `sourceElement` property. 
*/
Element NavigateEvent_sourceElement(const NavigateEvent *self);

/**
 * @brief Calls the `intercept` method. 
*/
jb_Undefined NavigateEvent_intercept0(NavigateEvent* self );

/**
 * @brief Calls the `intercept` method. 
*/
jb_Undefined NavigateEvent_intercept1(NavigateEvent* self , NavigationInterceptOptions * options);

/**
 * @brief Calls the `scroll` method. 
*/
jb_Undefined NavigateEvent_scroll(NavigateEvent* self );

#ifdef __cplusplus
}
#endif
