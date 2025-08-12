#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface Lock
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Lock)
 */
DECLARE_EMLITE_TYPE(Lock, em_Val);

/**
 * @brief Gets the `name` property. 
*/
jb_String Lock_name(const Lock *self);

/**
 * @brief Gets the `mode` property. 
*/
LockMode Lock_mode(const Lock *self);

#ifdef __cplusplus
}
#endif
