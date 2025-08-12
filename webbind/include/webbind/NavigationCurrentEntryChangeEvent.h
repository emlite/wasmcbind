#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationCurrentEntryChangeEventInit NavigationCurrentEntryChangeEventInit;
typedef struct NavigationHistoryEntry NavigationHistoryEntry;


/**
 * @brief Interface NavigationCurrentEntryChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NavigationCurrentEntryChangeEvent)
 */
DECLARE_EMLITE_TYPE(NavigationCurrentEntryChangeEvent, Event);

/**
 * @brief Creates a new `NavigationCurrentEntryChangeEvent` object. 
*/
NavigationCurrentEntryChangeEvent NavigationCurrentEntryChangeEvent_new(jb_String * type, NavigationCurrentEntryChangeEventInit * eventInitDict);

/**
 * @brief Gets the `navigationType` property. 
*/
NavigationType NavigationCurrentEntryChangeEvent_navigationType(const NavigationCurrentEntryChangeEvent *self);

/**
 * @brief Gets the `from` property. 
*/
NavigationHistoryEntry NavigationCurrentEntryChangeEvent_from(const NavigationCurrentEntryChangeEvent *self);

#ifdef __cplusplus
}
#endif
