#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LockManager LockManager;


/**
 * @brief Interface SharedStorageWorkletNavigator
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletNavigator)
 */
DECLARE_EMLITE_TYPE(SharedStorageWorkletNavigator, em_Val);

/**
 * @brief Gets the `locks` property. 
*/
LockManager SharedStorageWorkletNavigator_locks(const SharedStorageWorkletNavigator *self);

#ifdef __cplusplus
}
#endif
