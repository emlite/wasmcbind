#include <webbind/GPUBindGroupLayout.h>

DEFINE_EMLITE_TYPE(GPUBindGroupLayout, em_Val);


jb_String GPUBindGroupLayout_label(const GPUBindGroupLayout *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUBindGroupLayout_set_label(GPUBindGroupLayout* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

