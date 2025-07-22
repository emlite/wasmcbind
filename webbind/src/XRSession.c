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
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthNear")));
}


void XRRenderStateInit_set_depthNear(XRRenderStateInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthNear"), em_Val_from(value));
}


double XRRenderStateInit_depthFar(const XRRenderStateInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthFar")));
}


void XRRenderStateInit_set_depthFar(XRRenderStateInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthFar"), em_Val_from(value));
}


bool XRRenderStateInit_passthroughFullyObscured(const XRRenderStateInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("passthroughFullyObscured")));
}


void XRRenderStateInit_set_passthroughFullyObscured(XRRenderStateInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("passthroughFullyObscured"), em_Val_from(value));
}


double XRRenderStateInit_inlineVerticalFieldOfView(const XRRenderStateInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inlineVerticalFieldOfView")));
}


void XRRenderStateInit_set_inlineVerticalFieldOfView(XRRenderStateInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inlineVerticalFieldOfView"), em_Val_from(value));
}


XRWebGLLayer XRRenderStateInit_baseLayer(const XRRenderStateInit *self) {
    return em_Val_as(XRWebGLLayer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baseLayer")));
}


void XRRenderStateInit_set_baseLayer(XRRenderStateInit* self, XRWebGLLayer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("baseLayer"), em_Val_from(value));
}


jb_Sequence XRRenderStateInit_layers(const XRRenderStateInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layers")));
}


void XRRenderStateInit_set_layers(XRRenderStateInit* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layers"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(XRDOMOverlayState, em_Val);


XRDOMOverlayType XRDOMOverlayState_type(const XRDOMOverlayState *self) {
    return em_Val_as(XRDOMOverlayType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void XRDOMOverlayState_set_type(XRDOMOverlayState* self, XRDOMOverlayType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(XRHitTestOptionsInit, em_Val);


XRSpace XRHitTestOptionsInit_space(const XRHitTestOptionsInit *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("space")));
}


void XRHitTestOptionsInit_set_space(XRHitTestOptionsInit* self, XRSpace * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("space"), em_Val_from(value));
}


jb_Sequence XRHitTestOptionsInit_entityTypes(const XRHitTestOptionsInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("entityTypes")));
}


void XRHitTestOptionsInit_set_entityTypes(XRHitTestOptionsInit* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("entityTypes"), em_Val_from(value));
}


XRRay XRHitTestOptionsInit_offsetRay(const XRHitTestOptionsInit *self) {
    return em_Val_as(XRRay, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offsetRay")));
}


void XRHitTestOptionsInit_set_offsetRay(XRHitTestOptionsInit* self, XRRay * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offsetRay"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(XRTransientInputHitTestOptionsInit, em_Val);


jb_DOMString XRTransientInputHitTestOptionsInit_profile(const XRTransientInputHitTestOptionsInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("profile")));
}


void XRTransientInputHitTestOptionsInit_set_profile(XRTransientInputHitTestOptionsInit* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("profile"), em_Val_from(value));
}


jb_Sequence XRTransientInputHitTestOptionsInit_entityTypes(const XRTransientInputHitTestOptionsInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("entityTypes")));
}


void XRTransientInputHitTestOptionsInit_set_entityTypes(XRTransientInputHitTestOptionsInit* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("entityTypes"), em_Val_from(value));
}


XRRay XRTransientInputHitTestOptionsInit_offsetRay(const XRTransientInputHitTestOptionsInit *self) {
    return em_Val_as(XRRay, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offsetRay")));
}


void XRTransientInputHitTestOptionsInit_set_offsetRay(XRTransientInputHitTestOptionsInit* self, XRRay * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offsetRay"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(XRLightProbeInit, em_Val);


XRReflectionFormat XRLightProbeInit_reflectionFormat(const XRLightProbeInit *self) {
    return em_Val_as(XRReflectionFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reflectionFormat")));
}


void XRLightProbeInit_set_reflectionFormat(XRLightProbeInit* self, XRReflectionFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reflectionFormat"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(XRSession, EventTarget);


XRVisibilityState XRSession_visibilityState(const XRSession *self) {
    return em_Val_as(XRVisibilityState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("visibilityState")));
}


float XRSession_frameRate(const XRSession *self) {
    return em_Val_as(float, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("frameRate")));
}


jb_Float32Array XRSession_supportedFrameRates(const XRSession *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("supportedFrameRates")));
}


XRRenderState XRSession_renderState(const XRSession *self) {
    return em_Val_as(XRRenderState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("renderState")));
}


XRInputSourceArray XRSession_inputSources(const XRSession *self) {
    return em_Val_as(XRInputSourceArray, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("inputSources")));
}


XRInputSourceArray XRSession_trackedSources(const XRSession *self) {
    return em_Val_as(XRInputSourceArray, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("trackedSources")));
}


jb_FrozenArray XRSession_enabledFeatures(const XRSession *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("enabledFeatures")));
}


bool XRSession_isSystemKeyboardSupported(const XRSession *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("isSystemKeyboardSupported")));
}


jb_Undefined XRSession_updateRenderState0(XRSession* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "updateRenderState"));
}


jb_Undefined XRSession_updateRenderState1(XRSession* self , XRRenderStateInit * state) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "updateRenderState", em_Val_from(state)));
}


jb_Promise XRSession_updateTargetFrameRate(XRSession* self , float rate) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "updateTargetFrameRate", em_Val_from(rate)));
}


jb_Promise XRSession_requestReferenceSpace(XRSession* self , XRReferenceSpaceType * type) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestReferenceSpace", em_Val_from(type)));
}


unsigned long XRSession_requestAnimationFrame(XRSession* self , jb_Function * callback) {
    return em_Val_as(unsigned long, em_Val_call(EventTarget_as_val(self->inner), "requestAnimationFrame", em_Val_from(callback)));
}


jb_Undefined XRSession_cancelAnimationFrame(XRSession* self , unsigned long handle) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "cancelAnimationFrame", em_Val_from(handle)));
}


jb_Promise XRSession_end(XRSession* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "end"));
}


jb_Any XRSession_onend(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onend")));
}


void XRSession_set_onend(XRSession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onend"), em_Val_from(value));
}


jb_Any XRSession_oninputsourceschange(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oninputsourceschange")));
}


void XRSession_set_oninputsourceschange(XRSession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oninputsourceschange"), em_Val_from(value));
}


jb_Any XRSession_onselect(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onselect")));
}


void XRSession_set_onselect(XRSession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onselect"), em_Val_from(value));
}


jb_Any XRSession_onselectstart(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onselectstart")));
}


void XRSession_set_onselectstart(XRSession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onselectstart"), em_Val_from(value));
}


jb_Any XRSession_onselectend(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onselectend")));
}


void XRSession_set_onselectend(XRSession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onselectend"), em_Val_from(value));
}


jb_Any XRSession_onsqueeze(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onsqueeze")));
}


void XRSession_set_onsqueeze(XRSession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onsqueeze"), em_Val_from(value));
}


jb_Any XRSession_onsqueezestart(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onsqueezestart")));
}


void XRSession_set_onsqueezestart(XRSession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onsqueezestart"), em_Val_from(value));
}


jb_Any XRSession_onsqueezeend(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onsqueezeend")));
}


void XRSession_set_onsqueezeend(XRSession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onsqueezeend"), em_Val_from(value));
}


jb_Any XRSession_onvisibilitychange(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onvisibilitychange")));
}


void XRSession_set_onvisibilitychange(XRSession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onvisibilitychange"), em_Val_from(value));
}


jb_Any XRSession_onframeratechange(const XRSession *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onframeratechange")));
}


void XRSession_set_onframeratechange(XRSession* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onframeratechange"), em_Val_from(value));
}


jb_FrozenArray XRSession_persistentAnchors(const XRSession *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("persistentAnchors")));
}


jb_Promise XRSession_restorePersistentAnchor(XRSession* self , jb_DOMString * uuid) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "restorePersistentAnchor", em_Val_from(uuid)));
}


jb_Promise XRSession_deletePersistentAnchor(XRSession* self , jb_DOMString * uuid) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "deletePersistentAnchor", em_Val_from(uuid)));
}


XREnvironmentBlendMode XRSession_environmentBlendMode(const XRSession *self) {
    return em_Val_as(XREnvironmentBlendMode, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("environmentBlendMode")));
}


XRInteractionMode XRSession_interactionMode(const XRSession *self) {
    return em_Val_as(XRInteractionMode, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("interactionMode")));
}


XRDepthUsage XRSession_depthUsage(const XRSession *self) {
    return em_Val_as(XRDepthUsage, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("depthUsage")));
}


XRDepthDataFormat XRSession_depthDataFormat(const XRSession *self) {
    return em_Val_as(XRDepthDataFormat, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("depthDataFormat")));
}


XRDepthType XRSession_depthType(const XRSession *self) {
    return em_Val_as(XRDepthType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("depthType")));
}


bool XRSession_depthActive(const XRSession *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("depthActive")));
}


jb_Undefined XRSession_pauseDepthSensing(XRSession* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "pauseDepthSensing"));
}


jb_Undefined XRSession_resumeDepthSensing(XRSession* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "resumeDepthSensing"));
}


XRDOMOverlayState XRSession_domOverlayState(const XRSession *self) {
    return em_Val_as(XRDOMOverlayState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("domOverlayState")));
}


jb_Promise XRSession_requestHitTestSource(XRSession* self , XRHitTestOptionsInit * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestHitTestSource", em_Val_from(options)));
}


jb_Promise XRSession_requestHitTestSourceForTransientInput(XRSession* self , XRTransientInputHitTestOptionsInit * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestHitTestSourceForTransientInput", em_Val_from(options)));
}


jb_Promise XRSession_requestLightProbe0(XRSession* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestLightProbe"));
}


jb_Promise XRSession_requestLightProbe1(XRSession* self , XRLightProbeInit * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestLightProbe", em_Val_from(options)));
}


XRReflectionFormat XRSession_preferredReflectionFormat(const XRSession *self) {
    return em_Val_as(XRReflectionFormat, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("preferredReflectionFormat")));
}


jb_Promise XRSession_initiateRoomCapture(XRSession* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "initiateRoomCapture"));
}

