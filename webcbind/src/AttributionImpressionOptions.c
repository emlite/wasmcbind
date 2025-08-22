#include <webcbind/AttributionImpressionOptions.h>

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


AttributionImpressionOptions AttributionImpressionOptions_new() {
    em_Val obj = em_Val_object();
    return AttributionImpressionOptions_from_val(&obj);
}

