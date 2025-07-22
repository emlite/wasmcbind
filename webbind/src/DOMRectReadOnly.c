#include <webbind/DOMRectReadOnly.h>


DEFINE_EMLITE_TYPE(DOMRectInit, em_Val);


double DOMRectInit_x(const DOMRectInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "x"));
}


void DOMRectInit_set_x(DOMRectInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "x", value);
}


double DOMRectInit_y(const DOMRectInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "y"));
}


void DOMRectInit_set_y(DOMRectInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "y", value);
}


double DOMRectInit_width(const DOMRectInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "width"));
}


void DOMRectInit_set_width(DOMRectInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "width", value);
}


double DOMRectInit_height(const DOMRectInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "height"));
}


void DOMRectInit_set_height(DOMRectInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "height", value);
}

DEFINE_EMLITE_TYPE(DOMRectReadOnly, em_Val);


DOMRectReadOnly DOMRectReadOnly_new() : em_Val(em_Val_global("DOMRectReadOnly").new_()) {
        return DOMRectReadOnly(em_Val_new(em_Val_global("DOMRectReadOnly", ));
      }


DOMRectReadOnly DOMRectReadOnly_new(double x) : em_Val(em_Val_global("DOMRectReadOnly").new_(em_Val_from(x))) {
        return DOMRectReadOnly(em_Val_new(em_Val_global("DOMRectReadOnly", em_Val_from(x)));
      }


DOMRectReadOnly DOMRectReadOnly_new(double x, double y) : em_Val(em_Val_global("DOMRectReadOnly").new_(em_Val_from(x), em_Val_from(y))) {
        return DOMRectReadOnly(em_Val_new(em_Val_global("DOMRectReadOnly", em_Val_from(x), em_Val_from(y)));
      }


DOMRectReadOnly DOMRectReadOnly_new(double x, double y, double width) : em_Val(em_Val_global("DOMRectReadOnly").new_(em_Val_from(x), em_Val_from(y), em_Val_from(width))) {
        return DOMRectReadOnly(em_Val_new(em_Val_global("DOMRectReadOnly", em_Val_from(x), em_Val_from(y), em_Val_from(width)));
      }


DOMRectReadOnly DOMRectReadOnly_new(double x, double y, double width, double height) : em_Val(em_Val_global("DOMRectReadOnly").new_(em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height))) {
        return DOMRectReadOnly(em_Val_new(em_Val_global("DOMRectReadOnly", em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height)));
      }


DOMRectReadOnly DOMRectReadOnly_fromRect(DOMRectReadOnly* self ) {
    return em_Val_as(DOMRectReadOnly, em_Val_call(em_Val_global("domrectreadonly"), "fromRect"));
}


DOMRectReadOnly DOMRectReadOnly_fromRect(DOMRectReadOnly* self , const DOMRectInit* other) {
    return em_Val_as(DOMRectReadOnly, em_Val_call(em_Val_global("domrectreadonly"), "fromRect", em_Val_from(other)));
}


double DOMRectReadOnly_x(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "x"));
}


double DOMRectReadOnly_y(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "y"));
}


double DOMRectReadOnly_width(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "width"));
}


double DOMRectReadOnly_height(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "height"));
}


double DOMRectReadOnly_top(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "top"));
}


double DOMRectReadOnly_right(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "right"));
}


double DOMRectReadOnly_bottom(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "bottom"));
}


double DOMRectReadOnly_left(const DOMRectReadOnly *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "left"));
}


jb_Object DOMRectReadOnly_toJSON(DOMRectReadOnly* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

