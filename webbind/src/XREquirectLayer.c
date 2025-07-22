#include <webbind/XREquirectLayer.h>
#include <webbind/XRSpace.h>
#include <webbind/XRRigidTransform.h>


DEFINE_EMLITE_TYPE(XREquirectLayer, XRCompositionLayer);


XRSpace XREquirectLayer_space(const XREquirectLayer *self) {
    return em_Val_as(XRSpace, em_Val_get(XRCompositionLayer_as_val(self->inner), "space"));
}


void XREquirectLayer_set_space(XREquirectLayer* self, const XRSpace* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "space", value);
}


XRRigidTransform XREquirectLayer_transform(const XREquirectLayer *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRCompositionLayer_as_val(self->inner), "transform"));
}


void XREquirectLayer_set_transform(XREquirectLayer* self, const XRRigidTransform* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "transform", value);
}


float XREquirectLayer_radius(const XREquirectLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), "radius"));
}


void XREquirectLayer_set_radius(XREquirectLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "radius", value);
}


float XREquirectLayer_centralHorizontalAngle(const XREquirectLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), "centralHorizontalAngle"));
}


void XREquirectLayer_set_centralHorizontalAngle(XREquirectLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "centralHorizontalAngle", value);
}


float XREquirectLayer_upperVerticalAngle(const XREquirectLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), "upperVerticalAngle"));
}


void XREquirectLayer_set_upperVerticalAngle(XREquirectLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "upperVerticalAngle", value);
}


float XREquirectLayer_lowerVerticalAngle(const XREquirectLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), "lowerVerticalAngle"));
}


void XREquirectLayer_set_lowerVerticalAngle(XREquirectLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "lowerVerticalAngle", value);
}


jb_Any XREquirectLayer_onredraw(const XREquirectLayer *self) {
    return em_Val_as(jb_Any, em_Val_get(XRCompositionLayer_as_val(self->inner), "onredraw"));
}


void XREquirectLayer_set_onredraw(XREquirectLayer* self, const jb_Any* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "onredraw", value);
}

