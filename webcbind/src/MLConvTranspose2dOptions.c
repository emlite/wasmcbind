#include <webcbind/MLConvTranspose2dOptions.h>

#include <webcbind/MLOperand.h>

DEFINE_EMLITE_TYPE(MLConvTranspose2dOptions, MLOperatorOptions);


jb_Array MLConvTranspose2dOptions_padding(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("padding")));
}


void MLConvTranspose2dOptions_set_padding(MLConvTranspose2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("padding"), em_Val_from(value));
}


jb_Array MLConvTranspose2dOptions_strides(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("strides")));
}


void MLConvTranspose2dOptions_set_strides(MLConvTranspose2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("strides"), em_Val_from(value));
}


jb_Array MLConvTranspose2dOptions_dilations(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("dilations")));
}


void MLConvTranspose2dOptions_set_dilations(MLConvTranspose2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("dilations"), em_Val_from(value));
}


jb_Array MLConvTranspose2dOptions_outputPadding(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("outputPadding")));
}


void MLConvTranspose2dOptions_set_outputPadding(MLConvTranspose2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("outputPadding"), em_Val_from(value));
}


jb_Array MLConvTranspose2dOptions_outputSizes(const MLConvTranspose2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("outputSizes")));
}


void MLConvTranspose2dOptions_set_outputSizes(MLConvTranspose2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("outputSizes"), em_Val_from(value));
}


unsigned long MLConvTranspose2dOptions_groups(const MLConvTranspose2dOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("groups")));
}


void MLConvTranspose2dOptions_set_groups(MLConvTranspose2dOptions* self, unsigned long value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("groups"), em_Val_from(value));
}


MLInputOperandLayout MLConvTranspose2dOptions_inputLayout(const MLConvTranspose2dOptions *self) {
    return em_Val_as(MLInputOperandLayout, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("inputLayout")));
}


void MLConvTranspose2dOptions_set_inputLayout(MLConvTranspose2dOptions* self, MLInputOperandLayout * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("inputLayout"), em_Val_from(value));
}


MLConvTranspose2dFilterOperandLayout MLConvTranspose2dOptions_filterLayout(const MLConvTranspose2dOptions *self) {
    return em_Val_as(MLConvTranspose2dFilterOperandLayout, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("filterLayout")));
}


void MLConvTranspose2dOptions_set_filterLayout(MLConvTranspose2dOptions* self, MLConvTranspose2dFilterOperandLayout * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("filterLayout"), em_Val_from(value));
}


MLOperand MLConvTranspose2dOptions_bias(const MLConvTranspose2dOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("bias")));
}


void MLConvTranspose2dOptions_set_bias(MLConvTranspose2dOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLConvTranspose2dOptions MLConvTranspose2dOptions_new() {
    em_Val obj = em_Val_object();
    return MLConvTranspose2dOptions_from_val(&obj);
}

