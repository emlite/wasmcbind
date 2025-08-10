#include <webbind/GPUShaderModuleDescriptor.h>

DEFINE_EMLITE_TYPE(GPUShaderModuleDescriptor, GPUObjectDescriptorBase);


jb_String GPUShaderModuleDescriptor_code(const GPUShaderModuleDescriptor *self) {
    return em_Val_as(jb_String, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("code")));
}


void GPUShaderModuleDescriptor_set_code(GPUShaderModuleDescriptor* self, jb_String * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("code"), em_Val_from(value));
}


jb_Array GPUShaderModuleDescriptor_compilationHints(const GPUShaderModuleDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("compilationHints")));
}


void GPUShaderModuleDescriptor_set_compilationHints(GPUShaderModuleDescriptor* self, jb_Array * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("compilationHints"), em_Val_from(value));
}


GPUShaderModuleDescriptor GPUShaderModuleDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUShaderModuleDescriptor_from_val(&obj);
}

