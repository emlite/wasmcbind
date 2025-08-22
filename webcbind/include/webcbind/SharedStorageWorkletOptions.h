#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WorkletOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SharedStorageWorkletOptions */
DECLARE_EMLITE_TYPE(SharedStorageWorkletOptions, WorkletOptions);

/** @brief Getter of the dataOrigin property */
jb_String SharedStorageWorkletOptions_dataOrigin(const SharedStorageWorkletOptions *self);

/** @brief Setter of the dataOrigin property */
void SharedStorageWorkletOptions_set_dataOrigin(SharedStorageWorkletOptions* self, jb_String * value);

/** @brief Constructor of the SharedStorageWorkletOptions dictionary type */
SharedStorageWorkletOptions SharedStorageWorkletOptions_new();

#ifdef __cplusplus
}
#endif
