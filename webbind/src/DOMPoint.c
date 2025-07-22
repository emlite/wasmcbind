#include <webbind/DOMPoint.h>
#include <webbind/SVGGeometryElement.h>


DEFINE_EMLITE_TYPE(DOMPoint, DOMPointReadOnly);


DOMPoint DOMPoint_new() : DOMPointReadOnly(em_Val_global("DOMPoint").new_()) {
        return DOMPoint(em_Val_new(em_Val_global("DOMPoint", ));
      }


DOMPoint DOMPoint_new(double x) : DOMPointReadOnly(em_Val_global("DOMPoint").new_(em_Val_from(x))) {
        return DOMPoint(em_Val_new(em_Val_global("DOMPoint", em_Val_from(x)));
      }


DOMPoint DOMPoint_new(double x, double y) : DOMPointReadOnly(em_Val_global("DOMPoint").new_(em_Val_from(x), em_Val_from(y))) {
        return DOMPoint(em_Val_new(em_Val_global("DOMPoint", em_Val_from(x), em_Val_from(y)));
      }


DOMPoint DOMPoint_new(double x, double y, double z) : DOMPointReadOnly(em_Val_global("DOMPoint").new_(em_Val_from(x), em_Val_from(y), em_Val_from(z))) {
        return DOMPoint(em_Val_new(em_Val_global("DOMPoint", em_Val_from(x), em_Val_from(y), em_Val_from(z)));
      }


DOMPoint DOMPoint_new(double x, double y, double z, double w) : DOMPointReadOnly(em_Val_global("DOMPoint").new_(em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(w))) {
        return DOMPoint(em_Val_new(em_Val_global("DOMPoint", em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(w)));
      }


DOMPoint DOMPoint_fromPoint(DOMPoint* self ) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_global("dompoint"), "fromPoint"));
}


DOMPoint DOMPoint_fromPoint(DOMPoint* self , const DOMPointInit* other) {
    return em_Val_as(DOMPoint, em_Val_call(em_Val_global("dompoint"), "fromPoint", em_Val_from(other)));
}


double DOMPoint_x(const DOMPoint *self) {
    return em_Val_as(double, em_Val_get(DOMPointReadOnly_as_val(self->inner), "x"));
}


void DOMPoint_set_x(DOMPoint* self, double value) {
    em_Val_set(DOMPointReadOnly_as_val(self->inner), "x", value);
}


double DOMPoint_y(const DOMPoint *self) {
    return em_Val_as(double, em_Val_get(DOMPointReadOnly_as_val(self->inner), "y"));
}


void DOMPoint_set_y(DOMPoint* self, double value) {
    em_Val_set(DOMPointReadOnly_as_val(self->inner), "y", value);
}


double DOMPoint_z(const DOMPoint *self) {
    return em_Val_as(double, em_Val_get(DOMPointReadOnly_as_val(self->inner), "z"));
}


void DOMPoint_set_z(DOMPoint* self, double value) {
    em_Val_set(DOMPointReadOnly_as_val(self->inner), "z", value);
}


double DOMPoint_w(const DOMPoint *self) {
    return em_Val_as(double, em_Val_get(DOMPointReadOnly_as_val(self->inner), "w"));
}


void DOMPoint_set_w(DOMPoint* self, double value) {
    em_Val_set(DOMPointReadOnly_as_val(self->inner), "w", value);
}

