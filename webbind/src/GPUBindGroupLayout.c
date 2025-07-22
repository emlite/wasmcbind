#include <webbind/GPUBindGroupLayout.h>


DEFINE_EMLITE_TYPE(GPUBindGroupLayout, em_Val);


jb_USVString GPUBindGroupLayout_label(const GPUBindGroupLayout *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPUBindGroupLayout_set_label(GPUBindGroupLayout* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}

