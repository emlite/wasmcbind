#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkletOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SharedStorageWorkletOptions, WorkletOptions);

jb_String SharedStorageWorkletOptions_dataOrigin(const SharedStorageWorkletOptions *self);

void SharedStorageWorkletOptions_set_dataOrigin(SharedStorageWorkletOptions* self, jb_String * value);

SharedStorageWorkletOptions SharedStorageWorkletOptions_new();

#ifdef __cplusplus
}
#endif
