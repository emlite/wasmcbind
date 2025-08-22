#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SharedStorageModifierMethodOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SharedStorageSetMethodOptions */
DECLARE_EMLITE_TYPE(SharedStorageSetMethodOptions, SharedStorageModifierMethodOptions);

/** @brief Getter of the ignoreIfPresent property */
bool SharedStorageSetMethodOptions_ignoreIfPresent(const SharedStorageSetMethodOptions *self);

/** @brief Setter of the ignoreIfPresent property */
void SharedStorageSetMethodOptions_set_ignoreIfPresent(SharedStorageSetMethodOptions* self, bool value);

/** @brief Constructor of the SharedStorageSetMethodOptions dictionary type */
SharedStorageSetMethodOptions SharedStorageSetMethodOptions_new();

#ifdef __cplusplus
}
#endif
