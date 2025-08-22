#include <webcbind/GPURenderPipelineDescriptor.h>

DEFINE_EMLITE_TYPE(GPURenderPipelineDescriptor, GPUPipelineDescriptorBase);


GPUVertexState GPURenderPipelineDescriptor_vertex(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(GPUVertexState, em_Val_get(GPUPipelineDescriptorBase_as_val(self->inner), em_Val_from("vertex")));
}


void GPURenderPipelineDescriptor_set_vertex(GPURenderPipelineDescriptor* self, GPUVertexState * value) {
    em_Val_set(GPUPipelineDescriptorBase_as_val(self->inner), em_Val_from("vertex"), em_Val_from(value));
}


GPUPrimitiveState GPURenderPipelineDescriptor_primitive(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(GPUPrimitiveState, em_Val_get(GPUPipelineDescriptorBase_as_val(self->inner), em_Val_from("primitive")));
}


void GPURenderPipelineDescriptor_set_primitive(GPURenderPipelineDescriptor* self, GPUPrimitiveState * value) {
    em_Val_set(GPUPipelineDescriptorBase_as_val(self->inner), em_Val_from("primitive"), em_Val_from(value));
}


GPUDepthStencilState GPURenderPipelineDescriptor_depthStencil(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(GPUDepthStencilState, em_Val_get(GPUPipelineDescriptorBase_as_val(self->inner), em_Val_from("depthStencil")));
}


void GPURenderPipelineDescriptor_set_depthStencil(GPURenderPipelineDescriptor* self, GPUDepthStencilState * value) {
    em_Val_set(GPUPipelineDescriptorBase_as_val(self->inner), em_Val_from("depthStencil"), em_Val_from(value));
}


GPUMultisampleState GPURenderPipelineDescriptor_multisample(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(GPUMultisampleState, em_Val_get(GPUPipelineDescriptorBase_as_val(self->inner), em_Val_from("multisample")));
}


void GPURenderPipelineDescriptor_set_multisample(GPURenderPipelineDescriptor* self, GPUMultisampleState * value) {
    em_Val_set(GPUPipelineDescriptorBase_as_val(self->inner), em_Val_from("multisample"), em_Val_from(value));
}


GPUFragmentState GPURenderPipelineDescriptor_fragment(const GPURenderPipelineDescriptor *self) {
    return em_Val_as(GPUFragmentState, em_Val_get(GPUPipelineDescriptorBase_as_val(self->inner), em_Val_from("fragment")));
}


void GPURenderPipelineDescriptor_set_fragment(GPURenderPipelineDescriptor* self, GPUFragmentState * value) {
    em_Val_set(GPUPipelineDescriptorBase_as_val(self->inner), em_Val_from("fragment"), em_Val_from(value));
}


GPURenderPipelineDescriptor GPURenderPipelineDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPURenderPipelineDescriptor_from_val(&obj);
}

