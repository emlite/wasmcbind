#include <webcbind/MLSplitOptions.h>

DEFINE_EMLITE_TYPE(MLSplitOptions, MLOperatorOptions);


unsigned long MLSplitOptions_axis(const MLSplitOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("axis")));
}


void MLSplitOptions_set_axis(MLSplitOptions* self, unsigned long value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("axis"), em_Val_from(value));
}


MLSplitOptions MLSplitOptions_new() {
    em_Val obj = em_Val_object();
    return MLSplitOptions_from_val(&obj);
}

