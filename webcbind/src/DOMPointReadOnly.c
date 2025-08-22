#include <webcbind/DOMPointReadOnly.h>

#include <webcbind/DOMPointInit.h>
#include <webcbind/DOMPoint.h>
#include <webcbind/DOMMatrixInit.h>

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

