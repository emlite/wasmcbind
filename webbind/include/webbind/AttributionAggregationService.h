#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AttributionAggregationService, em_Val);

jb_String AttributionAggregationService_protocol(const AttributionAggregationService *self);

void AttributionAggregationService_set_protocol(AttributionAggregationService* self, jb_String * value);

AttributionAggregationService AttributionAggregationService_new();

#ifdef __cplusplus
}
#endif
