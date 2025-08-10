#include <webbind/MLTensorDescriptor.h>

DEFINE_EMLITE_TYPE(MLTensorDescriptor, MLOperandDescriptor);


bool MLTensorDescriptor_readable(const MLTensorDescriptor *self) {
    return em_Val_as(bool, em_Val_get(MLOperandDescriptor_as_val(self->inner), em_Val_from("readable")));
}


void MLTensorDescriptor_set_readable(MLTensorDescriptor* self, bool value) {
    em_Val_set(MLOperandDescriptor_as_val(self->inner), em_Val_from("readable"), em_Val_from(value));
}


bool MLTensorDescriptor_writable(const MLTensorDescriptor *self) {
    return em_Val_as(bool, em_Val_get(MLOperandDescriptor_as_val(self->inner), em_Val_from("writable")));
}


void MLTensorDescriptor_set_writable(MLTensorDescriptor* self, bool value) {
    em_Val_set(MLOperandDescriptor_as_val(self->inner), em_Val_from("writable"), em_Val_from(value));
}


MLTensorDescriptor MLTensorDescriptor_new() {
    em_Val obj = em_Val_object();
    return MLTensorDescriptor_from_val(&obj);
}

