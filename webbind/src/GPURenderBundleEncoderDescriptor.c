#include <webbind/GPURenderBundleEncoderDescriptor.h>

DEFINE_EMLITE_TYPE(GPURenderBundleEncoderDescriptor, GPURenderPassLayout);


bool GPURenderBundleEncoderDescriptor_depthReadOnly(const GPURenderBundleEncoderDescriptor *self) {
    return em_Val_as(bool, em_Val_get(GPURenderPassLayout_as_val(self->inner), em_Val_from("depthReadOnly")));
}


void GPURenderBundleEncoderDescriptor_set_depthReadOnly(GPURenderBundleEncoderDescriptor* self, bool value) {
    em_Val_set(GPURenderPassLayout_as_val(self->inner), em_Val_from("depthReadOnly"), em_Val_from(value));
}


bool GPURenderBundleEncoderDescriptor_stencilReadOnly(const GPURenderBundleEncoderDescriptor *self) {
    return em_Val_as(bool, em_Val_get(GPURenderPassLayout_as_val(self->inner), em_Val_from("stencilReadOnly")));
}


void GPURenderBundleEncoderDescriptor_set_stencilReadOnly(GPURenderBundleEncoderDescriptor* self, bool value) {
    em_Val_set(GPURenderPassLayout_as_val(self->inner), em_Val_from("stencilReadOnly"), em_Val_from(value));
}


GPURenderBundleEncoderDescriptor GPURenderBundleEncoderDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPURenderBundleEncoderDescriptor_from_val(&obj);
}

