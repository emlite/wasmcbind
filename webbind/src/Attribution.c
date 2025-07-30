#include <webbind/Attribution.h>
#include <webbind/AttributionAggregationServices.h>


DEFINE_EMLITE_TYPE(AttributionImpressionResult, em_Val);

DEFINE_EMLITE_TYPE(AttributionImpressionOptions, em_Val);


unsigned long AttributionImpressionOptions_histogramIndex(const AttributionImpressionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("histogramIndex")));
}


void AttributionImpressionOptions_set_histogramIndex(AttributionImpressionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("histogramIndex"), em_Val_from(value));
}


unsigned long AttributionImpressionOptions_matchValue(const AttributionImpressionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("matchValue")));
}


void AttributionImpressionOptions_set_matchValue(AttributionImpressionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("matchValue"), em_Val_from(value));
}


jb_Array AttributionImpressionOptions_conversionSites(const AttributionImpressionOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("conversionSites")));
}


void AttributionImpressionOptions_set_conversionSites(AttributionImpressionOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("conversionSites"), em_Val_from(value));
}


jb_Array AttributionImpressionOptions_conversionCallers(const AttributionImpressionOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("conversionCallers")));
}


void AttributionImpressionOptions_set_conversionCallers(AttributionImpressionOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("conversionCallers"), em_Val_from(value));
}


unsigned long AttributionImpressionOptions_lifetimeDays(const AttributionImpressionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lifetimeDays")));
}


void AttributionImpressionOptions_set_lifetimeDays(AttributionImpressionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lifetimeDays"), em_Val_from(value));
}


long AttributionImpressionOptions_priority(const AttributionImpressionOptions *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("priority")));
}


void AttributionImpressionOptions_set_priority(AttributionImpressionOptions* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("priority"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AttributionConversionResult, em_Val);


jb_Uint8Array AttributionConversionResult_report(const AttributionConversionResult *self) {
    return em_Val_as(jb_Uint8Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("report")));
}


void AttributionConversionResult_set_report(AttributionConversionResult* self, jb_Uint8Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("report"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AttributionConversionOptions, em_Val);


jb_String AttributionConversionOptions_aggregationService(const AttributionConversionOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("aggregationService")));
}


void AttributionConversionOptions_set_aggregationService(AttributionConversionOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("aggregationService"), em_Val_from(value));
}


double AttributionConversionOptions_epsilon(const AttributionConversionOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("epsilon")));
}


void AttributionConversionOptions_set_epsilon(AttributionConversionOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("epsilon"), em_Val_from(value));
}


unsigned long AttributionConversionOptions_histogramSize(const AttributionConversionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("histogramSize")));
}


void AttributionConversionOptions_set_histogramSize(AttributionConversionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("histogramSize"), em_Val_from(value));
}


unsigned long AttributionConversionOptions_lookbackDays(const AttributionConversionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lookbackDays")));
}


void AttributionConversionOptions_set_lookbackDays(AttributionConversionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lookbackDays"), em_Val_from(value));
}


jb_Array AttributionConversionOptions_matchValues(const AttributionConversionOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("matchValues")));
}


void AttributionConversionOptions_set_matchValues(AttributionConversionOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("matchValues"), em_Val_from(value));
}


jb_Array AttributionConversionOptions_impressionSites(const AttributionConversionOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("impressionSites")));
}


void AttributionConversionOptions_set_impressionSites(AttributionConversionOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("impressionSites"), em_Val_from(value));
}


jb_Array AttributionConversionOptions_impressionCallers(const AttributionConversionOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("impressionCallers")));
}


void AttributionConversionOptions_set_impressionCallers(AttributionConversionOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("impressionCallers"), em_Val_from(value));
}


AttributionLogic AttributionConversionOptions_logic(const AttributionConversionOptions *self) {
    return em_Val_as(AttributionLogic, em_Val_get(em_Val_as_val(self->inner), em_Val_from("logic")));
}


void AttributionConversionOptions_set_logic(AttributionConversionOptions* self, AttributionLogic * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("logic"), em_Val_from(value));
}


jb_Any AttributionConversionOptions_logicOptions(const AttributionConversionOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("logicOptions")));
}


void AttributionConversionOptions_set_logicOptions(AttributionConversionOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("logicOptions"), em_Val_from(value));
}


unsigned long AttributionConversionOptions_value(const AttributionConversionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void AttributionConversionOptions_set_value(AttributionConversionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


unsigned long AttributionConversionOptions_maxValue(const AttributionConversionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxValue")));
}


void AttributionConversionOptions_set_maxValue(AttributionConversionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxValue"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Attribution, em_Val);


AttributionAggregationServices Attribution_aggregationServices(const Attribution *self) {
    return em_Val_as(AttributionAggregationServices, em_Val_get(em_Val_as_val(self->inner), em_Val_from("aggregationServices")));
}


jb_Promise Attribution_saveImpression(Attribution* self , AttributionImpressionOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "saveImpression", em_Val_from(options)));
}


jb_Promise Attribution_measureConversion(Attribution* self , AttributionConversionOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureConversion", em_Val_from(options)));
}

