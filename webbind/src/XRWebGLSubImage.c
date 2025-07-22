#include <webbind/XRWebGLSubImage.h>
#include <webbind/WebGLTexture.h>


DEFINE_EMLITE_TYPE(XRWebGLSubImage, XRSubImage);


WebGLTexture XRWebGLSubImage_colorTexture(const XRWebGLSubImage *self) {
    return em_Val_as(WebGLTexture, em_Val_get(XRSubImage_as_val(self->inner), em_Val_from("colorTexture")));
}


WebGLTexture XRWebGLSubImage_depthStencilTexture(const XRWebGLSubImage *self) {
    return em_Val_as(WebGLTexture, em_Val_get(XRSubImage_as_val(self->inner), em_Val_from("depthStencilTexture")));
}


WebGLTexture XRWebGLSubImage_motionVectorTexture(const XRWebGLSubImage *self) {
    return em_Val_as(WebGLTexture, em_Val_get(XRSubImage_as_val(self->inner), em_Val_from("motionVectorTexture")));
}


unsigned long XRWebGLSubImage_imageIndex(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), em_Val_from("imageIndex")));
}


unsigned long XRWebGLSubImage_colorTextureWidth(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), em_Val_from("colorTextureWidth")));
}


unsigned long XRWebGLSubImage_colorTextureHeight(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), em_Val_from("colorTextureHeight")));
}


unsigned long XRWebGLSubImage_depthStencilTextureWidth(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), em_Val_from("depthStencilTextureWidth")));
}


unsigned long XRWebGLSubImage_depthStencilTextureHeight(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), em_Val_from("depthStencilTextureHeight")));
}


unsigned long XRWebGLSubImage_motionVectorTextureWidth(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), em_Val_from("motionVectorTextureWidth")));
}


unsigned long XRWebGLSubImage_motionVectorTextureHeight(const XRWebGLSubImage *self) {
    return em_Val_as(unsigned long, em_Val_get(XRSubImage_as_val(self->inner), em_Val_from("motionVectorTextureHeight")));
}

