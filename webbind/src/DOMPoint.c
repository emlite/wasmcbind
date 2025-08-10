#include <webbind/DOMPoint.h>

#include <webbind/DOMPointInit.h>

DEFINE_EMLITE_TYPE(DOMPoint, DOMPointReadOnly);


DOMPoint DOMPoint_new0() {
        em_Val vv = em_Val_new(em_Val_global("DOMPoint") );
        return DOMPoint_from_val(&vv);
      }


DOMPoint DOMPoint_new1(double x) {
        em_Val vv = em_Val_new(em_Val_global("DOMPoint") , em_Val_from(x));
        return DOMPoint_from_val(&vv);
      }


DOMPoint DOMPoint_new2(double x, double y) {
        em_Val vv = em_Val_new(em_Val_global("DOMPoint") , em_Val_from(x), em_Val_from(y));
        return DOMPoint_from_val(&vv);
      }


DOMPoint DOMPoint_new3(double x, double y, double z) {
        em_Val vv = em_Val_new(em_Val_global("DOMPoint") , em_Val_from(x), em_Val_from(y), em_Val_from(z));
        return DOMPoint_from_val(&vv);
      }


DOMPoint DOMPoint_new4(double x, double y, double z, double w) {
        em_Val vv = em_Val_new(em_Val_global("DOMPoint") , em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(w));
        return DOMPoint_from_val(&vv);
      }


DOMPoint DOMPoint_fromPoint0(DOMPoint* self ) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_global("dompoint"), "fromPoint"));
}


DOMPoint DOMPoint_fromPoint1(DOMPoint* self , DOMPointInit * other) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_global("dompoint"), "fromPoint", em_Val_from(other)));
}


double DOMPoint_x(const DOMPoint *self) {
    return em_Val_as(double, em_Val_get(DOMPointReadOnly_as_val(self->inner), em_Val_from("x")));
}


void DOMPoint_set_x(DOMPoint* self, double value) {
    em_Val_set(DOMPointReadOnly_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


double DOMPoint_y(const DOMPoint *self) {
    return em_Val_as(double, em_Val_get(DOMPointReadOnly_as_val(self->inner), em_Val_from("y")));
}


void DOMPoint_set_y(DOMPoint* self, double value) {
    em_Val_set(DOMPointReadOnly_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


double DOMPoint_z(const DOMPoint *self) {
    return em_Val_as(double, em_Val_get(DOMPointReadOnly_as_val(self->inner), em_Val_from("z")));
}


void DOMPoint_set_z(DOMPoint* self, double value) {
    em_Val_set(DOMPointReadOnly_as_val(self->inner), em_Val_from("z"), em_Val_from(value));
}


double DOMPoint_w(const DOMPoint *self) {
    return em_Val_as(double, em_Val_get(DOMPointReadOnly_as_val(self->inner), em_Val_from("w")));
}


void DOMPoint_set_w(DOMPoint* self, double value) {
    em_Val_set(DOMPointReadOnly_as_val(self->inner), em_Val_from("w"), em_Val_from(value));
}

