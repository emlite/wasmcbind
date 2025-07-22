#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SharedStorageModifierMethod.h"
#include "enums.h"

typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;


typedef struct {
  SharedStorageModifierMethod inner;
} SharedStorageClearMethod;


DECLARE_EMLITE_TYPE(SharedStorageClearMethod, SharedStorageModifierMethod);

SharedStorageClearMethod SharedStorageClearMethod_new();

SharedStorageClearMethod SharedStorageClearMethod_new(const SharedStorageModifierMethodOptions* options);
