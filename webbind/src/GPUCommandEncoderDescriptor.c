#include <webbind/GPUCommandEncoderDescriptor.h>

DEFINE_EMLITE_TYPE(GPUCommandEncoderDescriptor, GPUObjectDescriptorBase);


GPUCommandEncoderDescriptor GPUCommandEncoderDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUCommandEncoderDescriptor_from_val(&obj);
}

