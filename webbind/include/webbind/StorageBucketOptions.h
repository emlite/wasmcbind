#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type StorageBucketOptions */
DECLARE_EMLITE_TYPE(StorageBucketOptions, em_Val);

/** @brief Getter of the persisted property */
bool StorageBucketOptions_persisted(const StorageBucketOptions *self);

/** @brief Setter of the persisted property */
void StorageBucketOptions_set_persisted(StorageBucketOptions* self, bool value);

/** @brief Getter of the quota property */
long long StorageBucketOptions_quota(const StorageBucketOptions *self);

/** @brief Setter of the quota property */
void StorageBucketOptions_set_quota(StorageBucketOptions* self, long long value);

/** @brief Getter of the expires property */
jb_Any StorageBucketOptions_expires(const StorageBucketOptions *self);

/** @brief Setter of the expires property */
void StorageBucketOptions_set_expires(StorageBucketOptions* self, jb_Any * value);

/** @brief Constructor of the StorageBucketOptions dictionary type */
StorageBucketOptions StorageBucketOptions_new();

#ifdef __cplusplus
}
#endif
