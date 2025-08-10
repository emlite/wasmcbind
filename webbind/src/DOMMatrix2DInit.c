#include <webbind/DOMMatrix2DInit.h>

DEFINE_EMLITE_TYPE(DOMMatrix2DInit, em_Val);


double DOMMatrix2DInit_a(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("a")));
}


void DOMMatrix2DInit_set_a(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("a"), em_Val_from(value));
}


double DOMMatrix2DInit_b(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("b")));
}


void DOMMatrix2DInit_set_b(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("b"), em_Val_from(value));
}


double DOMMatrix2DInit_c(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("c")));
}


void DOMMatrix2DInit_set_c(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("c"), em_Val_from(value));
}


double DOMMatrix2DInit_d(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("d")));
}


void DOMMatrix2DInit_set_d(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("d"), em_Val_from(value));
}


double DOMMatrix2DInit_e(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("e")));
}


void DOMMatrix2DInit_set_e(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("e"), em_Val_from(value));
}


double DOMMatrix2DInit_f(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("f")));
}


void DOMMatrix2DInit_set_f(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("f"), em_Val_from(value));
}


double DOMMatrix2DInit_m11(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m11")));
}


void DOMMatrix2DInit_set_m11(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m11"), em_Val_from(value));
}


double DOMMatrix2DInit_m12(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m12")));
}


void DOMMatrix2DInit_set_m12(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m12"), em_Val_from(value));
}


double DOMMatrix2DInit_m21(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m21")));
}


void DOMMatrix2DInit_set_m21(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m21"), em_Val_from(value));
}


double DOMMatrix2DInit_m22(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m22")));
}


void DOMMatrix2DInit_set_m22(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m22"), em_Val_from(value));
}


double DOMMatrix2DInit_m41(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m41")));
}


void DOMMatrix2DInit_set_m41(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m41"), em_Val_from(value));
}


double DOMMatrix2DInit_m42(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m42")));
}


void DOMMatrix2DInit_set_m42(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m42"), em_Val_from(value));
}


DOMMatrix2DInit DOMMatrix2DInit_new() {
    em_Val obj = em_Val_object();
    return DOMMatrix2DInit_from_val(&obj);
}

