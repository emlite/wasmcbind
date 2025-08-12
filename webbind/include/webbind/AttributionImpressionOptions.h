#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AttributionImpressionOptions */
DECLARE_EMLITE_TYPE(AttributionImpressionOptions, em_Val);

/** @brief Getter of the histogramIndex property */
unsigned long AttributionImpressionOptions_histogramIndex(const AttributionImpressionOptions *self);

/** @brief Setter of the histogramIndex property */
void AttributionImpressionOptions_set_histogramIndex(AttributionImpressionOptions* self, unsigned long value);

/** @brief Getter of the matchValue property */
unsigned long AttributionImpressionOptions_matchValue(const AttributionImpressionOptions *self);

/** @brief Setter of the matchValue property */
void AttributionImpressionOptions_set_matchValue(AttributionImpressionOptions* self, unsigned long value);

/** @brief Getter of the conversionSites property */
jb_Array AttributionImpressionOptions_conversionSites(const AttributionImpressionOptions *self);

/** @brief Setter of the conversionSites property */
void AttributionImpressionOptions_set_conversionSites(AttributionImpressionOptions* self, jb_Array * value);

/** @brief Getter of the conversionCallers property */
jb_Array AttributionImpressionOptions_conversionCallers(const AttributionImpressionOptions *self);

/** @brief Setter of the conversionCallers property */
void AttributionImpressionOptions_set_conversionCallers(AttributionImpressionOptions* self, jb_Array * value);

/** @brief Getter of the lifetimeDays property */
unsigned long AttributionImpressionOptions_lifetimeDays(const AttributionImpressionOptions *self);

/** @brief Setter of the lifetimeDays property */
void AttributionImpressionOptions_set_lifetimeDays(AttributionImpressionOptions* self, unsigned long value);

/** @brief Getter of the priority property */
long AttributionImpressionOptions_priority(const AttributionImpressionOptions *self);

/** @brief Setter of the priority property */
void AttributionImpressionOptions_set_priority(AttributionImpressionOptions* self, long value);

/** @brief Constructor of the AttributionImpressionOptions dictionary type */
AttributionImpressionOptions AttributionImpressionOptions_new();

#ifdef __cplusplus
}
#endif
