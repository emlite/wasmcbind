#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationHistoryEntry NavigationHistoryEntry;


/**
 * @brief Interface NavigationActivation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NavigationActivation)
 */
DECLARE_EMLITE_TYPE(NavigationActivation, em_Val);

/**
 * @brief Gets the `from` property. 
*/
NavigationHistoryEntry NavigationActivation_from(const NavigationActivation *self);

/**
 * @brief Gets the `entry` property. 
*/
NavigationHistoryEntry NavigationActivation_entry(const NavigationActivation *self);

/**
 * @brief Gets the `navigationType` property. 
*/
NavigationType NavigationActivation_navigationType(const NavigationActivation *self);

#ifdef __cplusplus
}
#endif
