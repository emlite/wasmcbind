#include <webcbind/MLGatherOptions.h>

DEFINE_EMLITE_TYPE(MLGatherOptions, MLOperatorOptions);


unsigned long MLGatherOptions_axis(const MLGatherOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("axis")));
}


void MLGatherOptions_set_axis(MLGatherOptions* self, unsigned long value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("axis"), em_Val_from(value));
}


MLGatherOptions MLGatherOptions_new() {
    em_Val obj = em_Val_object();
    return MLGatherOptions_from_val(&obj);
}

