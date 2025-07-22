#include <webbind/XRMediaBinding.h>
#include <webbind/XRQuadLayer.h>
#include <webbind/HTMLVideoElement.h>
#include <webbind/XRCylinderLayer.h>
#include <webbind/XREquirectLayer.h>
#include <webbind/XRRigidTransform.h>
#include <webbind/XRSession.h>


DEFINE_EMLITE_TYPE(XRMediaQuadLayerInit, em_Val);


XRRigidTransform XRMediaQuadLayerInit_transform(const XRMediaQuadLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transform")));
}


void XRMediaQuadLayerInit_set_transform(XRMediaQuadLayerInit* self, XRRigidTransform * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


float XRMediaQuadLayerInit_width(const XRMediaQuadLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


void XRMediaQuadLayerInit_set_width(XRMediaQuadLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


float XRMediaQuadLayerInit_height(const XRMediaQuadLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


void XRMediaQuadLayerInit_set_height(XRMediaQuadLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(XRMediaCylinderLayerInit, em_Val);


XRRigidTransform XRMediaCylinderLayerInit_transform(const XRMediaCylinderLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transform")));
}


void XRMediaCylinderLayerInit_set_transform(XRMediaCylinderLayerInit* self, XRRigidTransform * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


float XRMediaCylinderLayerInit_radius(const XRMediaCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("radius")));
}


void XRMediaCylinderLayerInit_set_radius(XRMediaCylinderLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("radius"), em_Val_from(value));
}


float XRMediaCylinderLayerInit_centralAngle(const XRMediaCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("centralAngle")));
}


void XRMediaCylinderLayerInit_set_centralAngle(XRMediaCylinderLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("centralAngle"), em_Val_from(value));
}


float XRMediaCylinderLayerInit_aspectRatio(const XRMediaCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("aspectRatio")));
}


void XRMediaCylinderLayerInit_set_aspectRatio(XRMediaCylinderLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("aspectRatio"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(XRMediaEquirectLayerInit, em_Val);


XRRigidTransform XRMediaEquirectLayerInit_transform(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transform")));
}


void XRMediaEquirectLayerInit_set_transform(XRMediaEquirectLayerInit* self, XRRigidTransform * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transform"), em_Val_from(value));
}


float XRMediaEquirectLayerInit_radius(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("radius")));
}


void XRMediaEquirectLayerInit_set_radius(XRMediaEquirectLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("radius"), em_Val_from(value));
}


float XRMediaEquirectLayerInit_centralHorizontalAngle(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("centralHorizontalAngle")));
}


void XRMediaEquirectLayerInit_set_centralHorizontalAngle(XRMediaEquirectLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("centralHorizontalAngle"), em_Val_from(value));
}


float XRMediaEquirectLayerInit_upperVerticalAngle(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("upperVerticalAngle")));
}


void XRMediaEquirectLayerInit_set_upperVerticalAngle(XRMediaEquirectLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("upperVerticalAngle"), em_Val_from(value));
}


float XRMediaEquirectLayerInit_lowerVerticalAngle(const XRMediaEquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lowerVerticalAngle")));
}


void XRMediaEquirectLayerInit_set_lowerVerticalAngle(XRMediaEquirectLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lowerVerticalAngle"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(XRMediaBinding, em_Val);


XRMediaBinding XRMediaBinding_new(XRSession * session) {
        em_Val vv = em_Val_new(em_Val_global("XRMediaBinding") , em_Val_from(session));
        return XRMediaBinding_from_val(&vv);
      }


XRQuadLayer XRMediaBinding_createQuadLayer0(XRMediaBinding* self , HTMLVideoElement * video) {
    return em_Val_as(XRQuadLayer, em_Val_call(em_Val_as_val(self->inner), "createQuadLayer", em_Val_from(video)));
}


XRQuadLayer XRMediaBinding_createQuadLayer1(XRMediaBinding* self , HTMLVideoElement * video, XRMediaQuadLayerInit * init) {
    return em_Val_as(XRQuadLayer, em_Val_call(em_Val_as_val(self->inner), "createQuadLayer", em_Val_from(video), em_Val_from(init)));
}


XRCylinderLayer XRMediaBinding_createCylinderLayer0(XRMediaBinding* self , HTMLVideoElement * video) {
    return em_Val_as(XRCylinderLayer, em_Val_call(em_Val_as_val(self->inner), "createCylinderLayer", em_Val_from(video)));
}


XRCylinderLayer XRMediaBinding_createCylinderLayer1(XRMediaBinding* self , HTMLVideoElement * video, XRMediaCylinderLayerInit * init) {
    return em_Val_as(XRCylinderLayer, em_Val_call(em_Val_as_val(self->inner), "createCylinderLayer", em_Val_from(video), em_Val_from(init)));
}


XREquirectLayer XRMediaBinding_createEquirectLayer0(XRMediaBinding* self , HTMLVideoElement * video) {
    return em_Val_as(XREquirectLayer, em_Val_call(em_Val_as_val(self->inner), "createEquirectLayer", em_Val_from(video)));
}


XREquirectLayer XRMediaBinding_createEquirectLayer1(XRMediaBinding* self , HTMLVideoElement * video, XRMediaEquirectLayerInit * init) {
    return em_Val_as(XREquirectLayer, em_Val_call(em_Val_as_val(self->inner), "createEquirectLayer", em_Val_from(video), em_Val_from(init)));
}

