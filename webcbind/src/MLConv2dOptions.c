#include <webcbind/MLConv2dOptions.h>

#include <webcbind/MLOperand.h>

DEFINE_EMLITE_TYPE(MLConv2dOptions, MLOperatorOptions);


jb_Array MLConv2dOptions_padding(const MLConv2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("padding")));
}


void MLConv2dOptions_set_padding(MLConv2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("padding"), em_Val_from(value));
}


jb_Array MLConv2dOptions_strides(const MLConv2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("strides")));
}


void MLConv2dOptions_set_strides(MLConv2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("strides"), em_Val_from(value));
}


jb_Array MLConv2dOptions_dilations(const MLConv2dOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("dilations")));
}


void MLConv2dOptions_set_dilations(MLConv2dOptions* self, jb_Array * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("dilations"), em_Val_from(value));
}


unsigned long MLConv2dOptions_groups(const MLConv2dOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("groups")));
}


void MLConv2dOptions_set_groups(MLConv2dOptions* self, unsigned long value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("groups"), em_Val_from(value));
}


MLInputOperandLayout MLConv2dOptions_inputLayout(const MLConv2dOptions *self) {
    return em_Val_as(MLInputOperandLayout, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("inputLayout")));
}


void MLConv2dOptions_set_inputLayout(MLConv2dOptions* self, MLInputOperandLayout * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("inputLayout"), em_Val_from(value));
}


MLConv2dFilterOperandLayout MLConv2dOptions_filterLayout(const MLConv2dOptions *self) {
    return em_Val_as(MLConv2dFilterOperandLayout, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("filterLayout")));
}


void MLConv2dOptions_set_filterLayout(MLConv2dOptions* self, MLConv2dFilterOperandLayout * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("filterLayout"), em_Val_from(value));
}


MLOperand MLConv2dOptions_bias(const MLConv2dOptions *self) {
    return em_Val_as(MLOperand, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("bias")));
}


void MLConv2dOptions_set_bias(MLConv2dOptions* self, MLOperand * value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("bias"), em_Val_from(value));
}


MLConv2dOptions MLConv2dOptions_new() {
    em_Val obj = em_Val_object();
    return MLConv2dOptions_from_val(&obj);
}

