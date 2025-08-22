#include <webcbind/MLScatterOptions.h>

DEFINE_EMLITE_TYPE(MLScatterOptions, MLOperatorOptions);


unsigned long MLScatterOptions_axis(const MLScatterOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("axis")));
}


void MLScatterOptions_set_axis(MLScatterOptions* self, unsigned long value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("axis"), em_Val_from(value));
}


MLScatterOptions MLScatterOptions_new() {
    em_Val obj = em_Val_object();
    return MLScatterOptions_from_val(&obj);
}

