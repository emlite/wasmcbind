#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(StorageEstimate, em_Val);

long long StorageEstimate_usage(const StorageEstimate *self);

void StorageEstimate_set_usage(StorageEstimate* self, long long value);

long long StorageEstimate_quota(const StorageEstimate *self);

void StorageEstimate_set_quota(StorageEstimate* self, long long value);

StorageEstimate StorageEstimate_new();

#ifdef __cplusplus
}
#endif
