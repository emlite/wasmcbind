#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface UserActivation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/UserActivation)
 */
DECLARE_EMLITE_TYPE(UserActivation, em_Val);

/**
 * @brief Gets the `hasBeenActive` property. 
*/
bool UserActivation_hasBeenActive(const UserActivation *self);

/**
 * @brief Gets the `isActive` property. 
*/
bool UserActivation_isActive(const UserActivation *self);

#ifdef __cplusplus
}
#endif
