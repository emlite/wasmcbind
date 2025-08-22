#include <webcbind/AttributionConversionOptions.h>

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


AttributionLogicOptions AttributionConversionOptions_logicOptions(const AttributionConversionOptions *self) {
    return em_Val_as(AttributionLogicOptions, em_Val_get(em_Val_as_val(self->inner), em_Val_from("logicOptions")));
}


void AttributionConversionOptions_set_logicOptions(AttributionConversionOptions* self, AttributionLogicOptions * value) {
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


AttributionConversionOptions AttributionConversionOptions_new() {
    em_Val obj = em_Val_object();
    return AttributionConversionOptions_from_val(&obj);
}

