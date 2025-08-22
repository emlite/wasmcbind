#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ProtectedAudiencePrivateAggregationConfig */
DECLARE_EMLITE_TYPE(ProtectedAudiencePrivateAggregationConfig, em_Val);

/** @brief Getter of the aggregationCoordinatorOrigin property */
jb_String ProtectedAudiencePrivateAggregationConfig_aggregationCoordinatorOrigin(const ProtectedAudiencePrivateAggregationConfig *self);

/** @brief Setter of the aggregationCoordinatorOrigin property */
void ProtectedAudiencePrivateAggregationConfig_set_aggregationCoordinatorOrigin(ProtectedAudiencePrivateAggregationConfig* self, jb_String * value);

/** @brief Constructor of the ProtectedAudiencePrivateAggregationConfig dictionary type */
ProtectedAudiencePrivateAggregationConfig ProtectedAudiencePrivateAggregationConfig_new();

#ifdef __cplusplus
}
#endif
