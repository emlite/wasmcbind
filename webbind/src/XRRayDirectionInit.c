#include <webbind/XRRayDirectionInit.h>

DEFINE_EMLITE_TYPE(XRRayDirectionInit, em_Val);


double XRRayDirectionInit_x(const XRRayDirectionInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("x")));
}


void XRRayDirectionInit_set_x(XRRayDirectionInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


double XRRayDirectionInit_y(const XRRayDirectionInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("y")));
}


void XRRayDirectionInit_set_y(XRRayDirectionInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


double XRRayDirectionInit_z(const XRRayDirectionInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("z")));
}


void XRRayDirectionInit_set_z(XRRayDirectionInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("z"), em_Val_from(value));
}


double XRRayDirectionInit_w(const XRRayDirectionInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("w")));
}


void XRRayDirectionInit_set_w(XRRayDirectionInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("w"), em_Val_from(value));
}


XRRayDirectionInit XRRayDirectionInit_new() {
    em_Val obj = em_Val_object();
    return XRRayDirectionInit_from_val(&obj);
}

