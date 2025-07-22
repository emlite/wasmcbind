#include <webbind/XRQuadLayer.h>
#include <webbind/XRSpace.h>
#include <webbind/XRRigidTransform.h>


DEFINE_EMLITE_TYPE(XRQuadLayer, XRCompositionLayer);


XRSpace XRQuadLayer_space(const XRQuadLayer *self) {
    return em_Val_as(XRSpace, em_Val_get(XRCompositionLayer_as_val(self->inner), "space"));
}


void XRQuadLayer_set_space(XRQuadLayer* self, const XRSpace* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "space", value);
}


XRRigidTransform XRQuadLayer_transform(const XRQuadLayer *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRCompositionLayer_as_val(self->inner), "transform"));
}


void XRQuadLayer_set_transform(XRQuadLayer* self, const XRRigidTransform* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "transform", value);
}


float XRQuadLayer_width(const XRQuadLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), "width"));
}


void XRQuadLayer_set_width(XRQuadLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "width", value);
}


float XRQuadLayer_height(const XRQuadLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), "height"));
}


void XRQuadLayer_set_height(XRQuadLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "height", value);
}


jb_Any XRQuadLayer_onredraw(const XRQuadLayer *self) {
    return em_Val_as(jb_Any, em_Val_get(XRCompositionLayer_as_val(self->inner), "onredraw"));
}


void XRQuadLayer_set_onredraw(XRQuadLayer* self, const jb_Any* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "onredraw", value);
}

