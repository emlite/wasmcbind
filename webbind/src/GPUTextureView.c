#include <webbind/GPUTextureView.h>

DEFINE_EMLITE_TYPE(GPUTextureView, em_Val);


jb_String GPUTextureView_label(const GPUTextureView *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUTextureView_set_label(GPUTextureView* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

