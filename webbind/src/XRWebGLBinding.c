#include <webbind/XRWebGLBinding.h>
#include <webbind/XRProjectionLayer.h>
#include <webbind/XRQuadLayer.h>
#include <webbind/XRCylinderLayer.h>
#include <webbind/XREquirectLayer.h>
#include <webbind/XRCubeLayer.h>
#include <webbind/XRWebGLSubImage.h>
#include <webbind/XRCompositionLayer.h>
#include <webbind/XRFrame.h>
#include <webbind/XRView.h>
#include <webbind/WebGLTexture.h>
#include <webbind/XRCamera.h>
#include <webbind/XRWebGLDepthInformation.h>
#include <webbind/XRLightProbe.h>
#include <webbind/XRRigidTransform.h>
#include <webbind/DOMPointReadOnly.h>
#include <webbind/XRSession.h>


DEFINE_EMLITE_TYPE(XRProjectionLayerInit, em_Val);


XRTextureType XRProjectionLayerInit_textureType(const XRProjectionLayerInit *self) {
    return em_Val_as(XRTextureType, em_Val_get(em_Val_as_val(self->inner), "textureType"));
}


void XRProjectionLayerInit_set_textureType(XRProjectionLayerInit* self, const XRTextureType* value) {
    em_Val_set(em_Val_as_val(self->inner), "textureType", value);
}


jb_Any XRProjectionLayerInit_colorFormat(const XRProjectionLayerInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "colorFormat"));
}


void XRProjectionLayerInit_set_colorFormat(XRProjectionLayerInit* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "colorFormat", value);
}


jb_Any XRProjectionLayerInit_depthFormat(const XRProjectionLayerInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "depthFormat"));
}


void XRProjectionLayerInit_set_depthFormat(XRProjectionLayerInit* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "depthFormat", value);
}


double XRProjectionLayerInit_scaleFactor(const XRProjectionLayerInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "scaleFactor"));
}


void XRProjectionLayerInit_set_scaleFactor(XRProjectionLayerInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "scaleFactor", value);
}


bool XRProjectionLayerInit_clearOnAccess(const XRProjectionLayerInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "clearOnAccess"));
}


void XRProjectionLayerInit_set_clearOnAccess(XRProjectionLayerInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "clearOnAccess", value);
}

DEFINE_EMLITE_TYPE(XRQuadLayerInit, em_Val);


XRTextureType XRQuadLayerInit_textureType(const XRQuadLayerInit *self) {
    return em_Val_as(XRTextureType, em_Val_get(em_Val_as_val(self->inner), "textureType"));
}


void XRQuadLayerInit_set_textureType(XRQuadLayerInit* self, const XRTextureType* value) {
    em_Val_set(em_Val_as_val(self->inner), "textureType", value);
}


XRRigidTransform XRQuadLayerInit_transform(const XRQuadLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), "transform"));
}


void XRQuadLayerInit_set_transform(XRQuadLayerInit* self, const XRRigidTransform* value) {
    em_Val_set(em_Val_as_val(self->inner), "transform", value);
}


float XRQuadLayerInit_width(const XRQuadLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "width"));
}


void XRQuadLayerInit_set_width(XRQuadLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "width", value);
}


float XRQuadLayerInit_height(const XRQuadLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "height"));
}


void XRQuadLayerInit_set_height(XRQuadLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "height", value);
}

DEFINE_EMLITE_TYPE(XRCylinderLayerInit, em_Val);


XRTextureType XRCylinderLayerInit_textureType(const XRCylinderLayerInit *self) {
    return em_Val_as(XRTextureType, em_Val_get(em_Val_as_val(self->inner), "textureType"));
}


void XRCylinderLayerInit_set_textureType(XRCylinderLayerInit* self, const XRTextureType* value) {
    em_Val_set(em_Val_as_val(self->inner), "textureType", value);
}


XRRigidTransform XRCylinderLayerInit_transform(const XRCylinderLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), "transform"));
}


void XRCylinderLayerInit_set_transform(XRCylinderLayerInit* self, const XRRigidTransform* value) {
    em_Val_set(em_Val_as_val(self->inner), "transform", value);
}


float XRCylinderLayerInit_radius(const XRCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "radius"));
}


void XRCylinderLayerInit_set_radius(XRCylinderLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "radius", value);
}


float XRCylinderLayerInit_centralAngle(const XRCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "centralAngle"));
}


void XRCylinderLayerInit_set_centralAngle(XRCylinderLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "centralAngle", value);
}


float XRCylinderLayerInit_aspectRatio(const XRCylinderLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "aspectRatio"));
}


void XRCylinderLayerInit_set_aspectRatio(XRCylinderLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "aspectRatio", value);
}

DEFINE_EMLITE_TYPE(XREquirectLayerInit, em_Val);


XRTextureType XREquirectLayerInit_textureType(const XREquirectLayerInit *self) {
    return em_Val_as(XRTextureType, em_Val_get(em_Val_as_val(self->inner), "textureType"));
}


void XREquirectLayerInit_set_textureType(XREquirectLayerInit* self, const XRTextureType* value) {
    em_Val_set(em_Val_as_val(self->inner), "textureType", value);
}


XRRigidTransform XREquirectLayerInit_transform(const XREquirectLayerInit *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), "transform"));
}


void XREquirectLayerInit_set_transform(XREquirectLayerInit* self, const XRRigidTransform* value) {
    em_Val_set(em_Val_as_val(self->inner), "transform", value);
}


float XREquirectLayerInit_radius(const XREquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "radius"));
}


void XREquirectLayerInit_set_radius(XREquirectLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "radius", value);
}


float XREquirectLayerInit_centralHorizontalAngle(const XREquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "centralHorizontalAngle"));
}


void XREquirectLayerInit_set_centralHorizontalAngle(XREquirectLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "centralHorizontalAngle", value);
}


float XREquirectLayerInit_upperVerticalAngle(const XREquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "upperVerticalAngle"));
}


void XREquirectLayerInit_set_upperVerticalAngle(XREquirectLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "upperVerticalAngle", value);
}


float XREquirectLayerInit_lowerVerticalAngle(const XREquirectLayerInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "lowerVerticalAngle"));
}


void XREquirectLayerInit_set_lowerVerticalAngle(XREquirectLayerInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), "lowerVerticalAngle", value);
}

DEFINE_EMLITE_TYPE(XRCubeLayerInit, em_Val);


DOMPointReadOnly XRCubeLayerInit_orientation(const XRCubeLayerInit *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), "orientation"));
}


void XRCubeLayerInit_set_orientation(XRCubeLayerInit* self, const DOMPointReadOnly* value) {
    em_Val_set(em_Val_as_val(self->inner), "orientation", value);
}

DEFINE_EMLITE_TYPE(XRWebGLBinding, em_Val);


XRWebGLBinding XRWebGLBinding_new(const XRSession* session, const jb_Any* context) : em_Val(em_Val_global("XRWebGLBinding").new_(em_Val_from(session), em_Val_from(context))) {
        return XRWebGLBinding(em_Val_new(em_Val_global("XRWebGLBinding", em_Val_from(session), em_Val_from(context)));
      }


double XRWebGLBinding_nativeProjectionScaleFactor(const XRWebGLBinding *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "nativeProjectionScaleFactor"));
}


bool XRWebGLBinding_usesDepthValues(const XRWebGLBinding *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "usesDepthValues"));
}


XRProjectionLayer XRWebGLBinding_createProjectionLayer(XRWebGLBinding* self ) {
    return em_Val_as(XRProjectionLayer, em_Val_call(em_Val_as_val(self->inner), "createProjectionLayer"));
}


XRProjectionLayer XRWebGLBinding_createProjectionLayer(XRWebGLBinding* self , const XRProjectionLayerInit* init) {
    return em_Val_as(XRProjectionLayer, em_Val_call(em_Val_as_val(self->inner), "createProjectionLayer", em_Val_from(init)));
}


XRQuadLayer XRWebGLBinding_createQuadLayer(XRWebGLBinding* self ) {
    return em_Val_as(XRQuadLayer, em_Val_call(em_Val_as_val(self->inner), "createQuadLayer"));
}


XRQuadLayer XRWebGLBinding_createQuadLayer(XRWebGLBinding* self , const XRQuadLayerInit* init) {
    return em_Val_as(XRQuadLayer, em_Val_call(em_Val_as_val(self->inner), "createQuadLayer", em_Val_from(init)));
}


XRCylinderLayer XRWebGLBinding_createCylinderLayer(XRWebGLBinding* self ) {
    return em_Val_as(XRCylinderLayer, em_Val_call(em_Val_as_val(self->inner), "createCylinderLayer"));
}


XRCylinderLayer XRWebGLBinding_createCylinderLayer(XRWebGLBinding* self , const XRCylinderLayerInit* init) {
    return em_Val_as(XRCylinderLayer, em_Val_call(em_Val_as_val(self->inner), "createCylinderLayer", em_Val_from(init)));
}


XREquirectLayer XRWebGLBinding_createEquirectLayer(XRWebGLBinding* self ) {
    return em_Val_as(XREquirectLayer, em_Val_call(em_Val_as_val(self->inner), "createEquirectLayer"));
}


XREquirectLayer XRWebGLBinding_createEquirectLayer(XRWebGLBinding* self , const XREquirectLayerInit* init) {
    return em_Val_as(XREquirectLayer, em_Val_call(em_Val_as_val(self->inner), "createEquirectLayer", em_Val_from(init)));
}


XRCubeLayer XRWebGLBinding_createCubeLayer(XRWebGLBinding* self ) {
    return em_Val_as(XRCubeLayer, em_Val_call(em_Val_as_val(self->inner), "createCubeLayer"));
}


XRCubeLayer XRWebGLBinding_createCubeLayer(XRWebGLBinding* self , const XRCubeLayerInit* init) {
    return em_Val_as(XRCubeLayer, em_Val_call(em_Val_as_val(self->inner), "createCubeLayer", em_Val_from(init)));
}


XRWebGLSubImage XRWebGLBinding_getSubImage(XRWebGLBinding* self , const XRCompositionLayer* layer, const XRFrame* frame) {
    return em_Val_as(XRWebGLSubImage, em_Val_call(em_Val_as_val(self->inner), "getSubImage", em_Val_from(layer), em_Val_from(frame)));
}


XRWebGLSubImage XRWebGLBinding_getSubImage(XRWebGLBinding* self , const XRCompositionLayer* layer, const XRFrame* frame, const XREye* eye) {
    return em_Val_as(XRWebGLSubImage, em_Val_call(em_Val_as_val(self->inner), "getSubImage", em_Val_from(layer), em_Val_from(frame), em_Val_from(eye)));
}


XRWebGLSubImage XRWebGLBinding_getViewSubImage(XRWebGLBinding* self , const XRProjectionLayer* layer, const XRView* view) {
    return em_Val_as(XRWebGLSubImage, em_Val_call(em_Val_as_val(self->inner), "getViewSubImage", em_Val_from(layer), em_Val_from(view)));
}


jb_Undefined XRWebGLBinding_foveateBoundTexture(XRWebGLBinding* self , const jb_Any* target, float fixed_foveation) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "foveateBoundTexture", em_Val_from(target), em_Val_from(fixed_foveation)));
}


WebGLTexture XRWebGLBinding_getCameraImage(XRWebGLBinding* self , const XRCamera* camera) {
    return em_Val_as(WebGLTexture, em_Val_call(em_Val_as_val(self->inner), "getCameraImage", em_Val_from(camera)));
}


XRWebGLDepthInformation XRWebGLBinding_getDepthInformation(XRWebGLBinding* self , const XRView* view) {
    return em_Val_as(XRWebGLDepthInformation, em_Val_call(em_Val_as_val(self->inner), "getDepthInformation", em_Val_from(view)));
}


WebGLTexture XRWebGLBinding_getReflectionCubeMap(XRWebGLBinding* self , const XRLightProbe* lightProbe) {
    return em_Val_as(WebGLTexture, em_Val_call(em_Val_as_val(self->inner), "getReflectionCubeMap", em_Val_from(lightProbe)));
}

