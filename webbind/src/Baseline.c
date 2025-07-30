#include <webbind/Baseline.h>


DEFINE_EMLITE_TYPE(Baseline, em_Val);


jb_String Baseline_name(const Baseline *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


double Baseline_value(const Baseline *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}

