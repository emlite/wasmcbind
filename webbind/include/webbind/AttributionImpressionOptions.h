#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AttributionImpressionOptions, em_Val);

unsigned long AttributionImpressionOptions_histogramIndex(const AttributionImpressionOptions *self);

void AttributionImpressionOptions_set_histogramIndex(AttributionImpressionOptions* self, unsigned long value);

unsigned long AttributionImpressionOptions_matchValue(const AttributionImpressionOptions *self);

void AttributionImpressionOptions_set_matchValue(AttributionImpressionOptions* self, unsigned long value);

jb_Array AttributionImpressionOptions_conversionSites(const AttributionImpressionOptions *self);

void AttributionImpressionOptions_set_conversionSites(AttributionImpressionOptions* self, jb_Array * value);

jb_Array AttributionImpressionOptions_conversionCallers(const AttributionImpressionOptions *self);

void AttributionImpressionOptions_set_conversionCallers(AttributionImpressionOptions* self, jb_Array * value);

unsigned long AttributionImpressionOptions_lifetimeDays(const AttributionImpressionOptions *self);

void AttributionImpressionOptions_set_lifetimeDays(AttributionImpressionOptions* self, unsigned long value);

long AttributionImpressionOptions_priority(const AttributionImpressionOptions *self);

void AttributionImpressionOptions_set_priority(AttributionImpressionOptions* self, long value);

AttributionImpressionOptions AttributionImpressionOptions_new();

#ifdef __cplusplus
}
#endif
