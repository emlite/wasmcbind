#include <webbind/XRCylinderLayer.h>

#include <webbind/XRSpace.h>
#include <webbind/XRRigidTransform.h>

DEFINE_EMLITE_TYPE(XRCylinderLayer, XRCompositionLayer);


XRSpace XRCylinderLayer_space(const XRCylinderLayer *self) {
    return em_Val_as(XRSpace, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("space")));
}


void XRCylinderLayer_set_space(XRCylinderLayer* self, XRSpace * value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("space"), em_Val_from(value));
}


XRRigidTransform XRCylinderLayer_transform(const XRCylinderLayer *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("transform")));
}


void XRCylinderLayer_set_transform(XRCylinderLayer* self, XRRigidTransform * value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


float XRCylinderLayer_radius(const XRCylinderLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("radius")));
}


void XRCylinderLayer_set_radius(XRCylinderLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("radius"), em_Val_from(value));
}


float XRCylinderLayer_centralAngle(const XRCylinderLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("centralAngle")));
}


void XRCylinderLayer_set_centralAngle(XRCylinderLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("centralAngle"), em_Val_from(value));
}


float XRCylinderLayer_aspectRatio(const XRCylinderLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("aspectRatio")));
}


void XRCylinderLayer_set_aspectRatio(XRCylinderLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("aspectRatio"), em_Val_from(value));
}


jb_Any XRCylinderLayer_onredraw(const XRCylinderLayer *self) {
    return em_Val_as(jb_Any, em_Val_get(XRCompositionLayer_as_val(self->inner), em_Val_from("onredraw")));
}


void XRCylinderLayer_set_onredraw(XRCylinderLayer* self, jb_Any * value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), em_Val_from("onredraw"), em_Val_from(value));
}

