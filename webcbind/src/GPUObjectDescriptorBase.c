#include <webcbind/GPUObjectDescriptorBase.h>

DEFINE_EMLITE_TYPE(GPUObjectDescriptorBase, em_Val);


jb_String GPUObjectDescriptorBase_label(const GPUObjectDescriptorBase *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUObjectDescriptorBase_set_label(GPUObjectDescriptorBase* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


GPUObjectDescriptorBase GPUObjectDescriptorBase_new() {
    em_Val obj = em_Val_object();
    return GPUObjectDescriptorBase_from_val(&obj);
}

