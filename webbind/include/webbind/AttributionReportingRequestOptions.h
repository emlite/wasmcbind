#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AttributionReportingRequestOptions, em_Val);

bool AttributionReportingRequestOptions_eventSourceEligible(const AttributionReportingRequestOptions *self);

void AttributionReportingRequestOptions_set_eventSourceEligible(AttributionReportingRequestOptions* self, bool value);

bool AttributionReportingRequestOptions_triggerEligible(const AttributionReportingRequestOptions *self);

void AttributionReportingRequestOptions_set_triggerEligible(AttributionReportingRequestOptions* self, bool value);

AttributionReportingRequestOptions AttributionReportingRequestOptions_new();

#ifdef __cplusplus
}
#endif
