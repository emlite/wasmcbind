#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WorkletGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SharedStorage SharedStorage;
typedef struct PrivateAggregation PrivateAggregation;
typedef struct StorageInterestGroup StorageInterestGroup;
typedef struct SharedStorageWorkletNavigator SharedStorageWorkletNavigator;


/**
 * @brief Interface SharedStorageWorkletGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope)
 */
DECLARE_EMLITE_TYPE(SharedStorageWorkletGlobalScope, WorkletGlobalScope);

/**
 * @brief Calls the `register` method. 
*/
jb_Undefined SharedStorageWorkletGlobalScope_register_(SharedStorageWorkletGlobalScope* self , jb_String * name, jb_Function * operationCtor);

/**
 * @brief Gets the `sharedStorage` property. 
*/
SharedStorage SharedStorageWorkletGlobalScope_sharedStorage(const SharedStorageWorkletGlobalScope *self);

/**
 * @brief Gets the `privateAggregation` property. 
*/
PrivateAggregation SharedStorageWorkletGlobalScope_privateAggregation(const SharedStorageWorkletGlobalScope *self);

/**
 * @brief Calls the `interestGroups` method. 
*/
jb_Promise SharedStorageWorkletGlobalScope_interestGroups(SharedStorageWorkletGlobalScope* self );

/**
 * @brief Gets the `navigator` property. 
*/
SharedStorageWorkletNavigator SharedStorageWorkletGlobalScope_navigator(const SharedStorageWorkletGlobalScope *self);

#ifdef __cplusplus
}
#endif
