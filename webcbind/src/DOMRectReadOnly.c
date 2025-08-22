#include <webcbind/DOMRectReadOnly.h>

#include <webcbind/DOMRectInit.h>

DEFINE_EMLITE_TYPE(DOMRectReadOnly, em_Val);


DOMRectReadOnly DOMRectReadOnly_new0() {
        em_Val vv = em_Val_new(em_Val_global("DOMRectReadOnly") );
        return DOMRectReadOnly_from_val(&vv);
      }


DOMRectReadOnly DOMRectReadOnly_new1(double x) {
        em_Val vv = em_Val_new(em_Val_global("DOMRectReadOnly") , em_Val_from(x));
        return DOMRectReadOnly_from_val(&vv);
      }


DOMRectReadOnly DOMRectReadOnly_new2(double x, double y) {
        em_Val vv = em_Val_new(em_Val_global("DOMRectReadOnly") , em_Val_from(x), em_Val_from(y));
        return DOMRectReadOnly_from_val(&vv);
      }


DOMRectReadOnly DOMRectReadOnly_new3(double x, double y, double width) {
        em_Val vv = em_Val_new(em_Val_global("DOMRectReadOnly") , em_Val_from(x), em_Val_from(y), em_Val_from(width));
        return DOMRectReadOnly_from_val(&vv);
      }


DOMRectReadOnly DOMRectReadOnly_new4(double x, double y, double width, double height) {
        em_Val vv = em_Val_new(em_Val_global("DOMRectReadOnly") , em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height));
        return DOMRectReadOnly_from_val(&vv);
      }


DOMRectReadOnly DOMRectReadOnly_fromRect0(DOMRectReadOnly* self ) {
    return em_Val_as(DOMRectReadOnly, em_Val_call(em_Val_global("domrectreadonly"), "fromRect"));
}


DOMRectReadOnly DOMRectReadOnly_fromRect1(DOMRectReadOnly* self , DOMRectInit * other) {
    return em_Val_as(DOMRectReadOnly, em_Val_call(em_Val_global("domrectreadonly"), "fromRect", em_Val_from(other)));
}


double DOMRectReadOnly_x(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("x")));
}


double DOMRectReadOnly_y(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("y")));
}


double DOMRectReadOnly_width(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


double DOMRectReadOnly_height(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


double DOMRectReadOnly_top(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("top")));
}


double DOMRectReadOnly_right(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("right")));
}


double DOMRectReadOnly_bottom(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bottom")));
}


double DOMRectReadOnly_left(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("left")));
}


jb_Object DOMRectReadOnly_toJSON(DOMRectReadOnly* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

