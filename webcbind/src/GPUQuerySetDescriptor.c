#include <webcbind/GPUQuerySetDescriptor.h>

DEFINE_EMLITE_TYPE(GPUQuerySetDescriptor, GPUObjectDescriptorBase);


GPUQueryType GPUQuerySetDescriptor_type(const GPUQuerySetDescriptor *self) {
    return em_Val_as(GPUQueryType, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("type")));
}


void GPUQuerySetDescriptor_set_type(GPUQuerySetDescriptor* self, GPUQueryType * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_Any GPUQuerySetDescriptor_count(const GPUQuerySetDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("count")));
}


void GPUQuerySetDescriptor_set_count(GPUQuerySetDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("count"), em_Val_from(value));
}


GPUQuerySetDescriptor GPUQuerySetDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUQuerySetDescriptor_from_val(&obj);
}

