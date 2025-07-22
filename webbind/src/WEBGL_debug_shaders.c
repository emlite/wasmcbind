#include <webbind/WEBGL_debug_shaders.h>
#include <webbind/WebGLShader.h>


DEFINE_EMLITE_TYPE(WEBGL_debug_shaders, em_Val);


jb_DOMString WEBGL_debug_shaders_getTranslatedShaderSource(WEBGL_debug_shaders* self , const WebGLShader* shader) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "getTranslatedShaderSource", em_Val_from(shader)));
}

