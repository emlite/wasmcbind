#include <webcbind/GPUPipelineErrorInit.h>

DEFINE_EMLITE_TYPE(GPUPipelineErrorInit, em_Val);


GPUPipelineErrorReason GPUPipelineErrorInit_reason(const GPUPipelineErrorInit *self) {
    return em_Val_as(GPUPipelineErrorReason, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reason")));
}


void GPUPipelineErrorInit_set_reason(GPUPipelineErrorInit* self, GPUPipelineErrorReason * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reason"), em_Val_from(value));
}


GPUPipelineErrorInit GPUPipelineErrorInit_new() {
    em_Val obj = em_Val_object();
    return GPUPipelineErrorInit_from_val(&obj);
}

