#include <webbind/DOMPointInit.h>

DEFINE_EMLITE_TYPE(DOMPointInit, em_Val);


double DOMPointInit_x(const DOMPointInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("x")));
}


void DOMPointInit_set_x(DOMPointInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


double DOMPointInit_y(const DOMPointInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("y")));
}


void DOMPointInit_set_y(DOMPointInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


double DOMPointInit_z(const DOMPointInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("z")));
}


void DOMPointInit_set_z(DOMPointInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("z"), em_Val_from(value));
}


double DOMPointInit_w(const DOMPointInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("w")));
}


void DOMPointInit_set_w(DOMPointInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("w"), em_Val_from(value));
}


DOMPointInit DOMPointInit_new() {
    em_Val obj = em_Val_object();
    return DOMPointInit_from_val(&obj);
}

