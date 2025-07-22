#include <webbind/DOMRect.h>
#include <webbind/DOMRectReadOnly.h>


DEFINE_EMLITE_TYPE(DOMRect, DOMRectReadOnly);


DOMRect DOMRect_new() : DOMRectReadOnly(em_Val_global("DOMRect").new_()) {
        return DOMRect(em_Val_new(em_Val_global("DOMRect", ));
      }


DOMRect DOMRect_new(double x) : DOMRectReadOnly(em_Val_global("DOMRect").new_(em_Val_from(x))) {
        return DOMRect(em_Val_new(em_Val_global("DOMRect", em_Val_from(x)));
      }


DOMRect DOMRect_new(double x, double y) : DOMRectReadOnly(em_Val_global("DOMRect").new_(em_Val_from(x), em_Val_from(y))) {
        return DOMRect(em_Val_new(em_Val_global("DOMRect", em_Val_from(x), em_Val_from(y)));
      }


DOMRect DOMRect_new(double x, double y, double width) : DOMRectReadOnly(em_Val_global("DOMRect").new_(em_Val_from(x), em_Val_from(y), em_Val_from(width))) {
        return DOMRect(em_Val_new(em_Val_global("DOMRect", em_Val_from(x), em_Val_from(y), em_Val_from(width)));
      }


DOMRect DOMRect_new(double x, double y, double width, double height) : DOMRectReadOnly(em_Val_global("DOMRect").new_(em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height))) {
        return DOMRect(em_Val_new(em_Val_global("DOMRect", em_Val_from(x), em_Val_from(y), em_Val_from(width), em_Val_from(height)));
      }


DOMRect DOMRect_fromRect(DOMRect* self ) {
    return em_Val_as(DOMRect, em_Val_call(em_Val_global("domrect"), "fromRect"));
}


DOMRect DOMRect_fromRect(DOMRect* self , const DOMRectInit* other) {
    return em_Val_as(DOMRect, em_Val_call(em_Val_global("domrect"), "fromRect", em_Val_from(other)));
}


double DOMRect_x(const DOMRect *self) {
    return em_Val_as(double, em_Val_get(DOMRectReadOnly_as_val(self->inner), "x"));
}


void DOMRect_set_x(DOMRect* self, double value) {
    em_Val_set(DOMRectReadOnly_as_val(self->inner), "x", value);
}


double DOMRect_y(const DOMRect *self) {
    return em_Val_as(double, em_Val_get(DOMRectReadOnly_as_val(self->inner), "y"));
}


void DOMRect_set_y(DOMRect* self, double value) {
    em_Val_set(DOMRectReadOnly_as_val(self->inner), "y", value);
}


double DOMRect_width(const DOMRect *self) {
    return em_Val_as(double, em_Val_get(DOMRectReadOnly_as_val(self->inner), "width"));
}


void DOMRect_set_width(DOMRect* self, double value) {
    em_Val_set(DOMRectReadOnly_as_val(self->inner), "width", value);
}


double DOMRect_height(const DOMRect *self) {
    return em_Val_as(double, em_Val_get(DOMRectReadOnly_as_val(self->inner), "height"));
}


void DOMRect_set_height(DOMRect* self, double value) {
    em_Val_set(DOMRectReadOnly_as_val(self->inner), "height", value);
}

