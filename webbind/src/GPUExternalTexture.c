#include <webbind/GPUExternalTexture.h>

DEFINE_EMLITE_TYPE(GPUExternalTexture, em_Val);


jb_String GPUExternalTexture_label(const GPUExternalTexture *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUExternalTexture_set_label(GPUExternalTexture* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

