#include <webbind/MLContext.h>

#include <webbind/MLGraph.h>
#include <webbind/MLTensor.h>
#include <webbind/MLTensorDescriptor.h>
#include <webbind/MLOperandDescriptor.h>
#include <webbind/MLOpSupportLimits.h>
#include <webbind/MLContextLostInfo.h>

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

