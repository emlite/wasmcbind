#include <webcbind/DOMRect.h>

#include <webcbind/DOMRectInit.h>

DEFINE_EMLITE_TYPE(DOMRect, DOMRectReadOnly);


DOMRect DOMRect_new0() {
        em_Val vv = em_Val_new(em_Val_global("DOMRect") );
        return DOMRect_from_val(&vv);
      }


DOMRect DOMRect_new1(double x) {
        em_Val vv = em_Val_new(em_Val_global("DOMRect") , em_Val_from(x));
        return DOMRect_from_val(&vv);
      }


DOMRect DOMRect_new2(double x, double y) {
        em_Val vv = em_Val_new(em_Val_global("DOMRect") , em_Val_from(x), em_Val_from(y));
        return DOMRect_from_val(&vv);
      }


DOMRect DOMRect_new3(double x, double y, double width) {
        em_Val vv = em_Val_new(em_Val_global("DOMRect") , em_Val_from(x), em_Val_from(y), em_Val_from(width));
        return DOMRect_from_val(&vv);
      }


DOMRect DOMRect_new4(double x, double y, double width, double height) {
        em_Val vv = em_Val_new(em_Val_global("DOMRect") , em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height));
        return DOMRect_from_val(&vv);
      }


DOMRect DOMRect_fromRect0(DOMRect* self ) {
    return em_Val_as(DOMRect, em_Val_call(em_Val_global("domrect"), "fromRect"));
}


DOMRect DOMRect_fromRect1(DOMRect* self , DOMRectInit * other) {
    return em_Val_as(DOMRect, em_Val_call(em_Val_global("domrect"), "fromRect", em_Val_from(other)));
}


double DOMRect_x(const DOMRect *self) {
    return em_Val_as(double, em_Val_get(DOMRectReadOnly_as_val(self->inner), em_Val_from("x")));
}


void DOMRect_set_x(DOMRect* self, double value) {
    em_Val_set(DOMRectReadOnly_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


double DOMRect_y(const DOMRect *self) {
    return em_Val_as(double, em_Val_get(DOMRectReadOnly_as_val(self->inner), em_Val_from("y")));
}


void DOMRect_set_y(DOMRect* self, double value) {
    em_Val_set(DOMRectReadOnly_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


double DOMRect_width(const DOMRect *self) {
    return em_Val_as(double, em_Val_get(DOMRectReadOnly_as_val(self->inner), em_Val_from("width")));
}


void DOMRect_set_width(DOMRect* self, double value) {
    em_Val_set(DOMRectReadOnly_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


double DOMRect_height(const DOMRect *self) {
    return em_Val_as(double, em_Val_get(DOMRectReadOnly_as_val(self->inner), em_Val_from("height")));
}


void DOMRect_set_height(DOMRect* self, double value) {
    em_Val_set(DOMRectReadOnly_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}

