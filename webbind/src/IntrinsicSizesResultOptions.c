#include <webbind/IntrinsicSizesResultOptions.h>

DEFINE_EMLITE_TYPE(IntrinsicSizesResultOptions, em_Val);


double IntrinsicSizesResultOptions_maxContentSize(const IntrinsicSizesResultOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxContentSize")));
}


void IntrinsicSizesResultOptions_set_maxContentSize(IntrinsicSizesResultOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxContentSize"), em_Val_from(value));
}


double IntrinsicSizesResultOptions_minContentSize(const IntrinsicSizesResultOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minContentSize")));
}


void IntrinsicSizesResultOptions_set_minContentSize(IntrinsicSizesResultOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("minContentSize"), em_Val_from(value));
}


IntrinsicSizesResultOptions IntrinsicSizesResultOptions_new() {
    em_Val obj = em_Val_object();
    return IntrinsicSizesResultOptions_from_val(&obj);
}

