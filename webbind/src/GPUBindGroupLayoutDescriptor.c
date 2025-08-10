#include <webbind/GPUBindGroupLayoutDescriptor.h>

DEFINE_EMLITE_TYPE(GPUBindGroupLayoutDescriptor, GPUObjectDescriptorBase);


jb_Array GPUBindGroupLayoutDescriptor_entries(const GPUBindGroupLayoutDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("entries")));
}


void GPUBindGroupLayoutDescriptor_set_entries(GPUBindGroupLayoutDescriptor* self, jb_Array * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("entries"), em_Val_from(value));
}


GPUBindGroupLayoutDescriptor GPUBindGroupLayoutDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUBindGroupLayoutDescriptor_from_val(&obj);
}

