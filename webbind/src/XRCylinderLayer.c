#include <webbind/XRCylinderLayer.h>
#include <webbind/XRSpace.h>
#include <webbind/XRRigidTransform.h>


DEFINE_EMLITE_TYPE(XRCylinderLayer, XRCompositionLayer);


XRSpace XRCylinderLayer_space(const XRCylinderLayer *self) {
    return em_Val_as(XRSpace, em_Val_get(XRCompositionLayer_as_val(self->inner), "space"));
}


void XRCylinderLayer_set_space(XRCylinderLayer* self, const XRSpace* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "space", value);
}


XRRigidTransform XRCylinderLayer_transform(const XRCylinderLayer *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(XRCompositionLayer_as_val(self->inner), "transform"));
}


void XRCylinderLayer_set_transform(XRCylinderLayer* self, const XRRigidTransform* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "transform", value);
}


float XRCylinderLayer_radius(const XRCylinderLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), "radius"));
}


void XRCylinderLayer_set_radius(XRCylinderLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "radius", value);
}


float XRCylinderLayer_centralAngle(const XRCylinderLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), "centralAngle"));
}


void XRCylinderLayer_set_centralAngle(XRCylinderLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "centralAngle", value);
}


float XRCylinderLayer_aspectRatio(const XRCylinderLayer *self) {
    return em_Val_as(float, em_Val_get(XRCompositionLayer_as_val(self->inner), "aspectRatio"));
}


void XRCylinderLayer_set_aspectRatio(XRCylinderLayer* self, float value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "aspectRatio", value);
}


jb_Any XRCylinderLayer_onredraw(const XRCylinderLayer *self) {
    return em_Val_as(jb_Any, em_Val_get(XRCompositionLayer_as_val(self->inner), "onredraw"));
}


void XRCylinderLayer_set_onredraw(XRCylinderLayer* self, const jb_Any* value) {
    em_Val_set(XRCompositionLayer_as_val(self->inner), "onredraw", value);
}

