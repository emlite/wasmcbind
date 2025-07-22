#include <webbind/GPUComputePipeline.h>
#include <webbind/GPUBindGroupLayout.h>


DEFINE_EMLITE_TYPE(GPUComputePipeline, em_Val);


jb_USVString GPUComputePipeline_label(const GPUComputePipeline *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPUComputePipeline_set_label(GPUComputePipeline* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}


GPUBindGroupLayout GPUComputePipeline_getBindGroupLayout(GPUComputePipeline* self , unsigned long index) {
    return em_Val_as(GPUBindGroupLayout, em_Val_call(em_Val_as_val(self->inner), "getBindGroupLayout", em_Val_from(index)));
}

