#include <webcbind/XRQuadLayer.h>

#include <webcbind/XRSpace.h>
#include <webcbind/XRRigidTransform.h>

DEFINE_EMLITE_TYPE(XRQuadLayer, XRCompositionLayer);


XRSpace XRQuadLayer_space(const XRQuadLayer *self) {
    return em_Val_as(XRSpace, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("space")));
}


void XRQuadLayer_set_space(XRQuadLayer* self, XRSpace * value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("space"), em_Val_from(value));
}


XRRigidTransform XRQuadLayer_transform(const XRQuadLayer *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("transform")));
}


void XRQuadLayer_set_transform(XRQuadLayer* self, XRRigidTransform * value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


float XRQuadLayer_width(const XRQuadLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("width")));
}


void XRQuadLayer_set_width(XRQuadLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


float XRQuadLayer_height(const XRQuadLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("height")));
}


void XRQuadLayer_set_height(XRQuadLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


jb_Any XRQuadLayer_onredraw(const XRQuadLayer *self) {
    return em_Val_as(jb_Any, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("onredraw")));
}


void XRQuadLayer_set_onredraw(XRQuadLayer* self, jb_Any * value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("onredraw"), em_Val_from(value));
}

