#include <webbind/GPUTextureView.h>


DEFINE_EMLITE_TYPE(GPUTextureView, em_Val);


jb_USVString GPUTextureView_label(const GPUTextureView *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPUTextureView_set_label(GPUTextureView* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}

