#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SharedStorageModifierMethodOptions, em_Val);

jb_String SharedStorageModifierMethodOptions_withLock(const SharedStorageModifierMethodOptions *self);

void SharedStorageModifierMethodOptions_set_withLock(SharedStorageModifierMethodOptions* self, jb_String * value);

SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions_new();

#ifdef __cplusplus
}
#endif
