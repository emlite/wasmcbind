#include <webbind/HandwritingStroke.h>


DEFINE_EMLITE_TYPE(HandwritingPoint, em_Val);


double HandwritingPoint_x(const HandwritingPoint *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "x"));
}


void HandwritingPoint_set_x(HandwritingPoint* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "x", value);
}


double HandwritingPoint_y(const HandwritingPoint *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "y"));
}


void HandwritingPoint_set_y(HandwritingPoint* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "y", value);
}


jb_Any HandwritingPoint_t(const HandwritingPoint *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "t"));
}


void HandwritingPoint_set_t(HandwritingPoint* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "t", value);
}

DEFINE_EMLITE_TYPE(HandwritingStroke, em_Val);


HandwritingStroke HandwritingStroke_new() : em_Val(em_Val_global("HandwritingStroke").new_()) {
        return HandwritingStroke(em_Val_new(em_Val_global("HandwritingStroke", ));
      }


jb_Undefined HandwritingStroke_addPoint(HandwritingStroke* self , const HandwritingPoint* point) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addPoint", em_Val_from(point)));
}


jb_Sequence HandwritingStroke_getPoints(HandwritingStroke* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getPoints"));
}


jb_Undefined HandwritingStroke_clear(HandwritingStroke* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}

