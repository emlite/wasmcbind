#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AttributionLogicOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AttributionConversionOptions */
DECLARE_EMLITE_TYPE(AttributionConversionOptions, em_Val);

/** @brief Getter of the aggregationService property */
jb_String AttributionConversionOptions_aggregationService(const AttributionConversionOptions *self);

/** @brief Setter of the aggregationService property */
void AttributionConversionOptions_set_aggregationService(AttributionConversionOptions* self, jb_String * value);

/** @brief Getter of the epsilon property */
double AttributionConversionOptions_epsilon(const AttributionConversionOptions *self);

/** @brief Setter of the epsilon property */
void AttributionConversionOptions_set_epsilon(AttributionConversionOptions* self, double value);

/** @brief Getter of the histogramSize property */
unsigned long AttributionConversionOptions_histogramSize(const AttributionConversionOptions *self);

/** @brief Setter of the histogramSize property */
void AttributionConversionOptions_set_histogramSize(AttributionConversionOptions* self, unsigned long value);

/** @brief Getter of the lookbackDays property */
unsigned long AttributionConversionOptions_lookbackDays(const AttributionConversionOptions *self);

/** @brief Setter of the lookbackDays property */
void AttributionConversionOptions_set_lookbackDays(AttributionConversionOptions* self, unsigned long value);

/** @brief Getter of the matchValues property */
jb_Array AttributionConversionOptions_matchValues(const AttributionConversionOptions *self);

/** @brief Setter of the matchValues property */
void AttributionConversionOptions_set_matchValues(AttributionConversionOptions* self, jb_Array * value);

/** @brief Getter of the impressionSites property */
jb_Array AttributionConversionOptions_impressionSites(const AttributionConversionOptions *self);

/** @brief Setter of the impressionSites property */
void AttributionConversionOptions_set_impressionSites(AttributionConversionOptions* self, jb_Array * value);

/** @brief Getter of the impressionCallers property */
jb_Array AttributionConversionOptions_impressionCallers(const AttributionConversionOptions *self);

/** @brief Setter of the impressionCallers property */
void AttributionConversionOptions_set_impressionCallers(AttributionConversionOptions* self, jb_Array * value);

/** @brief Getter of the logic property */
AttributionLogic AttributionConversionOptions_logic(const AttributionConversionOptions *self);

/** @brief Setter of the logic property */
void AttributionConversionOptions_set_logic(AttributionConversionOptions* self, AttributionLogic * value);

/** @brief Getter of the logicOptions property */
AttributionLogicOptions AttributionConversionOptions_logicOptions(const AttributionConversionOptions *self);

/** @brief Setter of the logicOptions property */
void AttributionConversionOptions_set_logicOptions(AttributionConversionOptions* self, AttributionLogicOptions * value);

/** @brief Getter of the value property */
unsigned long AttributionConversionOptions_value(const AttributionConversionOptions *self);

/** @brief Setter of the value property */
void AttributionConversionOptions_set_value(AttributionConversionOptions* self, unsigned long value);

/** @brief Getter of the maxValue property */
unsigned long AttributionConversionOptions_maxValue(const AttributionConversionOptions *self);

/** @brief Setter of the maxValue property */
void AttributionConversionOptions_set_maxValue(AttributionConversionOptions* self, unsigned long value);

/** @brief Constructor of the AttributionConversionOptions dictionary type */
AttributionConversionOptions AttributionConversionOptions_new();

#ifdef __cplusplus
}
#endif
