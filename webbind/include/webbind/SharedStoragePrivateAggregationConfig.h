#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SharedStoragePrivateAggregationConfig, em_Val);

jb_String SharedStoragePrivateAggregationConfig_aggregationCoordinatorOrigin(const SharedStoragePrivateAggregationConfig *self);

void SharedStoragePrivateAggregationConfig_set_aggregationCoordinatorOrigin(SharedStoragePrivateAggregationConfig* self, jb_String * value);

jb_String SharedStoragePrivateAggregationConfig_contextId(const SharedStoragePrivateAggregationConfig *self);

void SharedStoragePrivateAggregationConfig_set_contextId(SharedStoragePrivateAggregationConfig* self, jb_String * value);

long long SharedStoragePrivateAggregationConfig_filteringIdMaxBytes(const SharedStoragePrivateAggregationConfig *self);

void SharedStoragePrivateAggregationConfig_set_filteringIdMaxBytes(SharedStoragePrivateAggregationConfig* self, long long value);

long long SharedStoragePrivateAggregationConfig_maxContributions(const SharedStoragePrivateAggregationConfig *self);

void SharedStoragePrivateAggregationConfig_set_maxContributions(SharedStoragePrivateAggregationConfig* self, long long value);

SharedStoragePrivateAggregationConfig SharedStoragePrivateAggregationConfig_new();

#ifdef __cplusplus
}
#endif
