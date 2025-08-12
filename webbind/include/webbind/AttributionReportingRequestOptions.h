#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AttributionReportingRequestOptions */
DECLARE_EMLITE_TYPE(AttributionReportingRequestOptions, em_Val);

/** @brief Getter of the eventSourceEligible property */
bool AttributionReportingRequestOptions_eventSourceEligible(const AttributionReportingRequestOptions *self);

/** @brief Setter of the eventSourceEligible property */
void AttributionReportingRequestOptions_set_eventSourceEligible(AttributionReportingRequestOptions* self, bool value);

/** @brief Getter of the triggerEligible property */
bool AttributionReportingRequestOptions_triggerEligible(const AttributionReportingRequestOptions *self);

/** @brief Setter of the triggerEligible property */
void AttributionReportingRequestOptions_set_triggerEligible(AttributionReportingRequestOptions* self, bool value);

/** @brief Constructor of the AttributionReportingRequestOptions dictionary type */
AttributionReportingRequestOptions AttributionReportingRequestOptions_new();

#ifdef __cplusplus
}
#endif
