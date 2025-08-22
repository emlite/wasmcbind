#include <webcbind/WEBGL_debug_shaders.h>

#include <webcbind/WebGLShader.h>

DEFINE_EMLITE_TYPE(WEBGL_debug_shaders, em_Val);


jb_String WEBGL_debug_shaders_getTranslatedShaderSource(WEBGL_debug_shaders* self , WebGLShader * shader) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "getTranslatedShaderSource", em_Val_from(shader)));
}

