#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type StorageEstimate */
DECLARE_EMLITE_TYPE(StorageEstimate, em_Val);

/** @brief Getter of the usage property */
long long StorageEstimate_usage(const StorageEstimate *self);

/** @brief Setter of the usage property */
void StorageEstimate_set_usage(StorageEstimate* self, long long value);

/** @brief Getter of the quota property */
long long StorageEstimate_quota(const StorageEstimate *self);

/** @brief Setter of the quota property */
void StorageEstimate_set_quota(StorageEstimate* self, long long value);

/** @brief Constructor of the StorageEstimate dictionary type */
StorageEstimate StorageEstimate_new();

#ifdef __cplusplus
}
#endif
