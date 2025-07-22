#include <webbind/Baseline.h>


DEFINE_EMLITE_TYPE(Baseline, em_Val);


jb_DOMString Baseline_name(const Baseline *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


double Baseline_value(const Baseline *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "value"));
}

