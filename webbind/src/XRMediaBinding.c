#include <webbind/XRMediaBinding.h>
#include <webbind/XRQuadLayer.h>
#include <webbind/HTMLVideoElement.h>
#include <webbind/XRCylinderLayer.h>
#include <webbind/XREquirectLayer.h>
#include <webbind/XRRigidTransform.h>
#include <webbind/XRSession.h>


DEFINE_EMLITE_TYPE(XRMediaQuadLayerInit, em_Val);


XRRigidTransform XRMediaQuadLayerInit_transform(const XRMediaQuadLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), "transform"));
}


void XRMediaQuadLayerInit_set_transform(XRMediaQuadLayerInit* self, const XRRigidTransform* value) {
    em_Val_set(em_Val_as_val(self->inner), "transform", value);
}


float XRMediaQuadLayerInit_width(const XRMediaQuadLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "width"));
}


void XRMediaQuadLayerInit_set_width(XRMediaQuadLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "width", value);
}


float XRMediaQuadLayerInit_height(const XRMediaQuadLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "height"));
}


void XRMediaQuadLayerInit_set_height(XRMediaQuadLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "height", value);
}

DEFINE_EMLITE_TYPE(XRMediaCylinderLayerInit, em_Val);


XRRigidTransform XRMediaCylinderLayerInit_transform(const XRMediaCylinderLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), "transform"));
}


void XRMediaCylinderLayerInit_set_transform(XRMediaCylinderLayerInit* self, const XRRigidTransform* value) {
    em_Val_set(em_Val_as_val(self->inner), "transform", value);
}


float XRMediaCylinderLayerInit_radius(const XRMediaCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "radius"));
}


void XRMediaCylinderLayerInit_set_radius(XRMediaCylinderLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "radius", value);
}


float XRMediaCylinderLayerInit_centralAngle(const XRMediaCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "centralAngle"));
}


void XRMediaCylinderLayerInit_set_centralAngle(XRMediaCylinderLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "centralAngle", value);
}


float XRMediaCylinderLayerInit_aspectRatio(const XRMediaCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "aspectRatio"));
}


void XRMediaCylinderLayerInit_set_aspectRatio(XRMediaCylinderLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "aspectRatio", value);
}

DEFINE_EMLITE_TYPE(XRMediaEquirectLayerInit, em_Val);


XRRigidTransform XRMediaEquirectLayerInit_transform(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), "transform"));
}


void XRMediaEquirectLayerInit_set_transform(XRMediaEquirectLayerInit* self, const XRRigidTransform* value) {
    em_Val_set(em_Val_as_val(self->inner), "transform", value);
}


float XRMediaEquirectLayerInit_radius(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "radius"));
}


void XRMediaEquirectLayerInit_set_radius(XRMediaEquirectLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "radius", value);
}


float XRMediaEquirectLayerInit_centralHorizontalAngle(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "centralHorizontalAngle"));
}


void XRMediaEquirectLayerInit_set_centralHorizontalAngle(XRMediaEquirectLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "centralHorizontalAngle", value);
}


float XRMediaEquirectLayerInit_upperVerticalAngle(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "upperVerticalAngle"));
}


void XRMediaEquirectLayerInit_set_upperVerticalAngle(XRMediaEquirectLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "upperVerticalAngle", value);
}


float XRMediaEquirectLayerInit_lowerVerticalAngle(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "lowerVerticalAngle"));
}


void XRMediaEquirectLayerInit_set_lowerVerticalAngle(XRMediaEquirectLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "lowerVerticalAngle", value);
}

DEFINE_EMLITE_TYPE(XRMediaBinding, em_Val);


XRMediaBinding XRMediaBinding_new(const XRSession* session) : em_Val(em_Val_global("XRMediaBinding").new_(em_Val_from(session))) {
        return XRMediaBinding(em_Val_new(em_Val_global("XRMediaBinding", em_Val_from(session)));
      }


XRQuadLayer XRMediaBinding_createQuadLayer(XRMediaBinding* self , const HTMLVideoElement* video) {
    return em_Val_as(XRQuadLayer, em_Val_call(em_Val_as_val(self->inner), "createQuadLayer", em_Val_from(video)));
}


XRQuadLayer XRMediaBinding_createQuadLayer(XRMediaBinding* self , const HTMLVideoElement* video, const XRMediaQuadLayerInit* init) {
    return em_Val_as(XRQuadLayer, em_Val_call(em_Val_as_val(self->inner), "createQuadLayer", em_Val_from(video), em_Val_from(init)));
}


XRCylinderLayer XRMediaBinding_createCylinderLayer(XRMediaBinding* self , const HTMLVideoElement* video) {
    return em_Val_as(XRCylinderLayer, em_Val_call(em_Val_as_val(self->inner), "createCylinderLayer", em_Val_from(video)));
}


XRCylinderLayer XRMediaBinding_createCylinderLayer(XRMediaBinding* self , const HTMLVideoElement* video, const XRMediaCylinderLayerInit* init) {
    return em_Val_as(XRCylinderLayer, em_Val_call(em_Val_as_val(self->inner), "createCylinderLayer", em_Val_from(video), em_Val_from(init)));
}


XREquirectLayer XRMediaBinding_createEquirectLayer(XRMediaBinding* self , const HTMLVideoElement* video) {
    return em_Val_as(XREquirectLayer, em_Val_call(em_Val_as_val(self->inner), "createEquirectLayer", em_Val_from(video)));
}


XREquirectLayer XRMediaBinding_createEquirectLayer(XRMediaBinding* self , const HTMLVideoElement* video, const XRMediaEquirectLayerInit* init) {
    return em_Val_as(XREquirectLayer, em_Val_call(em_Val_as_val(self->inner), "createEquirectLayer", em_Val_from(video), em_Val_from(init)));
}

