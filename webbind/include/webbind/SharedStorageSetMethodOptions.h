#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SharedStorageModifierMethodOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SharedStorageSetMethodOptions, SharedStorageModifierMethodOptions);

bool SharedStorageSetMethodOptions_ignoreIfPresent(const SharedStorageSetMethodOptions *self);

void SharedStorageSetMethodOptions_set_ignoreIfPresent(SharedStorageSetMethodOptions* self, bool value);

SharedStorageSetMethodOptions SharedStorageSetMethodOptions_new();

#ifdef __cplusplus
}
#endif
