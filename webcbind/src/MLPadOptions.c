#include <webcbind/MLPadOptions.h>

DEFINE_EMLITE_TYPE(MLPadOptions, MLOperatorOptions);


MLPaddingMode MLPadOptions_mode(const MLPadOptions *self) {
    return em_Val_as(MLPaddingMode, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("mode")));
}


void MLPadOptions_set_mode(MLPadOptions* self, MLPaddingMode * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


jb_Any MLPadOptions_value(const MLPadOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("value")));
}


void MLPadOptions_set_value(MLPadOptions* self, jb_Any * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


MLPadOptions MLPadOptions_new() {
    em_Val obj = em_Val_object();
    return MLPadOptions_from_val(&obj);
}

