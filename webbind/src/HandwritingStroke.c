#include <webbind/HandwritingStroke.h>


DEFINE_EMLITE_TYPE(HandwritingPoint, em_Val);


double HandwritingPoint_x(const HandwritingPoint *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("x")));
}


void HandwritingPoint_set_x(HandwritingPoint* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


double HandwritingPoint_y(const HandwritingPoint *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("y")));
}


void HandwritingPoint_set_y(HandwritingPoint* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


jb_Any HandwritingPoint_t(const HandwritingPoint *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("t")));
}


void HandwritingPoint_set_t(HandwritingPoint* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("t"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(HandwritingStroke, em_Val);


HandwritingStroke HandwritingStroke_new() {
        em_Val vv = em_Val_new(em_Val_global("HandwritingStroke") );
        return HandwritingStroke_from_val(&vv);
      }


jb_Undefined HandwritingStroke_addPoint(HandwritingStroke* self , HandwritingPoint * point) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addPoint", em_Val_from(point)));
}


jb_Array HandwritingStroke_getPoints(HandwritingStroke* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getPoints"));
}


jb_Undefined HandwritingStroke_clear(HandwritingStroke* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}

