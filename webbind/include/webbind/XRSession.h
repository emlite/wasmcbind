#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

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
typedef struct XRRay XRRay;
typedef struct XRLayer XRLayer;
typedef struct XRSpace XRSpace;
typedef struct XRWebGLLayer XRWebGLLayer;


typedef struct {
  em_Val inner;
} XRRenderStateInit;


DECLARE_EMLITE_TYPE(XRRenderStateInit, em_Val);

double XRRenderStateInit_depthNear( const XRRenderStateInit *self);

void XRRenderStateInit_set_depthNear(XRRenderStateInit* self, double value);

double XRRenderStateInit_depthFar( const XRRenderStateInit *self);

void XRRenderStateInit_set_depthFar(XRRenderStateInit* self, double value);

bool XRRenderStateInit_passthroughFullyObscured( const XRRenderStateInit *self);

void XRRenderStateInit_set_passthroughFullyObscured(XRRenderStateInit* self, bool value);

double XRRenderStateInit_inlineVerticalFieldOfView( const XRRenderStateInit *self);

void XRRenderStateInit_set_inlineVerticalFieldOfView(XRRenderStateInit* self, double value);

XRWebGLLayer XRRenderStateInit_baseLayer( const XRRenderStateInit *self);

void XRRenderStateInit_set_baseLayer(XRRenderStateInit* self, const XRWebGLLayer* value);

jb_Sequence XRRenderStateInit_layers( const XRRenderStateInit *self);

void XRRenderStateInit_set_layers(XRRenderStateInit* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} XRDOMOverlayState;


DECLARE_EMLITE_TYPE(XRDOMOverlayState, em_Val);

XRDOMOverlayType XRDOMOverlayState_type( const XRDOMOverlayState *self);

void XRDOMOverlayState_set_type(XRDOMOverlayState* self, const XRDOMOverlayType* value);
typedef struct {
  em_Val inner;
} XRHitTestOptionsInit;


DECLARE_EMLITE_TYPE(XRHitTestOptionsInit, em_Val);

XRSpace XRHitTestOptionsInit_space( const XRHitTestOptionsInit *self);

void XRHitTestOptionsInit_set_space(XRHitTestOptionsInit* self, const XRSpace* value);

jb_Sequence XRHitTestOptionsInit_entityTypes( const XRHitTestOptionsInit *self);

void XRHitTestOptionsInit_set_entityTypes(XRHitTestOptionsInit* self, const jb_Sequence* value);

XRRay XRHitTestOptionsInit_offsetRay( const XRHitTestOptionsInit *self);

void XRHitTestOptionsInit_set_offsetRay(XRHitTestOptionsInit* self, const XRRay* value);
typedef struct {
  em_Val inner;
} XRTransientInputHitTestOptionsInit;


DECLARE_EMLITE_TYPE(XRTransientInputHitTestOptionsInit, em_Val);

jb_DOMString XRTransientInputHitTestOptionsInit_profile( const XRTransientInputHitTestOptionsInit *self);

void XRTransientInputHitTestOptionsInit_set_profile(XRTransientInputHitTestOptionsInit* self, const jb_DOMString* value);

jb_Sequence XRTransientInputHitTestOptionsInit_entityTypes( const XRTransientInputHitTestOptionsInit *self);

void XRTransientInputHitTestOptionsInit_set_entityTypes(XRTransientInputHitTestOptionsInit* self, const jb_Sequence* value);

XRRay XRTransientInputHitTestOptionsInit_offsetRay( const XRTransientInputHitTestOptionsInit *self);

void XRTransientInputHitTestOptionsInit_set_offsetRay(XRTransientInputHitTestOptionsInit* self, const XRRay* value);
typedef struct {
  em_Val inner;
} XRLightProbeInit;


DECLARE_EMLITE_TYPE(XRLightProbeInit, em_Val);

XRReflectionFormat XRLightProbeInit_reflectionFormat( const XRLightProbeInit *self);

void XRLightProbeInit_set_reflectionFormat(XRLightProbeInit* self, const XRReflectionFormat* value);
typedef struct {
  EventTarget inner;
} XRSession;


DECLARE_EMLITE_TYPE(XRSession, EventTarget);

XRVisibilityState XRSession_visibilityState( const XRSession *self);

float XRSession_frameRate( const XRSession *self);

jb_Float32Array XRSession_supportedFrameRates( const XRSession *self);

XRRenderState XRSession_renderState( const XRSession *self);

XRInputSourceArray XRSession_inputSources( const XRSession *self);

XRInputSourceArray XRSession_trackedSources( const XRSession *self);

jb_FrozenArray XRSession_enabledFeatures( const XRSession *self);

bool XRSession_isSystemKeyboardSupported( const XRSession *self);

jb_Undefined XRSession_updateRenderState(XRSession* self );

jb_Undefined XRSession_updateRenderState(XRSession* self , const XRRenderStateInit* state);

jb_Promise XRSession_updateTargetFrameRate(XRSession* self , float rate);

jb_Promise XRSession_requestReferenceSpace(XRSession* self , const XRReferenceSpaceType* type);

unsigned long XRSession_requestAnimationFrame(XRSession* self , const jb_Function* callback);

jb_Undefined XRSession_cancelAnimationFrame(XRSession* self , unsigned long handle);

jb_Promise XRSession_end(XRSession* self );

jb_Any XRSession_onend( const XRSession *self);

void XRSession_set_onend(XRSession* self, const jb_Any* value);

jb_Any XRSession_oninputsourceschange( const XRSession *self);

void XRSession_set_oninputsourceschange(XRSession* self, const jb_Any* value);

jb_Any XRSession_onselect( const XRSession *self);

void XRSession_set_onselect(XRSession* self, const jb_Any* value);

jb_Any XRSession_onselectstart( const XRSession *self);

void XRSession_set_onselectstart(XRSession* self, const jb_Any* value);

jb_Any XRSession_onselectend( const XRSession *self);

void XRSession_set_onselectend(XRSession* self, const jb_Any* value);

jb_Any XRSession_onsqueeze( const XRSession *self);

void XRSession_set_onsqueeze(XRSession* self, const jb_Any* value);

jb_Any XRSession_onsqueezestart( const XRSession *self);

void XRSession_set_onsqueezestart(XRSession* self, const jb_Any* value);

jb_Any XRSession_onsqueezeend( const XRSession *self);

void XRSession_set_onsqueezeend(XRSession* self, const jb_Any* value);

jb_Any XRSession_onvisibilitychange( const XRSession *self);

void XRSession_set_onvisibilitychange(XRSession* self, const jb_Any* value);

jb_Any XRSession_onframeratechange( const XRSession *self);

void XRSession_set_onframeratechange(XRSession* self, const jb_Any* value);

jb_FrozenArray XRSession_persistentAnchors( const XRSession *self);

jb_Promise XRSession_restorePersistentAnchor(XRSession* self , const jb_DOMString* uuid);

jb_Promise XRSession_deletePersistentAnchor(XRSession* self , const jb_DOMString* uuid);

XREnvironmentBlendMode XRSession_environmentBlendMode( const XRSession *self);

XRInteractionMode XRSession_interactionMode( const XRSession *self);

XRDepthUsage XRSession_depthUsage( const XRSession *self);

XRDepthDataFormat XRSession_depthDataFormat( const XRSession *self);

XRDepthType XRSession_depthType( const XRSession *self);

bool XRSession_depthActive( const XRSession *self);

jb_Undefined XRSession_pauseDepthSensing(XRSession* self );

jb_Undefined XRSession_resumeDepthSensing(XRSession* self );

XRDOMOverlayState XRSession_domOverlayState( const XRSession *self);

jb_Promise XRSession_requestHitTestSource(XRSession* self , const XRHitTestOptionsInit* options);

jb_Promise XRSession_requestHitTestSourceForTransientInput(XRSession* self , const XRTransientInputHitTestOptionsInit* options);

jb_Promise XRSession_requestLightProbe(XRSession* self );

jb_Promise XRSession_requestLightProbe(XRSession* self , const XRLightProbeInit* options);

XRReflectionFormat XRSession_preferredReflectionFormat( const XRSession *self);

jb_Promise XRSession_initiateRoomCapture(XRSession* self );
