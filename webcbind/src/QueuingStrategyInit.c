#include <webcbind/QueuingStrategyInit.h>

DEFINE_EMLITE_TYPE(QueuingStrategyInit, em_Val);


double QueuingStrategyInit_highWaterMark(const QueuingStrategyInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("highWaterMark")));
}


void QueuingStrategyInit_set_highWaterMark(QueuingStrategyInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("highWaterMark"), em_Val_from(value));
}


QueuingStrategyInit QueuingStrategyInit_new() {
    em_Val obj = em_Val_object();
    return QueuingStrategyInit_from_val(&obj);
}

