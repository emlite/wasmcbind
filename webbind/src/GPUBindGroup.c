#include <webbind/GPUBindGroup.h>


DEFINE_EMLITE_TYPE(GPUBindGroup, em_Val);


jb_USVString GPUBindGroup_label(const GPUBindGroup *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPUBindGroup_set_label(GPUBindGroup* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}

