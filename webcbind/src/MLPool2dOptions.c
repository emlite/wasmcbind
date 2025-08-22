#include <webcbind/MLPool2dOptions.h>

DEFINE_EMLITE_TYPE(MLPool2dOptions, MLOperatorOptions);


jb_Array MLPool2dOptions_windowDimensions(const MLPool2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("windowDimensions")));
}


void MLPool2dOptions_set_windowDimensions(MLPool2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("windowDimensions"), em_Val_from(value));
}


jb_Array MLPool2dOptions_padding(const MLPool2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("padding")));
}


void MLPool2dOptions_set_padding(MLPool2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("padding"), em_Val_from(value));
}


jb_Array MLPool2dOptions_strides(const MLPool2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("strides")));
}


void MLPool2dOptions_set_strides(MLPool2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("strides"), em_Val_from(value));
}


jb_Array MLPool2dOptions_dilations(const MLPool2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("dilations")));
}


void MLPool2dOptions_set_dilations(MLPool2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("dilations"), em_Val_from(value));
}


MLInputOperandLayout MLPool2dOptions_layout(const MLPool2dOptions *self) {
    return em_Val_as(MLInputOperandLayout, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("layout")));
}


void MLPool2dOptions_set_layout(MLPool2dOptions* self, MLInputOperandLayout * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


MLRoundingType MLPool2dOptions_roundingType(const MLPool2dOptions *self) {
    return em_Val_as(MLRoundingType, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("roundingType")));
}


void MLPool2dOptions_set_roundingType(MLPool2dOptions* self, MLRoundingType * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("roundingType"), em_Val_from(value));
}


jb_Array MLPool2dOptions_outputSizes(const MLPool2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("outputSizes")));
}


void MLPool2dOptions_set_outputSizes(MLPool2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("outputSizes"), em_Val_from(value));
}


MLPool2dOptions MLPool2dOptions_new() {
    em_Val obj = em_Val_object();
    return MLPool2dOptions_from_val(&obj);
}

