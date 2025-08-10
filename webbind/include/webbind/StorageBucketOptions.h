#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(StorageBucketOptions, em_Val);

bool StorageBucketOptions_persisted(const StorageBucketOptions *self);

void StorageBucketOptions_set_persisted(StorageBucketOptions* self, bool value);

long long StorageBucketOptions_quota(const StorageBucketOptions *self);

void StorageBucketOptions_set_quota(StorageBucketOptions* self, long long value);

jb_Any StorageBucketOptions_expires(const StorageBucketOptions *self);

void StorageBucketOptions_set_expires(StorageBucketOptions* self, jb_Any * value);

StorageBucketOptions StorageBucketOptions_new();

#ifdef __cplusplus
}
#endif
