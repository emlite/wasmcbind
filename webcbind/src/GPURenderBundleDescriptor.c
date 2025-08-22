#include <webcbind/GPURenderBundleDescriptor.h>

DEFINE_EMLITE_TYPE(GPURenderBundleDescriptor, GPUObjectDescriptorBase);


GPURenderBundleDescriptor GPURenderBundleDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPURenderBundleDescriptor_from_val(&obj);
}

