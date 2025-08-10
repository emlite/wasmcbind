#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRenderState XRRenderState;
typedef struct XRInputSourceArray XRInputSourceArray;
typedef struct XRRenderStateInit XRRenderStateInit;
typedef struct XRReferenceSpace XRReferenceSpace;
typedef struct XRAnchor XRAnchor;
typedef struct XRDOMOverlayState XRDOMOverlayState;
typedef struct XRHitTestSource XRHitTestSource;
typedef struct XRHitTestOptionsInit XRHitTestOptionsInit;
typedef struct XRTransientInputHitTestSource XRTransientInputHitTestSource;
typedef struct XRTransientInputHitTestOptionsInit XRTransientInputHitTestOptionsInit;
typedef struct XRLightProbe XRLightProbe;
typedef struct XRLightProbeInit XRLightProbeInit;

DECLARE_EMLITE_TYPE(XRSession, EventTarget);

XRVisibilityState XRSession_visibilityState(const XRSession *self);

float XRSession_frameRate(const XRSession *self);

jb_Float32Array XRSession_supportedFrameRates(const XRSession *self);

XRRenderState XRSession_renderState(const XRSession *self);

XRInputSourceArray XRSession_inputSources(const XRSession *self);

XRInputSourceArray XRSession_trackedSources(const XRSession *self);

jb_Array XRSession_enabledFeatures(const XRSession *self);

bool XRSession_isSystemKeyboardSupported(const XRSession *self);

jb_Undefined XRSession_updateRenderState0(XRSession* self );

jb_Undefined XRSession_updateRenderState1(XRSession* self , XRRenderStateInit * state);

jb_Promise XRSession_updateTargetFrameRate(XRSession* self , float rate);

jb_Promise XRSession_requestReferenceSpace(XRSession* self , XRReferenceSpaceType * type);

unsigned long XRSession_requestAnimationFrame(XRSession* self , jb_Function * callback);

jb_Undefined XRSession_cancelAnimationFrame(XRSession* self , unsigned long handle);

jb_Promise XRSession_end(XRSession* self );

jb_Any XRSession_onend(const XRSession *self);

void XRSession_set_onend(XRSession* self, jb_Any * value);

jb_Any XRSession_oninputsourceschange(const XRSession *self);

void XRSession_set_oninputsourceschange(XRSession* self, jb_Any * value);

jb_Any XRSession_onselect(const XRSession *self);

void XRSession_set_onselect(XRSession* self, jb_Any * value);

jb_Any XRSession_onselectstart(const XRSession *self);

void XRSession_set_onselectstart(XRSession* self, jb_Any * value);

jb_Any XRSession_onselectend(const XRSession *self);

void XRSession_set_onselectend(XRSession* self, jb_Any * value);

jb_Any XRSession_onsqueeze(const XRSession *self);

void XRSession_set_onsqueeze(XRSession* self, jb_Any * value);

jb_Any XRSession_onsqueezestart(const XRSession *self);

void XRSession_set_onsqueezestart(XRSession* self, jb_Any * value);

jb_Any XRSession_onsqueezeend(const XRSession *self);

void XRSession_set_onsqueezeend(XRSession* self, jb_Any * value);

jb_Any XRSession_onvisibilitychange(const XRSession *self);

void XRSession_set_onvisibilitychange(XRSession* self, jb_Any * value);

jb_Any XRSession_onframeratechange(const XRSession *self);

void XRSession_set_onframeratechange(XRSession* self, jb_Any * value);

jb_Array XRSession_persistentAnchors(const XRSession *self);

jb_Promise XRSession_restorePersistentAnchor(XRSession* self , jb_String * uuid);

jb_Promise XRSession_deletePersistentAnchor(XRSession* self , jb_String * uuid);

XREnvironmentBlendMode XRSession_environmentBlendMode(const XRSession *self);

XRInteractionMode XRSession_interactionMode(const XRSession *self);

XRDepthUsage XRSession_depthUsage(const XRSession *self);

XRDepthDataFormat XRSession_depthDataFormat(const XRSession *self);

XRDepthType XRSession_depthType(const XRSession *self);

bool XRSession_depthActive(const XRSession *self);

jb_Undefined XRSession_pauseDepthSensing(XRSession* self );

jb_Undefined XRSession_resumeDepthSensing(XRSession* self );

XRDOMOverlayState XRSession_domOverlayState(const XRSession *self);

jb_Promise XRSession_requestHitTestSource(XRSession* self , XRHitTestOptionsInit * options);

jb_Promise XRSession_requestHitTestSourceForTransientInput(XRSession* self , XRTransientInputHitTestOptionsInit * options);

jb_Promise XRSession_requestLightProbe0(XRSession* self );

jb_Promise XRSession_requestLightProbe1(XRSession* self , XRLightProbeInit * options);

XRReflectionFormat XRSession_preferredReflectionFormat(const XRSession *self);

jb_Promise XRSession_initiateRoomCapture(XRSession* self );

#ifdef __cplusplus
}
#endif
