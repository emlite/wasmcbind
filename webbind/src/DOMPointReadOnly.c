#include <webbind/DOMPointReadOnly.h>
#include <webbind/SVGGeometryElement.h>
#include <webbind/DOMPoint.h>


DEFINE_EMLITE_TYPE(DOMMatrixInit, em_Val);


double DOMMatrixInit_m13(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m13")));
}


void DOMMatrixInit_set_m13(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m13"), em_Val_from(value));
}


double DOMMatrixInit_m14(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m14")));
}


void DOMMatrixInit_set_m14(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m14"), em_Val_from(value));
}


double DOMMatrixInit_m23(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m23")));
}


void DOMMatrixInit_set_m23(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m23"), em_Val_from(value));
}


double DOMMatrixInit_m24(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m24")));
}


void DOMMatrixInit_set_m24(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m24"), em_Val_from(value));
}


double DOMMatrixInit_m31(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m31")));
}


void DOMMatrixInit_set_m31(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m31"), em_Val_from(value));
}


double DOMMatrixInit_m32(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m32")));
}


void DOMMatrixInit_set_m32(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m32"), em_Val_from(value));
}


double DOMMatrixInit_m33(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m33")));
}


void DOMMatrixInit_set_m33(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m33"), em_Val_from(value));
}


double DOMMatrixInit_m34(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m34")));
}


void DOMMatrixInit_set_m34(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m34"), em_Val_from(value));
}


double DOMMatrixInit_m43(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m43")));
}


void DOMMatrixInit_set_m43(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m43"), em_Val_from(value));
}


double DOMMatrixInit_m44(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("m44")));
}


void DOMMatrixInit_set_m44(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("m44"), em_Val_from(value));
}


bool DOMMatrixInit_is2D(const DOMMatrixInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("is2D")));
}


void DOMMatrixInit_set_is2D(DOMMatrixInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("is2D"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(DOMPointReadOnly, em_Val);


DOMPointReadOnly DOMPointReadOnly_new0() {
        em_Val vv = em_Val_new(em_Val_global("DOMPointReadOnly") );
        return DOMPointReadOnly_from_val(&vv);
      }


DOMPointReadOnly DOMPointReadOnly_new1(double x) {
        em_Val vv = em_Val_new(em_Val_global("DOMPointReadOnly") , em_Val_from(x));
        return DOMPointReadOnly_from_val(&vv);
      }


DOMPointReadOnly DOMPointReadOnly_new2(double x, double y) {
        em_Val vv = em_Val_new(em_Val_global("DOMPointReadOnly") , em_Val_from(x), em_Val_from(y));
        return DOMPointReadOnly_from_val(&vv);
      }


DOMPointReadOnly DOMPointReadOnly_new3(double x, double y, double z) {
        em_Val vv = em_Val_new(em_Val_global("DOMPointReadOnly") , em_Val_from(x), em_Val_from(y), em_Val_from(z));
        return DOMPointReadOnly_from_val(&vv);
      }


DOMPointReadOnly DOMPointReadOnly_new4(double x, double y, double z, double w) {
        em_Val vv = em_Val_new(em_Val_global("DOMPointReadOnly") , em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(w));
        return DOMPointReadOnly_from_val(&vv);
      }


DOMPointReadOnly DOMPointReadOnly_fromPoint0(DOMPointReadOnly* self ) {
    return em_Val_as(DOMPointReadOnly, em_Val_call(em_Val_global("dompointreadonly"), "fromPoint"));
}


DOMPointReadOnly DOMPointReadOnly_fromPoint1(DOMPointReadOnly* self , DOMPointInit * other) {
    return em_Val_as(DOMPointReadOnly, em_Val_call(em_Val_global("dompointreadonly"), "fromPoint", em_Val_from(other)));
}


double DOMPointReadOnly_x(const DOMPointReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("x")));
}


double DOMPointReadOnly_y(const DOMPointReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("y")));
}


double DOMPointReadOnly_z(const DOMPointReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("z")));
}


double DOMPointReadOnly_w(const DOMPointReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("w")));
}


DOMPoint DOMPointReadOnly_matrixTransform0(DOMPointReadOnly* self ) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_as_val(self->inner), "matrixTransform"));
}


DOMPoint DOMPointReadOnly_matrixTransform1(DOMPointReadOnly* self , DOMMatrixInit * matrix) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_as_val(self->inner), "matrixTransform", em_Val_from(matrix)));
}


jb_Object DOMPointReadOnly_toJSON(DOMPointReadOnly* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

