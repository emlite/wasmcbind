#include <webcbind/DOMRectInit.h>

DEFINE_EMLITE_TYPE(DOMRectInit, em_Val);


double DOMRectInit_x(const DOMRectInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("x")));
}


void DOMRectInit_set_x(DOMRectInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


double DOMRectInit_y(const DOMRectInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("y")));
}


void DOMRectInit_set_y(DOMRectInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


double DOMRectInit_width(const DOMRectInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


void DOMRectInit_set_width(DOMRectInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


double DOMRectInit_height(const DOMRectInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


void DOMRectInit_set_height(DOMRectInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


DOMRectInit DOMRectInit_new() {
    em_Val obj = em_Val_object();
    return DOMRectInit_from_val(&obj);
}

