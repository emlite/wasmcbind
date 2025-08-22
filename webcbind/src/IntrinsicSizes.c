#include <webcbind/IntrinsicSizes.h>

DEFINE_EMLITE_TYPE(IntrinsicSizes, em_Val);


double IntrinsicSizes_minContentSize(const IntrinsicSizes *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minContentSize")));
}


double IntrinsicSizes_maxContentSize(const IntrinsicSizes *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxContentSize")));
}

