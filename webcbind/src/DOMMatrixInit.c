#include <webcbind/DOMMatrixInit.h>

DEFINE_EMLITE_TYPE(DOMMatrixInit, DOMMatrix2DInit);


double DOMMatrixInit_m13(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m13")));
}


void DOMMatrixInit_set_m13(DOMMatrixInit* self, double value) {
    em_Val_set(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m13"), em_Val_from(value));
}


double DOMMatrixInit_m14(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m14")));
}


void DOMMatrixInit_set_m14(DOMMatrixInit* self, double value) {
    em_Val_set(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m14"), em_Val_from(value));
}


double DOMMatrixInit_m23(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m23")));
}


void DOMMatrixInit_set_m23(DOMMatrixInit* self, double value) {
    em_Val_set(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m23"), em_Val_from(value));
}


double DOMMatrixInit_m24(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m24")));
}


void DOMMatrixInit_set_m24(DOMMatrixInit* self, double value) {
    em_Val_set(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m24"), em_Val_from(value));
}


double DOMMatrixInit_m31(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m31")));
}


void DOMMatrixInit_set_m31(DOMMatrixInit* self, double value) {
    em_Val_set(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m31"), em_Val_from(value));
}


double DOMMatrixInit_m32(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m32")));
}


void DOMMatrixInit_set_m32(DOMMatrixInit* self, double value) {
    em_Val_set(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m32"), em_Val_from(value));
}


double DOMMatrixInit_m33(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m33")));
}


void DOMMatrixInit_set_m33(DOMMatrixInit* self, double value) {
    em_Val_set(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m33"), em_Val_from(value));
}


double DOMMatrixInit_m34(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m34")));
}


void DOMMatrixInit_set_m34(DOMMatrixInit* self, double value) {
    em_Val_set(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m34"), em_Val_from(value));
}


double DOMMatrixInit_m43(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m43")));
}


void DOMMatrixInit_set_m43(DOMMatrixInit* self, double value) {
    em_Val_set(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m43"), em_Val_from(value));
}


double DOMMatrixInit_m44(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m44")));
}


void DOMMatrixInit_set_m44(DOMMatrixInit* self, double value) {
    em_Val_set(DOMMatrix2DInit_as_val(self->inner), em_Val_from("m44"), em_Val_from(value));
}


bool DOMMatrixInit_is2D(const DOMMatrixInit *self) {
    return em_Val_as(bool, em_Val_get(DOMMatrix2DInit_as_val(self->inner), em_Val_from("is2D")));
}


void DOMMatrixInit_set_is2D(DOMMatrixInit* self, bool value) {
    em_Val_set(DOMMatrix2DInit_as_val(self->inner), em_Val_from("is2D"), em_Val_from(value));
}


DOMMatrixInit DOMMatrixInit_new() {
    em_Val obj = em_Val_object();
    return DOMMatrixInit_from_val(&obj);
}

