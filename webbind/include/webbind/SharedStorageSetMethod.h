#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SharedStorageModifierMethod.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SharedStorageSetMethodOptions SharedStorageSetMethodOptions;


/**
 * @brief Interface SharedStorageSetMethod
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageSetMethod)
 */
DECLARE_EMLITE_TYPE(SharedStorageSetMethod, SharedStorageModifierMethod);

/**
 * @brief Creates a new `SharedStorageSetMethod` object. 
*/
SharedStorageSetMethod SharedStorageSetMethod_new0(jb_String * key, jb_String * value);

/**
 * @brief Creates a new `SharedStorageSetMethod` object. 
*/
SharedStorageSetMethod SharedStorageSetMethod_new1(jb_String * key, jb_String * value, SharedStorageSetMethodOptions * options);

#ifdef __cplusplus
}
#endif
