#include <webcbind/MLOperandDescriptor.h>

DEFINE_EMLITE_TYPE(MLOperandDescriptor, em_Val);


MLOperandDataType MLOperandDescriptor_dataType(const MLOperandDescriptor *self) {
    return em_Val_as(MLOperandDataType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataType")));
}


void MLOperandDescriptor_set_dataType(MLOperandDescriptor* self, MLOperandDataType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataType"), em_Val_from(value));
}


jb_Array MLOperandDescriptor_shape(const MLOperandDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shape")));
}


void MLOperandDescriptor_set_shape(MLOperandDescriptor* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shape"), em_Val_from(value));
}


MLOperandDescriptor MLOperandDescriptor_new() {
    em_Val obj = em_Val_object();
    return MLOperandDescriptor_from_val(&obj);
}

