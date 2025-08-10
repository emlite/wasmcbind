#include <webbind/GPUPipelineDescriptorBase.h>

DEFINE_EMLITE_TYPE(GPUPipelineDescriptorBase, GPUObjectDescriptorBase);


jb_Any GPUPipelineDescriptorBase_layout(const GPUPipelineDescriptorBase *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("layout")));
}


void GPUPipelineDescriptorBase_set_layout(GPUPipelineDescriptorBase* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


GPUPipelineDescriptorBase GPUPipelineDescriptorBase_new() {
    em_Val obj = em_Val_object();
    return GPUPipelineDescriptorBase_from_val(&obj);
}

