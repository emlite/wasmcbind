#include <webbind/XRWebGLSubImage.h>
#include <webbind/WebGLTexture.h>


DEFINE_EMLITE_TYPE(XRWebGLSubImage, XRSubImage);


WebGLTexture XRWebGLSubImage_colorTexture(const XRWebGLSubImage *self) {
    return em_Val_as(WebGLTexture, em_Val_get(XRSubImage_as_val(self->inner), "colorTexture"));
}


WebGLTexture XRWebGLSubImage_depthStencilTexture(const XRWebGLSubImage *self) {
    return em_Val_as(WebGLTexture, em_Val_get(XRSubImage_as_val(self->inner), "depthStencilTexture"));
}


WebGLTexture XRWebGLSubImage_motionVectorTexture(const XRWebGLSubImage *self) {
    return em_Val_as(WebGLTexture, em_Val_get(XRSubImage_as_val(self->inner), "motionVectorTexture"));
}


unsigned long XRWebGLSubImage_imageIndex(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), "imageIndex"));
}


unsigned long XRWebGLSubImage_colorTextureWidth(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), "colorTextureWidth"));
}


unsigned long XRWebGLSubImage_colorTextureHeight(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), "colorTextureHeight"));
}


unsigned long XRWebGLSubImage_depthStencilTextureWidth(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), "depthStencilTextureWidth"));
}


unsigned long XRWebGLSubImage_depthStencilTextureHeight(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), "depthStencilTextureHeight"));
}


unsigned long XRWebGLSubImage_motionVectorTextureWidth(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), "motionVectorTextureWidth"));
}


unsigned long XRWebGLSubImage_motionVectorTextureHeight(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), "motionVectorTextureHeight"));
}

