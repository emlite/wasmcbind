#include <webbind/AttributionAggregationService.h>

DEFINE_EMLITE_TYPE(AttributionAggregationService, em_Val);


jb_String AttributionAggregationService_protocol(const AttributionAggregationService *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void AttributionAggregationService_set_protocol(AttributionAggregationService* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


AttributionAggregationService AttributionAggregationService_new() {
    em_Val obj = em_Val_object();
    return AttributionAggregationService_from_val(&obj);
}

