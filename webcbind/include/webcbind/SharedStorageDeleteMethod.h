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
 * @brief Interface SharedStorageDeleteMethod
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageDeleteMethod)
 */
DECLARE_EMLITE_TYPE(SharedStorageDeleteMethod, SharedStorageModifierMethod);

/**
 * @brief Creates a new `SharedStorageDeleteMethod` object. 
*/
SharedStorageDeleteMethod SharedStorageDeleteMethod_new0(jb_String * key);

/**
 * @brief Creates a new `SharedStorageDeleteMethod` object. 
*/
SharedStorageDeleteMethod SharedStorageDeleteMethod_new1(jb_String * key, SharedStorageModifierMethodOptions * options);

#ifdef __cplusplus
}
#endif
