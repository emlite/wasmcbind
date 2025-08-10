#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SharedStorageModifierMethod.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;

DECLARE_EMLITE_TYPE(SharedStorageClearMethod, SharedStorageModifierMethod);

SharedStorageClearMethod SharedStorageClearMethod_new0();

SharedStorageClearMethod SharedStorageClearMethod_new1(SharedStorageModifierMethodOptions * options);

#ifdef __cplusplus
}
#endif
