#include <webbind/XRCompositionLayer.h>


DEFINE_EMLITE_TYPE(XRCompositionLayer, XRLayer);


XRLayerLayout XRCompositionLayer_layout(const XRCompositionLayer *self) {
    return em_Val_as(XRLayerLayout, em_Val_get(XRLayer_as_val(self->inner), "layout"));
}


bool XRCompositionLayer_blendTextureSourceAlpha(const XRCompositionLayer *self) {
    return em_Val_as(bool, em_Val_get(XRLayer_as_val(self->inner), "blendTextureSourceAlpha"));
}


void XRCompositionLayer_set_blendTextureSourceAlpha(XRCompositionLayer* self, bool value) {
    em_Val_set(XRLayer_as_val(self->inner), "blendTextureSourceAlpha", value);
}


bool XRCompositionLayer_forceMonoPresentation(const XRCompositionLayer *self) {
    return em_Val_as(bool, em_Val_get(XRLayer_as_val(self->inner), "forceMonoPresentation"));
}


void XRCompositionLayer_set_forceMonoPresentation(XRCompositionLayer* self, bool value) {
    em_Val_set(XRLayer_as_val(self->inner), "forceMonoPresentation", value);
}


float XRCompositionLayer_opacity(const XRCompositionLayer *self) {
    return em_Val_as(float, em_Val_get(XRLayer_as_val(self->inner), "opacity"));
}


void XRCompositionLayer_set_opacity(XRCompositionLayer* self, float value) {
    em_Val_set(XRLayer_as_val(self->inner), "opacity", value);
}


unsigned long XRCompositionLayer_mipLevels(const XRCompositionLayer *self) {
    return em_Val_as(unsigned long, em_Val_get(XRLayer_as_val(self->inner), "mipLevels"));
}


XRLayerQuality XRCompositionLayer_quality(const XRCompositionLayer *self) {
    return em_Val_as(XRLayerQuality, em_Val_get(XRLayer_as_val(self->inner), "quality"));
}


void XRCompositionLayer_set_quality(XRCompositionLayer* self, const XRLayerQuality* value) {
    em_Val_set(XRLayer_as_val(self->inner), "quality", value);
}


bool XRCompositionLayer_needsRedraw(const XRCompositionLayer *self) {
    return em_Val_as(bool, em_Val_get(XRLayer_as_val(self->inner), "needsRedraw"));
}


jb_Undefined XRCompositionLayer_destroy(XRCompositionLayer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(XRLayer_as_val(self->inner), "destroy"));
}

