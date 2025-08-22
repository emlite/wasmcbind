#include <webcbind/GPUDeviceDescriptor.h>

DEFINE_EMLITE_TYPE(GPUDeviceDescriptor, GPUObjectDescriptorBase);


jb_Array GPUDeviceDescriptor_requiredFeatures(const GPUDeviceDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("requiredFeatures")));
}


void GPUDeviceDescriptor_set_requiredFeatures(GPUDeviceDescriptor* self, jb_Array * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("requiredFeatures"), em_Val_from(value));
}


jb_Object GPUDeviceDescriptor_requiredLimits(const GPUDeviceDescriptor *self) {
    return em_Val_as(jb_Object, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("requiredLimits")));
}


void GPUDeviceDescriptor_set_requiredLimits(GPUDeviceDescriptor* self, jb_Object * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("requiredLimits"), em_Val_from(value));
}


GPUQueueDescriptor GPUDeviceDescriptor_defaultQueue(const GPUDeviceDescriptor *self) {
    return em_Val_as(GPUQueueDescriptor, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("defaultQueue")));
}


void GPUDeviceDescriptor_set_defaultQueue(GPUDeviceDescriptor* self, GPUQueueDescriptor * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("defaultQueue"), em_Val_from(value));
}


GPUDeviceDescriptor GPUDeviceDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUDeviceDescriptor_from_val(&obj);
}

