#include <webcbind/GPUComputePipelineDescriptor.h>

DEFINE_EMLITE_TYPE(GPUComputePipelineDescriptor, GPUPipelineDescriptorBase);


GPUProgrammableStage GPUComputePipelineDescriptor_compute(const GPUComputePipelineDescriptor *self) {
    return em_Val_as(GPUProgrammableStage, em_Val_get(GPUPipelineDescriptorBase_as_val(self->inner), em_Val_from("compute")));
}


void GPUComputePipelineDescriptor_set_compute(GPUComputePipelineDescriptor* self, GPUProgrammableStage * value) {
    em_Val_set(GPUPipelineDescriptorBase_as_val(self->inner), em_Val_from("compute"), em_Val_from(value));
}


GPUComputePipelineDescriptor GPUComputePipelineDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUComputePipelineDescriptor_from_val(&obj);
}

