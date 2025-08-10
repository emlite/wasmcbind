#include <webbind/XRCamera.h>

DEFINE_EMLITE_TYPE(XRCamera, em_Val);


unsigned long XRCamera_width(const XRCamera *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


unsigned long XRCamera_height(const XRCamera *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}

