#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationHistoryEntry NavigationHistoryEntry;


/**
 * @brief Interface NavigationTransition
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTransition)
 */
DECLARE_EMLITE_TYPE(NavigationTransition, em_Val);

/**
 * @brief Gets the `navigationType` property. 
*/
NavigationType NavigationTransition_navigationType(const NavigationTransition *self);

/**
 * @brief Gets the `from` property. 
*/
NavigationHistoryEntry NavigationTransition_from(const NavigationTransition *self);

/**
 * @brief Gets the `finished` property. 
*/
jb_Promise NavigationTransition_finished(const NavigationTransition *self);

#ifdef __cplusplus
}
#endif
