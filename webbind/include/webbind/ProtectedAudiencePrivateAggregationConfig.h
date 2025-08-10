#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ProtectedAudiencePrivateAggregationConfig, em_Val);

jb_String ProtectedAudiencePrivateAggregationConfig_aggregationCoordinatorOrigin(const ProtectedAudiencePrivateAggregationConfig *self);

void ProtectedAudiencePrivateAggregationConfig_set_aggregationCoordinatorOrigin(ProtectedAudiencePrivateAggregationConfig* self, jb_String * value);

ProtectedAudiencePrivateAggregationConfig ProtectedAudiencePrivateAggregationConfig_new();

#ifdef __cplusplus
}
#endif
