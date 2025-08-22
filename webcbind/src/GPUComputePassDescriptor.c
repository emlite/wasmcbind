#include <webcbind/GPUComputePassDescriptor.h>

DEFINE_EMLITE_TYPE(GPUComputePassDescriptor, GPUObjectDescriptorBase);


GPUComputePassTimestampWrites GPUComputePassDescriptor_timestampWrites(const GPUComputePassDescriptor *self) {
    return em_Val_as(GPUComputePassTimestampWrites, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("timestampWrites")));
}


void GPUComputePassDescriptor_set_timestampWrites(GPUComputePassDescriptor* self, GPUComputePassTimestampWrites * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("timestampWrites"), em_Val_from(value));
}


GPUComputePassDescriptor GPUComputePassDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUComputePassDescriptor_from_val(&obj);
}

