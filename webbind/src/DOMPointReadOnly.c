#include <webbind/DOMPointReadOnly.h>
#include <webbind/SVGGeometryElement.h>
#include <webbind/DOMPoint.h>


DEFINE_EMLITE_TYPE(DOMMatrixInit, em_Val);


double DOMMatrixInit_m13(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m13"));
}


void DOMMatrixInit_set_m13(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m13", value);
}


double DOMMatrixInit_m14(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m14"));
}


void DOMMatrixInit_set_m14(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m14", value);
}


double DOMMatrixInit_m23(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m23"));
}


void DOMMatrixInit_set_m23(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m23", value);
}


double DOMMatrixInit_m24(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m24"));
}


void DOMMatrixInit_set_m24(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m24", value);
}


double DOMMatrixInit_m31(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m31"));
}


void DOMMatrixInit_set_m31(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m31", value);
}


double DOMMatrixInit_m32(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m32"));
}


void DOMMatrixInit_set_m32(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m32", value);
}


double DOMMatrixInit_m33(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m33"));
}


void DOMMatrixInit_set_m33(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m33", value);
}


double DOMMatrixInit_m34(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m34"));
}


void DOMMatrixInit_set_m34(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m34", value);
}


double DOMMatrixInit_m43(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m43"));
}


void DOMMatrixInit_set_m43(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m43", value);
}


double DOMMatrixInit_m44(const DOMMatrixInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m44"));
}


void DOMMatrixInit_set_m44(DOMMatrixInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m44", value);
}


bool DOMMatrixInit_is2D(const DOMMatrixInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "is2D"));
}


void DOMMatrixInit_set_is2D(DOMMatrixInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "is2D", value);
}

DEFINE_EMLITE_TYPE(DOMPointReadOnly, em_Val);


DOMPointReadOnly DOMPointReadOnly_new() : em_Val(em_Val_global("DOMPointReadOnly").new_()) {
        return DOMPointReadOnly(em_Val_new(em_Val_global("DOMPointReadOnly", ));
      }


DOMPointReadOnly DOMPointReadOnly_new(double x) : em_Val(em_Val_global("DOMPointReadOnly").new_(em_Val_from(x))) {
        return DOMPointReadOnly(em_Val_new(em_Val_global("DOMPointReadOnly", em_Val_from(x)));
      }


DOMPointReadOnly DOMPointReadOnly_new(double x, double y) : em_Val(em_Val_global("DOMPointReadOnly").new_(em_Val_from(x), em_Val_from(y))) {
        return DOMPointReadOnly(em_Val_new(em_Val_global("DOMPointReadOnly", em_Val_from(x), em_Val_from(y)));
      }


DOMPointReadOnly DOMPointReadOnly_new(double x, double y, double z) : em_Val(em_Val_global("DOMPointReadOnly").new_(em_Val_from(x), em_Val_from(y), em_Val_from(z))) {
        return DOMPointReadOnly(em_Val_new(em_Val_global("DOMPointReadOnly", em_Val_from(x), em_Val_from(y), em_Val_from(z)));
      }


DOMPointReadOnly DOMPointReadOnly_new(double x, double y, double z, double w) : em_Val(em_Val_global("DOMPointReadOnly").new_(em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(w))) {
        return DOMPointReadOnly(em_Val_new(em_Val_global("DOMPointReadOnly", em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(w)));
      }


DOMPointReadOnly DOMPointReadOnly_fromPoint(DOMPointReadOnly* self ) {
    return em_Val_as(DOMPointReadOnly, em_Val_call(em_Val_global("dompointreadonly"), "fromPoint"));
}


DOMPointReadOnly DOMPointReadOnly_fromPoint(DOMPointReadOnly* self , const DOMPointInit* other) {
    return em_Val_as(DOMPointReadOnly, em_Val_call(em_Val_global("dompointreadonly"), "fromPoint", em_Val_from(other)));
}


double DOMPointReadOnly_x(const DOMPointReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "x"));
}


double DOMPointReadOnly_y(const DOMPointReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "y"));
}


double DOMPointReadOnly_z(const DOMPointReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "z"));
}


double DOMPointReadOnly_w(const DOMPointReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "w"));
}


DOMPoint DOMPointReadOnly_matrixTransform(DOMPointReadOnly* self ) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_as_val(self->inner), "matrixTransform"));
}


DOMPoint DOMPointReadOnly_matrixTransform(DOMPointReadOnly* self , const DOMMatrixInit* matrix) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_as_val(self->inner), "matrixTransform", em_Val_from(matrix)));
}


jb_Object DOMPointReadOnly_toJSON(DOMPointReadOnly* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

