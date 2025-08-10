#include <webbind/GPUBindGroup.h>

DEFINE_EMLITE_TYPE(GPUBindGroup, em_Val);


jb_String GPUBindGroup_label(const GPUBindGroup *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUBindGroup_set_label(GPUBindGroup* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

