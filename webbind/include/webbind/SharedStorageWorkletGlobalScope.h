#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkletGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SharedStorage SharedStorage;
typedef struct PrivateAggregation PrivateAggregation;
typedef struct StorageInterestGroup StorageInterestGroup;
typedef struct SharedStorageWorkletNavigator SharedStorageWorkletNavigator;

DECLARE_EMLITE_TYPE(SharedStorageWorkletGlobalScope, WorkletGlobalScope);

jb_Undefined SharedStorageWorkletGlobalScope_register_(SharedStorageWorkletGlobalScope* self , jb_String * name, jb_Function * operationCtor);

SharedStorage SharedStorageWorkletGlobalScope_sharedStorage(const SharedStorageWorkletGlobalScope *self);

PrivateAggregation SharedStorageWorkletGlobalScope_privateAggregation(const SharedStorageWorkletGlobalScope *self);

jb_Promise SharedStorageWorkletGlobalScope_interestGroups(SharedStorageWorkletGlobalScope* self );

SharedStorageWorkletNavigator SharedStorageWorkletGlobalScope_navigator(const SharedStorageWorkletGlobalScope *self);

#ifdef __cplusplus
}
#endif
