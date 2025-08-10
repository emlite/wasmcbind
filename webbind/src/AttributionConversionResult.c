#include <webbind/AttributionConversionResult.h>

DEFINE_EMLITE_TYPE(AttributionConversionResult, em_Val);


jb_Uint8Array AttributionConversionResult_report(const AttributionConversionResult *self) {
    return em_Val_as(jb_Uint8Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("report")));
}


void AttributionConversionResult_set_report(AttributionConversionResult* self, jb_Uint8Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("report"), em_Val_from(value));
}


AttributionConversionResult AttributionConversionResult_new() {
    em_Val obj = em_Val_object();
    return AttributionConversionResult_from_val(&obj);
}

