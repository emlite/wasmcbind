#include <webbind/MLContext.h>
#include <webbind/MLGraph.h>
#include <webbind/MLTensor.h>


DEFINE_EMLITE_TYPE(MLTensorDescriptor, em_Val);


bool MLTensorDescriptor_readable(const MLTensorDescriptor *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("readable")));
}


void MLTensorDescriptor_set_readable(MLTensorDescriptor* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("readable"), em_Val_from(value));
}


bool MLTensorDescriptor_writable(const MLTensorDescriptor *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writable")));
}


void MLTensorDescriptor_set_writable(MLTensorDescriptor* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("writable"), em_Val_from(value));
}

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

DEFINE_EMLITE_TYPE(MLOpSupportLimits, em_Val);


jb_Any MLOpSupportLimits_where(const MLOpSupportLimits *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("where")));
}


void MLOpSupportLimits_set_where(MLOpSupportLimits* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("where"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLContextLostInfo, em_Val);


jb_String MLContextLostInfo_message(const MLContextLostInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("message")));
}


void MLContextLostInfo_set_message(MLContextLostInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("message"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MLContext, em_Val);


jb_Undefined MLContext_dispatch(MLContext* self , MLGraph * graph, jb_Any * inputs, jb_Any * outputs) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "dispatch", em_Val_from(graph), em_Val_from(inputs), em_Val_from(outputs)));
}


jb_Promise MLContext_createTensor(MLContext* self , MLTensorDescriptor * descriptor) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createTensor", em_Val_from(descriptor)));
}


jb_Promise MLContext_createConstantTensor(MLContext* self , MLOperandDescriptor * descriptor, jb_Any * inputData) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createConstantTensor", em_Val_from(descriptor), em_Val_from(inputData)));
}


jb_Promise MLContext_readTensor(MLContext* self , MLTensor * tensor, jb_Any * outputData) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "readTensor", em_Val_from(tensor), em_Val_from(outputData)));
}


jb_Undefined MLContext_writeTensor(MLContext* self , MLTensor * tensor, jb_Any * inputData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "writeTensor", em_Val_from(tensor), em_Val_from(inputData)));
}


MLOpSupportLimits MLContext_opSupportLimits(MLContext* self ) {
    return em_Val_as(MLOpSupportLimits, em_Val_call(em_Val_as_val(self->inner), "opSupportLimits"));
}


jb_Undefined MLContext_destroy(MLContext* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}


jb_Promise MLContext_lost(const MLContext *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lost")));
}

