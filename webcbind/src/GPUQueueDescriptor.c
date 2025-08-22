#include <webcbind/GPUQueueDescriptor.h>

DEFINE_EMLITE_TYPE(GPUQueueDescriptor, GPUObjectDescriptorBase);


GPUQueueDescriptor GPUQueueDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUQueueDescriptor_from_val(&obj);
}

