#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SharedStorageModifierMethodOptions */
DECLARE_EMLITE_TYPE(SharedStorageModifierMethodOptions, em_Val);

/** @brief Getter of the withLock property */
jb_String SharedStorageModifierMethodOptions_withLock(const SharedStorageModifierMethodOptions *self);

/** @brief Setter of the withLock property */
void SharedStorageModifierMethodOptions_set_withLock(SharedStorageModifierMethodOptions* self, jb_String * value);

/** @brief Constructor of the SharedStorageModifierMethodOptions dictionary type */
SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions_new();

#ifdef __cplusplus
}
#endif
