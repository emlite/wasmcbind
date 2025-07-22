#include <webbind/XRProjectionLayer.h>
#include <webbind/XRRigidTransform.h>


DEFINE_EMLITE_TYPE(XRProjectionLayer, XRCompositionLayer);


unsigned long XRProjectionLayer_textureWidth(const XRProjectionLayer *self) {
    return em_Val_as(unsigned long, em_Val_get(XRCompositionLayer_as_val(self->inner), "textureWidth"));
}


unsigned long XRProjectionLayer_textureHeight(const XRProjectionLayer *self) {
    return em_Val_as(unsigned long, em_Val_get(XRCompositionLayer_as_val(self->inner), "textureHeight"));
}


unsigned long XRProjectionLayer_textureArrayLength(const XRProjectionLayer *self) {
    return em_Val_as(unsigned long, em_Val_get(XRCompositionLayer_as_val(self->inner), "textureArrayLength"));
}


bool XRProjectionLayer_ignoreDepthValues(const XRProjectionLayer *self) {
    return em_Val_as(bool, em_Val_get(XRCompositionLayer_as_val(self->inner), "ignoreDepthValues"));
}


float XRProjectionLayer_fixedFoveation(const XRProjectionLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), "fixedFoveation"));
}


void XRProjectionLayer_set_fixedFoveation(XRProjectionLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "fixedFoveation", value);
}


XRRigidTransform XRProjectionLayer_deltaPose(const XRProjectionLayer *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRCompositionLayer_as_val(self->inner), "deltaPose"));
}


void XRProjectionLayer_set_deltaPose(XRProjectionLayer* self, const XRRigidTransform* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "deltaPose", value);
}

