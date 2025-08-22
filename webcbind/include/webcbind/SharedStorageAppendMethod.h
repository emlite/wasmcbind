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
 * @brief Interface SharedStorageAppendMethod
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageAppendMethod)
 */
DECLARE_EMLITE_TYPE(SharedStorageAppendMethod, SharedStorageModifierMethod);

/**
 * @brief Creates a new `SharedStorageAppendMethod` object. 
*/
SharedStorageAppendMethod SharedStorageAppendMethod_new0(jb_String * key, jb_String * value);

/**
 * @brief Creates a new `SharedStorageAppendMethod` object. 
*/
SharedStorageAppendMethod SharedStorageAppendMethod_new1(jb_String * key, jb_String * value, SharedStorageModifierMethodOptions * options);

#ifdef __cplusplus
}
#endif
