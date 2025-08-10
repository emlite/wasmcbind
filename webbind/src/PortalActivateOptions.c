#include <webbind/PortalActivateOptions.h>

DEFINE_EMLITE_TYPE(PortalActivateOptions, StructuredSerializeOptions);


jb_Any PortalActivateOptions_data(const PortalActivateOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(StructuredSerializeOptions_as_val(self->inner), em_Val_from("data")));
}


void PortalActivateOptions_set_data(PortalActivateOptions* self, jb_Any * value) {
    em_Val_set(StructuredSerializeOptions_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


PortalActivateOptions PortalActivateOptions_new() {
    em_Val obj = em_Val_object();
    return PortalActivateOptions_from_val(&obj);
}

