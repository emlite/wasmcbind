#include <webbind/XRWebGLLayer.h>
#include <webbind/WebGLFramebuffer.h>
#include <webbind/XRViewport.h>
#include <webbind/XRView.h>
#include <webbind/XRSession.h>


DEFINE_EMLITE_TYPE(XRWebGLLayer, XRLayer);


XRWebGLLayer XRWebGLLayer_new(const XRSession* session, const jb_Any* context) : XRLayer(em_Val_global("XRWebGLLayer").new_(em_Val_from(session), em_Val_from(context))) {
        return XRWebGLLayer(em_Val_new(em_Val_global("XRWebGLLayer", em_Val_from(session), em_Val_from(context)));
      }


XRWebGLLayer XRWebGLLayer_new(const XRSession* session, const jb_Any* context, const jb_Any* layerInit) : XRLayer(em_Val_global("XRWebGLLayer").new_(em_Val_from(session), em_Val_from(context), em_Val_from(layerInit))) {
        return XRWebGLLayer(em_Val_new(em_Val_global("XRWebGLLayer", em_Val_from(session), em_Val_from(context), em_Val_from(layerInit)));
      }


bool XRWebGLLayer_antialias(const XRWebGLLayer *self) {
    return em_Val_as(bool, em_Val_get(XRLayer_as_val(self->inner), "antialias"));
}


bool XRWebGLLayer_ignoreDepthValues(const XRWebGLLayer *self) {
    return em_Val_as(bool, em_Val_get(XRLayer_as_val(self->inner), "ignoreDepthValues"));
}


float XRWebGLLayer_fixedFoveation(const XRWebGLLayer *self) {
    return em_Val_as(float, em_Val_get(XRLayer_as_val(self->inner), "fixedFoveation"));
}


void XRWebGLLayer_set_fixedFoveation(XRWebGLLayer* self, float value) {
    em_Val_set(XRLayer_as_val(self->inner), "fixedFoveation", value);
}


WebGLFramebuffer XRWebGLLayer_framebuffer(const XRWebGLLayer *self) {
    return em_Val_as(WebGLFramebuffer, em_Val_get(XRLayer_as_val(self->inner), "framebuffer"));
}


unsigned long XRWebGLLayer_framebufferWidth(const XRWebGLLayer *self) {
    return em_Val_as(unsigned long, em_Val_get(XRLayer_as_val(self->inner), "framebufferWidth"));
}


unsigned long XRWebGLLayer_framebufferHeight(const XRWebGLLayer *self) {
    return em_Val_as(unsigned long, em_Val_get(XRLayer_as_val(self->inner), "framebufferHeight"));
}


XRViewport XRWebGLLayer_getViewport(XRWebGLLayer* self , const XRView* view) {
    return em_Val_as(XRViewport, em_Val_call(XRLayer_as_val(self->inner), "getViewport", em_Val_from(view)));
}


double XRWebGLLayer_getNativeFramebufferScaleFactor(XRWebGLLayer* self , const XRSession* session) {
    return em_Val_as(double, em_Val_call(em_Val_global("xrwebgllayer"), "getNativeFramebufferScaleFactor", em_Val_from(session)));
}

