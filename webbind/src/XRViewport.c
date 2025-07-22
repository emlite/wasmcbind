#include <webbind/XRViewport.h>


DEFINE_EMLITE_TYPE(XRViewport, em_Val);


long XRViewport_x(const XRViewport *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "x"));
}


long XRViewport_y(const XRViewport *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "y"));
}


long XRViewport_width(const XRViewport *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "width"));
}


long XRViewport_height(const XRViewport *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "height"));
}

