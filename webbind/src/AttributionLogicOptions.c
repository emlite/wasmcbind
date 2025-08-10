#include <webbind/AttributionLogicOptions.h>

DEFINE_EMLITE_TYPE(AttributionLogicOptions, em_Val);


jb_Array AttributionLogicOptions_credit(const AttributionLogicOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("credit")));
}


void AttributionLogicOptions_set_credit(AttributionLogicOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("credit"), em_Val_from(value));
}


AttributionLogicOptions AttributionLogicOptions_new() {
    em_Val obj = em_Val_object();
    return AttributionLogicOptions_from_val(&obj);
}

