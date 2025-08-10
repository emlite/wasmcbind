#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AttributionLogicOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AttributionConversionOptions, em_Val);

jb_String AttributionConversionOptions_aggregationService(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_aggregationService(AttributionConversionOptions* self, jb_String * value);

double AttributionConversionOptions_epsilon(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_epsilon(AttributionConversionOptions* self, double value);

unsigned long AttributionConversionOptions_histogramSize(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_histogramSize(AttributionConversionOptions* self, unsigned long value);

unsigned long AttributionConversionOptions_lookbackDays(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_lookbackDays(AttributionConversionOptions* self, unsigned long value);

jb_Array AttributionConversionOptions_matchValues(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_matchValues(AttributionConversionOptions* self, jb_Array * value);

jb_Array AttributionConversionOptions_impressionSites(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_impressionSites(AttributionConversionOptions* self, jb_Array * value);

jb_Array AttributionConversionOptions_impressionCallers(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_impressionCallers(AttributionConversionOptions* self, jb_Array * value);

AttributionLogic AttributionConversionOptions_logic(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_logic(AttributionConversionOptions* self, AttributionLogic * value);

AttributionLogicOptions AttributionConversionOptions_logicOptions(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_logicOptions(AttributionConversionOptions* self, AttributionLogicOptions * value);

unsigned long AttributionConversionOptions_value(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_value(AttributionConversionOptions* self, unsigned long value);

unsigned long AttributionConversionOptions_maxValue(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_maxValue(AttributionConversionOptions* self, unsigned long value);

AttributionConversionOptions AttributionConversionOptions_new();

#ifdef __cplusplus
}
#endif
