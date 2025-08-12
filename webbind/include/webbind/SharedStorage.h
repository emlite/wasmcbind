#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SharedStorageSetMethodOptions SharedStorageSetMethodOptions;
typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;
typedef struct SharedStorageModifierMethod SharedStorageModifierMethod;
typedef struct SharedStorageUrlWithMetadata SharedStorageUrlWithMetadata;
typedef struct SharedStorageRunOperationMethodOptions SharedStorageRunOperationMethodOptions;
typedef struct SharedStorageWorklet SharedStorageWorklet;
typedef struct SharedStorageWorkletOptions SharedStorageWorkletOptions;


/**
 * @brief Interface SharedStorage
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorage)
 */
DECLARE_EMLITE_TYPE(SharedStorage, em_Val);

/**
 * @brief Calls the `get` method. 
*/
jb_Promise SharedStorage_get(SharedStorage* self , jb_String * key);

/**
 * @brief Calls the `set` method. 
*/
jb_Promise SharedStorage_set0(SharedStorage* self , jb_String * key, jb_String * value);

/**
 * @brief Calls the `set` method. 
*/
jb_Promise SharedStorage_set1(SharedStorage* self , jb_String * key, jb_String * value, SharedStorageSetMethodOptions * options);

/**
 * @brief Calls the `append` method. 
*/
jb_Promise SharedStorage_append0(SharedStorage* self , jb_String * key, jb_String * value);

/**
 * @brief Calls the `append` method. 
*/
jb_Promise SharedStorage_append1(SharedStorage* self , jb_String * key, jb_String * value, SharedStorageModifierMethodOptions * options);

/**
 * @brief Calls the `delete` method. 
*/
jb_Promise SharedStorage_delete_0(SharedStorage* self , jb_String * key);

/**
 * @brief Calls the `delete` method. 
*/
jb_Promise SharedStorage_delete_1(SharedStorage* self , jb_String * key, SharedStorageModifierMethodOptions * options);

/**
 * @brief Calls the `clear` method. 
*/
jb_Promise SharedStorage_clear0(SharedStorage* self );

/**
 * @brief Calls the `clear` method. 
*/
jb_Promise SharedStorage_clear1(SharedStorage* self , SharedStorageModifierMethodOptions * options);

/**
 * @brief Calls the `batchUpdate` method. 
*/
jb_Promise SharedStorage_batchUpdate0(SharedStorage* self , jb_Array * methods);

/**
 * @brief Calls the `batchUpdate` method. 
*/
jb_Promise SharedStorage_batchUpdate1(SharedStorage* self , jb_Array * methods, SharedStorageModifierMethodOptions * options);

/**
 * @brief Calls the `selectURL` method. 
*/
jb_Promise SharedStorage_selectURL0(SharedStorage* self , jb_String * name, jb_Array * urls);

/**
 * @brief Calls the `selectURL` method. 
*/
jb_Promise SharedStorage_selectURL1(SharedStorage* self , jb_String * name, jb_Array * urls, SharedStorageRunOperationMethodOptions * options);

/**
 * @brief Calls the `run` method. 
*/
jb_Promise SharedStorage_run0(SharedStorage* self , jb_String * name);

/**
 * @brief Calls the `run` method. 
*/
jb_Promise SharedStorage_run1(SharedStorage* self , jb_String * name, SharedStorageRunOperationMethodOptions * options);

/**
 * @brief Calls the `createWorklet` method. 
*/
jb_Promise SharedStorage_createWorklet0(SharedStorage* self , jb_String * moduleURL);

/**
 * @brief Calls the `createWorklet` method. 
*/
jb_Promise SharedStorage_createWorklet1(SharedStorage* self , jb_String * moduleURL, SharedStorageWorkletOptions * options);

/**
 * @brief Gets the `worklet` property. 
*/
SharedStorageWorklet SharedStorage_worklet(const SharedStorage *self);

/**
 * @brief Calls the `length` method. 
*/
jb_Promise SharedStorage_length(SharedStorage* self );

/**
 * @brief Calls the `remainingBudget` method. 
*/
jb_Promise SharedStorage_remainingBudget(SharedStorage* self );

#ifdef __cplusplus
}
#endif
