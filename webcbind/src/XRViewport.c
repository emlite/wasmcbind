#include <webcbind/XRViewport.h>

DEFINE_EMLITE_TYPE(XRViewport, em_Val);


long XRViewport_x(const XRViewport *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("x")));
}


long XRViewport_y(const XRViewport *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("y")));
}


long XRViewport_width(const XRViewport *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


long XRViewport_height(const XRViewport *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}

