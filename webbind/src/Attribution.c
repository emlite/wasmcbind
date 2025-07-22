#include <webbind/Attribution.h>
#include <webbind/AttributionAggregationServices.h>


DEFINE_EMLITE_TYPE(AttributionImpressionResult, em_Val);

DEFINE_EMLITE_TYPE(AttributionImpressionOptions, em_Val);


unsigned long AttributionImpressionOptions_histogramIndex(const AttributionImpressionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "histogramIndex"));
}


void AttributionImpressionOptions_set_histogramIndex(AttributionImpressionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "histogramIndex", value);
}


unsigned long AttributionImpressionOptions_matchValue(const AttributionImpressionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "matchValue"));
}


void AttributionImpressionOptions_set_matchValue(AttributionImpressionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "matchValue", value);
}


jb_Sequence AttributionImpressionOptions_conversionSites(const AttributionImpressionOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "conversionSites"));
}


void AttributionImpressionOptions_set_conversionSites(AttributionImpressionOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "conversionSites", value);
}


jb_Sequence AttributionImpressionOptions_conversionCallers(const AttributionImpressionOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "conversionCallers"));
}


void AttributionImpressionOptions_set_conversionCallers(AttributionImpressionOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "conversionCallers", value);
}


unsigned long AttributionImpressionOptions_lifetimeDays(const AttributionImpressionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "lifetimeDays"));
}


void AttributionImpressionOptions_set_lifetimeDays(AttributionImpressionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "lifetimeDays", value);
}


long AttributionImpressionOptions_priority(const AttributionImpressionOptions *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "priority"));
}


void AttributionImpressionOptions_set_priority(AttributionImpressionOptions* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "priority", value);
}

DEFINE_EMLITE_TYPE(AttributionConversionResult, em_Val);


jb_Uint8Array AttributionConversionResult_report(const AttributionConversionResult *self) {
    return em_Val_as(jb_Uint8Array, em_Val_get(em_Val_as_val(self->inner), "report"));
}


void AttributionConversionResult_set_report(AttributionConversionResult* self, const jb_Uint8Array* value) {
    em_Val_set(em_Val_as_val(self->inner), "report", value);
}

DEFINE_EMLITE_TYPE(AttributionConversionOptions, em_Val);


jb_USVString AttributionConversionOptions_aggregationService(const AttributionConversionOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "aggregationService"));
}


void AttributionConversionOptions_set_aggregationService(AttributionConversionOptions* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "aggregationService", value);
}


double AttributionConversionOptions_epsilon(const AttributionConversionOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "epsilon"));
}


void AttributionConversionOptions_set_epsilon(AttributionConversionOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "epsilon", value);
}


unsigned long AttributionConversionOptions_histogramSize(const AttributionConversionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "histogramSize"));
}


void AttributionConversionOptions_set_histogramSize(AttributionConversionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "histogramSize", value);
}


unsigned long AttributionConversionOptions_lookbackDays(const AttributionConversionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "lookbackDays"));
}


void AttributionConversionOptions_set_lookbackDays(AttributionConversionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "lookbackDays", value);
}


jb_Sequence AttributionConversionOptions_matchValues(const AttributionConversionOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "matchValues"));
}


void AttributionConversionOptions_set_matchValues(AttributionConversionOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "matchValues", value);
}


jb_Sequence AttributionConversionOptions_impressionSites(const AttributionConversionOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "impressionSites"));
}


void AttributionConversionOptions_set_impressionSites(AttributionConversionOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "impressionSites", value);
}


jb_Sequence AttributionConversionOptions_impressionCallers(const AttributionConversionOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "impressionCallers"));
}


void AttributionConversionOptions_set_impressionCallers(AttributionConversionOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "impressionCallers", value);
}


AttributionLogic AttributionConversionOptions_logic(const AttributionConversionOptions *self) {
    return em_Val_as(AttributionLogic, em_Val_get(em_Val_as_val(self->inner), "logic"));
}


void AttributionConversionOptions_set_logic(AttributionConversionOptions* self, const AttributionLogic* value) {
    em_Val_set(em_Val_as_val(self->inner), "logic", value);
}


AttributionLogicOptions AttributionConversionOptions_logicOptions(const AttributionConversionOptions *self) {
    return em_Val_as(AttributionLogicOptions, em_Val_get(em_Val_as_val(self->inner), "logicOptions"));
}


void AttributionConversionOptions_set_logicOptions(AttributionConversionOptions* self, const AttributionLogicOptions* value) {
    em_Val_set(em_Val_as_val(self->inner), "logicOptions", value);
}


unsigned long AttributionConversionOptions_value(const AttributionConversionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "value"));
}


void AttributionConversionOptions_set_value(AttributionConversionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "value", value);
}


unsigned long AttributionConversionOptions_maxValue(const AttributionConversionOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "maxValue"));
}


void AttributionConversionOptions_set_maxValue(AttributionConversionOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "maxValue", value);
}

DEFINE_EMLITE_TYPE(Attribution, em_Val);


AttributionAggregationServices Attribution_aggregationServices(const Attribution *self) {
    return em_Val_as(AttributionAggregationServices, em_Val_get(em_Val_as_val(self->inner), "aggregationServices"));
}


jb_Promise Attribution_saveImpression(Attribution* self , const AttributionImpressionOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "saveImpression", em_Val_from(options)));
}


jb_Promise Attribution_measureConversion(Attribution* self , const AttributionConversionOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureConversion", em_Val_from(options)));
}

