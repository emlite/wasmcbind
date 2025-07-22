#include <webbind/WEBGL_compressed_texture_astc.h>


DEFINE_EMLITE_TYPE(WEBGL_compressed_texture_astc, em_Val);


jb_Sequence WEBGL_compressed_texture_astc_getSupportedProfiles(WEBGL_compressed_texture_astc* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getSupportedProfiles"));
}

