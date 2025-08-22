#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SharedStorageModifierMethod.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;


/**
 * @brief Interface SharedStorageClearMethod
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageClearMethod)
 */
DECLARE_EMLITE_TYPE(SharedStorageClearMethod, SharedStorageModifierMethod);

/**
 * @brief Creates a new `SharedStorageClearMethod` object. 
*/
SharedStorageClearMethod SharedStorageClearMethod_new0();

/**
 * @brief Creates a new `SharedStorageClearMethod` object. 
*/
SharedStorageClearMethod SharedStorageClearMethod_new1(SharedStorageModifierMethodOptions * options);

#ifdef __cplusplus
}
#endif
