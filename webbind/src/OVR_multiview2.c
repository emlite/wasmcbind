#include <webbind/OVR_multiview2.h>
#include <webbind/WebGLTexture.h>


DEFINE_EMLITE_TYPE(OVR_multiview2, em_Val);


jb_Undefined OVR_multiview2_framebufferTextureMultiviewOVR(OVR_multiview2* self , jb_Any * target, jb_Any * attachment, WebGLTexture * texture, jb_Any * level, jb_Any * baseViewIndex, jb_Any * numViews) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "framebufferTextureMultiviewOVR", em_Val_from(target), em_Val_from(attachment), em_Val_from(texture), em_Val_from(level), em_Val_from(baseViewIndex), em_Val_from(numViews)));
}

