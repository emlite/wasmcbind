#include <webcbind/XREquirectLayer.h>

#include <webcbind/XRSpace.h>
#include <webcbind/XRRigidTransform.h>

DEFINE_EMLITE_TYPE(XREquirectLayer, XRCompositionLayer);


XRSpace XREquirectLayer_space(const XREquirectLayer *self) {
    return em_Val_as(XRSpace, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("space")));
}


void XREquirectLayer_set_space(XREquirectLayer* self, XRSpace * value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("space"), em_Val_from(value));
}


XRRigidTransform XREquirectLayer_transform(const XREquirectLayer *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("transform")));
}


void XREquirectLayer_set_transform(XREquirectLayer* self, XRRigidTransform * value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


float XREquirectLayer_radius(const XREquirectLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("radius")));
}


void XREquirectLayer_set_radius(XREquirectLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("radius"), em_Val_from(value));
}


float XREquirectLayer_centralHorizontalAngle(const XREquirectLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("centralHorizontalAngle")));
}


void XREquirectLayer_set_centralHorizontalAngle(XREquirectLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("centralHorizontalAngle"), em_Val_from(value));
}


float XREquirectLayer_upperVerticalAngle(const XREquirectLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("upperVerticalAngle")));
}


void XREquirectLayer_set_upperVerticalAngle(XREquirectLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("upperVerticalAngle"), em_Val_from(value));
}


float XREquirectLayer_lowerVerticalAngle(const XREquirectLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("lowerVerticalAngle")));
}


void XREquirectLayer_set_lowerVerticalAngle(XREquirectLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("lowerVerticalAngle"), em_Val_from(value));
}


jb_Any XREquirectLayer_onredraw(const XREquirectLayer *self) {
    return em_Val_as(jb_Any, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("onredraw")));
}


void XREquirectLayer_set_onredraw(XREquirectLayer* self, jb_Any * value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("onredraw"), em_Val_from(value));
}

