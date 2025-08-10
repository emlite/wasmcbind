#include <webbind/HandwritingPoint.h>

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


HandwritingPoint HandwritingPoint_new() {
    em_Val obj = em_Val_object();
    return HandwritingPoint_from_val(&obj);
}

