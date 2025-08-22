#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "UIEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationEventInit NavigationEventInit;
typedef struct EventTarget EventTarget;


/**
 * @brief Interface NavigationEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NavigationEvent)
 */
DECLARE_EMLITE_TYPE(NavigationEvent, UIEvent);

/**
 * @brief Creates a new `NavigationEvent` object. 
*/
NavigationEvent NavigationEvent_new0(jb_String * type);

/**
 * @brief Creates a new `NavigationEvent` object. 
*/
NavigationEvent NavigationEvent_new1(jb_String * type, NavigationEventInit * eventInitDict);

/**
 * @brief Gets the `dir` property. 
*/
SpatialNavigationDirection NavigationEvent_dir(const NavigationEvent *self);

/**
 * @brief Gets the `relatedTarget` property. 
*/
EventTarget NavigationEvent_relatedTarget(const NavigationEvent *self);

#ifdef __cplusplus
}
#endif
