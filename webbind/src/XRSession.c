#include <webbind/XRSession.h>
#include <webbind/XRRenderState.h>
#include <webbind/XRInputSourceArray.h>
#include <webbind/XRReferenceSpace.h>
#include <webbind/XRAnchor.h>
#include <webbind/XRHitTestSource.h>
#include <webbind/XRTransientInputHitTestSource.h>
#include <webbind/XRLightProbe.h>
#include <webbind/XRRay.h>
#include <webbind/XRWebGLLayer.h>
#include <webbind/XRRigidTransform.h>


DEFINE_EMLITE_TYPE(XRRenderStateInit, em_Val);


double XRRenderStateInit_depthNear(const XRRenderStateInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "depthNear"));
}


void XRRenderStateInit_set_depthNear(XRRenderStateInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "depthNear", value);
}


double XRRenderStateInit_depthFar(const XRRenderStateInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "depthFar"));
}


void XRRenderStateInit_set_depthFar(XRRenderStateInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "depthFar", value);
}


bool XRRenderStateInit_passthroughFullyObscured(const XRRenderStateInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "passthroughFullyObscured"));
}


void XRRenderStateInit_set_passthroughFullyObscured(XRRenderStateInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "passthroughFullyObscured", value);
}


double XRRenderStateInit_inlineVerticalFieldOfView(const XRRenderStateInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "inlineVerticalFieldOfView"));
}


void XRRenderStateInit_set_inlineVerticalFieldOfView(XRRenderStateInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "inlineVerticalFieldOfView", value);
}


XRWebGLLayer XRRenderStateInit_baseLayer(const XRRenderStateInit *self) {
    return em_Val_as(XRWebGLLayer, em_Val_get(em_Val_as_val(self->inner), "baseLayer"));
}


void XRRenderStateInit_set_baseLayer(XRRenderStateInit* self, const XRWebGLLayer* value) {
    em_Val_set(em_Val_as_val(self->inner), "baseLayer", value);
}


jb_Sequence XRRenderStateInit_layers(const XRRenderStateInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "layers"));
}


void XRRenderStateInit_set_layers(XRRenderStateInit* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "layers", value);
}

DEFINE_EMLITE_TYPE(XRDOMOverlayState, em_Val);


XRDOMOverlayType XRDOMOverlayState_type(const XRDOMOverlayState *self) {
    return em_Val_as(XRDOMOverlayType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void XRDOMOverlayState_set_type(XRDOMOverlayState* self, const XRDOMOverlayType* value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}

DEFINE_EMLITE_TYPE(XRHitTestOptionsInit, em_Val);


XRSpace XRHitTestOptionsInit_space(const XRHitTestOptionsInit *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), "space"));
}


void XRHitTestOptionsInit_set_space(XRHitTestOptionsInit* self, const XRSpace* value) {
    em_Val_set(em_Val_as_val(self->inner), "space", value);
}


jb_Sequence XRHitTestOptionsInit_entityTypes(const XRHitTestOptionsInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "entityTypes"));
}


void XRHitTestOptionsInit_set_entityTypes(XRHitTestOptionsInit* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "entityTypes", value);
}


XRRay XRHitTestOptionsInit_offsetRay(const XRHitTestOptionsInit *self) {
    return em_Val_as(XRRay, em_Val_get(em_Val_as_val(self->inner), "offsetRay"));
}


void XRHitTestOptionsInit_set_offsetRay(XRHitTestOptionsInit* self, const XRRay* value) {
    em_Val_set(em_Val_as_val(self->inner), "offsetRay", value);
}

DEFINE_EMLITE_TYPE(XRTransientInputHitTestOptionsInit, em_Val);


jb_DOMString XRTransientInputHitTestOptionsInit_profile(const XRTransientInputHitTestOptionsInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "profile"));
}


void XRTransientInputHitTestOptionsInit_set_profile(XRTransientInputHitTestOptionsInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "profile", value);
}


jb_Sequence XRTransientInputHitTestOptionsInit_entityTypes(const XRTransientInputHitTestOptionsInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "entityTypes"));
}


void XRTransientInputHitTestOptionsInit_set_entityTypes(XRTransientInputHitTestOptionsInit* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "entityTypes", value);
}


XRRay XRTransientInputHitTestOptionsInit_offsetRay(const XRTransientInputHitTestOptionsInit *self) {
    return em_Val_as(XRRay, em_Val_get(em_Val_as_val(self->inner), "offsetRay"));
}


void XRTransientInputHitTestOptionsInit_set_offsetRay(XRTransientInputHitTestOptionsInit* self, const XRRay* value) {
    em_Val_set(em_Val_as_val(self->inner), "offsetRay", value);
}

DEFINE_EMLITE_TYPE(XRLightProbeInit, em_Val);


XRReflectionFormat XRLightProbeInit_reflectionFormat(const XRLightProbeInit *self) {
    return em_Val_as(XRReflectionFormat, em_Val_get(em_Val_as_val(self->inner), "reflectionFormat"));
}


void XRLightProbeInit_set_reflectionFormat(XRLightProbeInit* self, const XRReflectionFormat* value) {
    em_Val_set(em_Val_as_val(self->inner), "reflectionFormat", value);
}

DEFINE_EMLITE_TYPE(XRSession, EventTarget);


XRVisibilityState XRSession_visibilityState(const XRSession *self) {
    return em_Val_as(XRVisibilityState, em_Val_get(EventTarget_as_val(self->inner), "visibilityState"));
}


float XRSession_frameRate(const XRSession *self) {
    return em_Val_as(float, em_Val_get(EventTarget_as_val(self->inner), "frameRate"));
}


jb_Float32Array XRSession_supportedFrameRates(const XRSession *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(EventTarget_as_val(self->inner), "supportedFrameRates"));
}


XRRenderState XRSession_renderState(const XRSession *self) {
    return em_Val_as(XRRenderState, em_Val_get(EventTarget_as_val(self->inner), "renderState"));
}


XRInputSourceArray XRSession_inputSources(const XRSession *self) {
    return em_Val_as(XRInputSourceArray, em_Val_get(EventTarget_as_val(self->inner), "inputSources"));
}


XRInputSourceArray XRSession_trackedSources(const XRSession *self) {
    return em_Val_as(XRInputSourceArray, em_Val_get(EventTarget_as_val(self->inner), "trackedSources"));
}


jb_FrozenArray XRSession_enabledFeatures(const XRSession *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(EventTarget_as_val(self->inner), "enabledFeatures"));
}


bool XRSession_isSystemKeyboardSupported(const XRSession *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "isSystemKeyboardSupported"));
}


jb_Undefined XRSession_updateRenderState(XRSession* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "updateRenderState"));
}


jb_Undefined XRSession_updateRenderState(XRSession* self , const XRRenderStateInit* state) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "updateRenderState", em_Val_from(state)));
}


jb_Promise XRSession_updateTargetFrameRate(XRSession* self , float rate) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "updateTargetFrameRate", em_Val_from(rate)));
}


jb_Promise XRSession_requestReferenceSpace(XRSession* self , const XRReferenceSpaceType* type) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestReferenceSpace", em_Val_from(type)));
}


unsigned long XRSession_requestAnimationFrame(XRSession* self , const jb_Function* callback) {
    return em_Val_as(unsigned long, em_Val_call(EventTarget_as_val(self->inner), "requestAnimationFrame", em_Val_from(callback)));
}


jb_Undefined XRSession_cancelAnimationFrame(XRSession* self , unsigned long handle) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "cancelAnimationFrame", em_Val_from(handle)));
}


jb_Promise XRSession_end(XRSession* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "end"));
}


jb_Any XRSession_onend(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onend"));
}


void XRSession_set_onend(XRSession* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onend", value);
}


jb_Any XRSession_oninputsourceschange(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oninputsourceschange"));
}


void XRSession_set_oninputsourceschange(XRSession* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oninputsourceschange", value);
}


jb_Any XRSession_onselect(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onselect"));
}


void XRSession_set_onselect(XRSession* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onselect", value);
}


jb_Any XRSession_onselectstart(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onselectstart"));
}


void XRSession_set_onselectstart(XRSession* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onselectstart", value);
}


jb_Any XRSession_onselectend(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onselectend"));
}


void XRSession_set_onselectend(XRSession* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onselectend", value);
}


jb_Any XRSession_onsqueeze(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onsqueeze"));
}


void XRSession_set_onsqueeze(XRSession* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onsqueeze", value);
}


jb_Any XRSession_onsqueezestart(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onsqueezestart"));
}


void XRSession_set_onsqueezestart(XRSession* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onsqueezestart", value);
}


jb_Any XRSession_onsqueezeend(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onsqueezeend"));
}


void XRSession_set_onsqueezeend(XRSession* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onsqueezeend", value);
}


jb_Any XRSession_onvisibilitychange(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onvisibilitychange"));
}


void XRSession_set_onvisibilitychange(XRSession* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onvisibilitychange", value);
}


jb_Any XRSession_onframeratechange(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onframeratechange"));
}


void XRSession_set_onframeratechange(XRSession* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onframeratechange", value);
}


jb_FrozenArray XRSession_persistentAnchors(const XRSession *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(EventTarget_as_val(self->inner), "persistentAnchors"));
}


jb_Promise XRSession_restorePersistentAnchor(XRSession* self , const jb_DOMString* uuid) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "restorePersistentAnchor", em_Val_from(uuid)));
}


jb_Promise XRSession_deletePersistentAnchor(XRSession* self , const jb_DOMString* uuid) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "deletePersistentAnchor", em_Val_from(uuid)));
}


XREnvironmentBlendMode XRSession_environmentBlendMode(const XRSession *self) {
    return em_Val_as(XREnvironmentBlendMode, em_Val_get(EventTarget_as_val(self->inner), "environmentBlendMode"));
}


XRInteractionMode XRSession_interactionMode(const XRSession *self) {
    return em_Val_as(XRInteractionMode, em_Val_get(EventTarget_as_val(self->inner), "interactionMode"));
}


XRDepthUsage XRSession_depthUsage(const XRSession *self) {
    return em_Val_as(XRDepthUsage, em_Val_get(EventTarget_as_val(self->inner), "depthUsage"));
}


XRDepthDataFormat XRSession_depthDataFormat(const XRSession *self) {
    return em_Val_as(XRDepthDataFormat, em_Val_get(EventTarget_as_val(self->inner), "depthDataFormat"));
}


XRDepthType XRSession_depthType(const XRSession *self) {
    return em_Val_as(XRDepthType, em_Val_get(EventTarget_as_val(self->inner), "depthType"));
}


bool XRSession_depthActive(const XRSession *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "depthActive"));
}


jb_Undefined XRSession_pauseDepthSensing(XRSession* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "pauseDepthSensing"));
}


jb_Undefined XRSession_resumeDepthSensing(XRSession* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "resumeDepthSensing"));
}


XRDOMOverlayState XRSession_domOverlayState(const XRSession *self) {
    return em_Val_as(XRDOMOverlayState, em_Val_get(EventTarget_as_val(self->inner), "domOverlayState"));
}


jb_Promise XRSession_requestHitTestSource(XRSession* self , const XRHitTestOptionsInit* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestHitTestSource", em_Val_from(options)));
}


jb_Promise XRSession_requestHitTestSourceForTransientInput(XRSession* self , const XRTransientInputHitTestOptionsInit* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestHitTestSourceForTransientInput", em_Val_from(options)));
}


jb_Promise XRSession_requestLightProbe(XRSession* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestLightProbe"));
}


jb_Promise XRSession_requestLightProbe(XRSession* self , const XRLightProbeInit* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestLightProbe", em_Val_from(options)));
}


XRReflectionFormat XRSession_preferredReflectionFormat(const XRSession *self) {
    return em_Val_as(XRReflectionFormat, em_Val_get(EventTarget_as_val(self->inner), "preferredReflectionFormat"));
}


jb_Promise XRSession_initiateRoomCapture(XRSession* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "initiateRoomCapture"));
}

