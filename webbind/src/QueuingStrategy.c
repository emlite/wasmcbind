#include <webbind/QueuingStrategy.h>

DEFINE_EMLITE_TYPE(QueuingStrategy, em_Val);


double QueuingStrategy_highWaterMark(const QueuingStrategy *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("highWaterMark")));
}


void QueuingStrategy_set_highWaterMark(QueuingStrategy* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("highWaterMark"), em_Val_from(value));
}


jb_Function QueuingStrategy_size(const QueuingStrategy *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}


void QueuingStrategy_set_size(QueuingStrategy* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


QueuingStrategy QueuingStrategy_new() {
    em_Val obj = em_Val_object();
    return QueuingStrategy_from_val(&obj);
}

