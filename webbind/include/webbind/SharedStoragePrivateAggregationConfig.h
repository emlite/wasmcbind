#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SharedStoragePrivateAggregationConfig */
DECLARE_EMLITE_TYPE(SharedStoragePrivateAggregationConfig, em_Val);

/** @brief Getter of the aggregationCoordinatorOrigin property */
jb_String SharedStoragePrivateAggregationConfig_aggregationCoordinatorOrigin(const SharedStoragePrivateAggregationConfig *self);

/** @brief Setter of the aggregationCoordinatorOrigin property */
void SharedStoragePrivateAggregationConfig_set_aggregationCoordinatorOrigin(SharedStoragePrivateAggregationConfig* self, jb_String * value);

/** @brief Getter of the contextId property */
jb_String SharedStoragePrivateAggregationConfig_contextId(const SharedStoragePrivateAggregationConfig *self);

/** @brief Setter of the contextId property */
void SharedStoragePrivateAggregationConfig_set_contextId(SharedStoragePrivateAggregationConfig* self, jb_String * value);

/** @brief Getter of the filteringIdMaxBytes property */
long long SharedStoragePrivateAggregationConfig_filteringIdMaxBytes(const SharedStoragePrivateAggregationConfig *self);

/** @brief Setter of the filteringIdMaxBytes property */
void SharedStoragePrivateAggregationConfig_set_filteringIdMaxBytes(SharedStoragePrivateAggregationConfig* self, long long value);

/** @brief Getter of the maxContributions property */
long long SharedStoragePrivateAggregationConfig_maxContributions(const SharedStoragePrivateAggregationConfig *self);

/** @brief Setter of the maxContributions property */
void SharedStoragePrivateAggregationConfig_set_maxContributions(SharedStoragePrivateAggregationConfig* self, long long value);

/** @brief Constructor of the SharedStoragePrivateAggregationConfig dictionary type */
SharedStoragePrivateAggregationConfig SharedStoragePrivateAggregationConfig_new();

#ifdef __cplusplus
}
#endif
