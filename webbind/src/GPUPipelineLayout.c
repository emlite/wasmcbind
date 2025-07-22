#include <webbind/GPUPipelineLayout.h>


DEFINE_EMLITE_TYPE(GPUPipelineLayout, em_Val);


jb_USVString GPUPipelineLayout_label(const GPUPipelineLayout *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUPipelineLayout_set_label(GPUPipelineLayout* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

