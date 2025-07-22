#include <webbind/GPUExternalTexture.h>


DEFINE_EMLITE_TYPE(GPUExternalTexture, em_Val);


jb_USVString GPUExternalTexture_label(const GPUExternalTexture *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPUExternalTexture_set_label(GPUExternalTexture* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}

