#include <webbind/XRWebGLDepthInformation.h>
#include <webbind/WebGLTexture.h>


DEFINE_EMLITE_TYPE(XRWebGLDepthInformation, XRDepthInformation);


WebGLTexture XRWebGLDepthInformation_texture(const XRWebGLDepthInformation *self) {
    return em_Val_as(WebGLTexture, em_Val_get(XRDepthInformation_as_val(self->inner), "texture"));
}


XRTextureType XRWebGLDepthInformation_textureType(const XRWebGLDepthInformation *self) {
    return em_Val_as(XRTextureType, em_Val_get(XRDepthInformation_as_val(self->inner), "textureType"));
}


unsigned long XRWebGLDepthInformation_imageIndex(const XRWebGLDepthInformation *self) {
    return em_Val_as(unsigned long, em_Val_get(XRDepthInformation_as_val(self->inner), "imageIndex"));
}

