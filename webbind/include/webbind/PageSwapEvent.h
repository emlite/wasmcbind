#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PageSwapEventInit PageSwapEventInit;
typedef struct NavigationActivation NavigationActivation;
typedef struct ViewTransition ViewTransition;


/**
 * @brief Interface PageSwapEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PageSwapEvent)
 */
DECLARE_EMLITE_TYPE(PageSwapEvent, Event);

/**
 * @brief Creates a new `PageSwapEvent` object. 
*/
PageSwapEvent PageSwapEvent_new0(jb_String * type);

/**
 * @brief Creates a new `PageSwapEvent` object. 
*/
PageSwapEvent PageSwapEvent_new1(jb_String * type, PageSwapEventInit * eventInitDict);

/**
 * @brief Gets the `activation` property. 
*/
NavigationActivation PageSwapEvent_activation(const PageSwapEvent *self);

/**
 * @brief Gets the `viewTransition` property. 
*/
ViewTransition PageSwapEvent_viewTransition(const PageSwapEvent *self);

#ifdef __cplusplus
}
#endif
