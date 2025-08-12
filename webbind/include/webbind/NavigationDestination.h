#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface NavigationDestination
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NavigationDestination)
 */
DECLARE_EMLITE_TYPE(NavigationDestination, em_Val);

/**
 * @brief Gets the `url` property. 
*/
jb_String NavigationDestination_url(const NavigationDestination *self);

/**
 * @brief Gets the `key` property. 
*/
jb_String NavigationDestination_key(const NavigationDestination *self);

/**
 * @brief Gets the `id` property. 
*/
jb_String NavigationDestination_id(const NavigationDestination *self);

/**
 * @brief Gets the `index` property. 
*/
long long NavigationDestination_index(const NavigationDestination *self);

/**
 * @brief Gets the `sameDocument` property. 
*/
bool NavigationDestination_sameDocument(const NavigationDestination *self);

/**
 * @brief Calls the `getState` method. 
*/
jb_Any NavigationDestination_getState(NavigationDestination* self );

#ifdef __cplusplus
}
#endif
