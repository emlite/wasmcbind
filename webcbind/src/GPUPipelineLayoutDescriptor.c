#include <webcbind/GPUPipelineLayoutDescriptor.h>

#include <webcbind/GPUBindGroupLayout.h>

DEFINE_EMLITE_TYPE(GPUPipelineLayoutDescriptor, GPUObjectDescriptorBase);


jb_Array GPUPipelineLayoutDescriptor_bindGroupLayouts(const GPUPipelineLayoutDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("bindGroupLayouts")));
}


void GPUPipelineLayoutDescriptor_set_bindGroupLayouts(GPUPipelineLayoutDescriptor* self, jb_Array * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("bindGroupLayouts"), em_Val_from(value));
}


GPUPipelineLayoutDescriptor GPUPipelineLayoutDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUPipelineLayoutDescriptor_from_val(&obj);
}

