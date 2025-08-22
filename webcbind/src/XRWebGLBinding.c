#include <webcbind/XRWebGLBinding.h>

#include <webcbind/XRSession.h>
#include <webcbind/XRProjectionLayer.h>
#include <webcbind/XRProjectionLayerInit.h>
#include <webcbind/XRQuadLayer.h>
#include <webcbind/XRQuadLayerInit.h>
#include <webcbind/XRCylinderLayer.h>
#include <webcbind/XRCylinderLayerInit.h>
#include <webcbind/XREquirectLayer.h>
#include <webcbind/XREquirectLayerInit.h>
#include <webcbind/XRCubeLayer.h>
#include <webcbind/XRCubeLayerInit.h>
#include <webcbind/XRWebGLSubImage.h>
#include <webcbind/XRCompositionLayer.h>
#include <webcbind/XRFrame.h>
#include <webcbind/XRView.h>
#include <webcbind/WebGLTexture.h>
#include <webcbind/XRCamera.h>
#include <webcbind/XRWebGLDepthInformation.h>
#include <webcbind/XRLightProbe.h>

DEFINE_EMLITE_TYPE(XRWebGLBinding, em_Val);


XRWebGLBinding XRWebGLBinding_new(XRSession * session, jb_Any * context) {
        em_Val vv = em_Val_new(em_Val_global("XRWebGLBinding") , em_Val_from(session), em_Val_from(context));
        return XRWebGLBinding_from_val(&vv);
      }


double XRWebGLBinding_nativeProjectionScaleFactor(const XRWebGLBinding *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("nativeProjectionScaleFactor")));
}


bool XRWebGLBinding_usesDepthValues(const XRWebGLBinding *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usesDepthValues")));
}


XRProjectionLayer XRWebGLBinding_createProjectionLayer0(XRWebGLBinding* self ) {
    return em_Val_as(XRProjectionLayer, em_Val_call(em_Val_as_val(self->inner), "createProjectionLayer"));
}


XRProjectionLayer XRWebGLBinding_createProjectionLayer1(XRWebGLBinding* self , XRProjectionLayerInit * init) {
    return em_Val_as(XRProjectionLayer, em_Val_call(em_Val_as_val(self->inner), "createProjectionLayer", em_Val_from(init)));
}


XRQuadLayer XRWebGLBinding_createQuadLayer0(XRWebGLBinding* self ) {
    return em_Val_as(XRQuadLayer, em_Val_call(em_Val_as_val(self->inner), "createQuadLayer"));
}


XRQuadLayer XRWebGLBinding_createQuadLayer1(XRWebGLBinding* self , XRQuadLayerInit * init) {
    return em_Val_as(XRQuadLayer, em_Val_call(em_Val_as_val(self->inner), "createQuadLayer", em_Val_from(init)));
}


XRCylinderLayer XRWebGLBinding_createCylinderLayer0(XRWebGLBinding* self ) {
    return em_Val_as(XRCylinderLayer, em_Val_call(em_Val_as_val(self->inner), "createCylinderLayer"));
}


XRCylinderLayer XRWebGLBinding_createCylinderLayer1(XRWebGLBinding* self , XRCylinderLayerInit * init) {
    return em_Val_as(XRCylinderLayer, em_Val_call(em_Val_as_val(self->inner), "createCylinderLayer", em_Val_from(init)));
}


XREquirectLayer XRWebGLBinding_createEquirectLayer0(XRWebGLBinding* self ) {
    return em_Val_as(XREquirectLayer, em_Val_call(em_Val_as_val(self->inner), "createEquirectLayer"));
}


XREquirectLayer XRWebGLBinding_createEquirectLayer1(XRWebGLBinding* self , XREquirectLayerInit * init) {
    return em_Val_as(XREquirectLayer, em_Val_call(em_Val_as_val(self->inner), "createEquirectLayer", em_Val_from(init)));
}


XRCubeLayer XRWebGLBinding_createCubeLayer0(XRWebGLBinding* self ) {
    return em_Val_as(XRCubeLayer, em_Val_call(em_Val_as_val(self->inner), "createCubeLayer"));
}


XRCubeLayer XRWebGLBinding_createCubeLayer1(XRWebGLBinding* self , XRCubeLayerInit * init) {
    return em_Val_as(XRCubeLayer, em_Val_call(em_Val_as_val(self->inner), "createCubeLayer", em_Val_from(init)));
}


XRWebGLSubImage XRWebGLBinding_getSubImage0(XRWebGLBinding* self , XRCompositionLayer * layer, XRFrame * frame) {
    return em_Val_as(XRWebGLSubImage, em_Val_call(em_Val_as_val(self->inner), "getSubImage", em_Val_from(layer), em_Val_from(frame)));
}


XRWebGLSubImage XRWebGLBinding_getSubImage1(XRWebGLBinding* self , XRCompositionLayer * layer, XRFrame * frame, XREye * eye) {
    return em_Val_as(XRWebGLSubImage, em_Val_call(em_Val_as_val(self->inner), "getSubImage", em_Val_from(layer), em_Val_from(frame), em_Val_from(eye)));
}


XRWebGLSubImage XRWebGLBinding_getViewSubImage(XRWebGLBinding* self , XRProjectionLayer * layer, XRView * view) {
    return em_Val_as(XRWebGLSubImage, em_Val_call(em_Val_as_val(self->inner), "getViewSubImage", em_Val_from(layer), em_Val_from(view)));
}


jb_Undefined XRWebGLBinding_foveateBoundTexture(XRWebGLBinding* self , jb_Any * target, float fixed_foveation) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "foveateBoundTexture", em_Val_from(target), em_Val_from(fixed_foveation)));
}


WebGLTexture XRWebGLBinding_getCameraImage(XRWebGLBinding* self , XRCamera * camera) {
    return em_Val_as(WebGLTexture, em_Val_call(em_Val_as_val(self->inner), "getCameraImage", em_Val_from(camera)));
}


XRWebGLDepthInformation XRWebGLBinding_getDepthInformation(XRWebGLBinding* self , XRView * view) {
    return em_Val_as(XRWebGLDepthInformation, em_Val_call(em_Val_as_val(self->inner), "getDepthInformation", em_Val_from(view)));
}


WebGLTexture XRWebGLBinding_getReflectionCubeMap(XRWebGLBinding* self , XRLightProbe * lightProbe) {
    return em_Val_as(WebGLTexture, em_Val_call(em_Val_as_val(self->inner), "getReflectionCubeMap", em_Val_from(lightProbe)));
}

