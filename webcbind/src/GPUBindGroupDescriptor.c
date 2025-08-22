#include <webcbind/GPUBindGroupDescriptor.h>

#include <webcbind/GPUBindGroupLayout.h>

DEFINE_EMLITE_TYPE(GPUBindGroupDescriptor, GPUObjectDescriptorBase);


GPUBindGroupLayout GPUBindGroupDescriptor_layout(const GPUBindGroupDescriptor *self) {
    return em_Val_as(GPUBindGroupLayout, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("layout")));
}


void GPUBindGroupDescriptor_set_layout(GPUBindGroupDescriptor* self, GPUBindGroupLayout * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


jb_Array GPUBindGroupDescriptor_entries(const GPUBindGroupDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("entries")));
}


void GPUBindGroupDescriptor_set_entries(GPUBindGroupDescriptor* self, jb_Array * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("entries"), em_Val_from(value));
}


GPUBindGroupDescriptor GPUBindGroupDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUBindGroupDescriptor_from_val(&obj);
}

