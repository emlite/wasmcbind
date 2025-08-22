#include <webcbind/GPUCommandBufferDescriptor.h>

DEFINE_EMLITE_TYPE(GPUCommandBufferDescriptor, GPUObjectDescriptorBase);


GPUCommandBufferDescriptor GPUCommandBufferDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUCommandBufferDescriptor_from_val(&obj);
}

