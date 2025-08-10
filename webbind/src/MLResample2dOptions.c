#include <webbind/MLResample2dOptions.h>

DEFINE_EMLITE_TYPE(MLResample2dOptions, MLOperatorOptions);


MLInterpolationMode MLResample2dOptions_mode(const MLResample2dOptions *self) {
    return em_Val_as(MLInterpolationMode, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("mode")));
}


void MLResample2dOptions_set_mode(MLResample2dOptions* self, MLInterpolationMode * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


jb_Array MLResample2dOptions_scales(const MLResample2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("scales")));
}


void MLResample2dOptions_set_scales(MLResample2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("scales"), em_Val_from(value));
}


jb_Array MLResample2dOptions_sizes(const MLResample2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("sizes")));
}


void MLResample2dOptions_set_sizes(MLResample2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("sizes"), em_Val_from(value));
}


jb_Array MLResample2dOptions_axes(const MLResample2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("axes")));
}


void MLResample2dOptions_set_axes(MLResample2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("axes"), em_Val_from(value));
}


MLResample2dOptions MLResample2dOptions_new() {
    em_Val obj = em_Val_object();
    return MLResample2dOptions_from_val(&obj);
}

