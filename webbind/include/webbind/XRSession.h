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


/**
 * @brief Interface XRSession
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRSession)
 */
DECLARE_EMLITE_TYPE(XRSession, EventTarget);

/**
 * @brief Gets the `visibilityState` property. 
*/
XRVisibilityState XRSession_visibilityState(const XRSession *self);

/**
 * @brief Gets the `frameRate` property. 
*/
float XRSession_frameRate(const XRSession *self);

/**
 * @brief Gets the `supportedFrameRates` property. 
*/
jb_Float32Array XRSession_supportedFrameRates(const XRSession *self);

/**
 * @brief Gets the `renderState` property. 
*/
XRRenderState XRSession_renderState(const XRSession *self);

/**
 * @brief Gets the `inputSources` property. 
*/
XRInputSourceArray XRSession_inputSources(const XRSession *self);

/**
 * @brief Gets the `trackedSources` property. 
*/
XRInputSourceArray XRSession_trackedSources(const XRSession *self);

/**
 * @brief Gets the `enabledFeatures` property. 
*/
jb_Array XRSession_enabledFeatures(const XRSession *self);

/**
 * @brief Gets the `isSystemKeyboardSupported` property. 
*/
bool XRSession_isSystemKeyboardSupported(const XRSession *self);

/**
 * @brief Calls the `updateRenderState` method. 
*/
jb_Undefined XRSession_updateRenderState0(XRSession* self );

/**
 * @brief Calls the `updateRenderState` method. 
*/
jb_Undefined XRSession_updateRenderState1(XRSession* self , XRRenderStateInit * state);

/**
 * @brief Calls the `updateTargetFrameRate` method. 
*/
jb_Promise XRSession_updateTargetFrameRate(XRSession* self , float rate);

/**
 * @brief Calls the `requestReferenceSpace` method. 
*/
jb_Promise XRSession_requestReferenceSpace(XRSession* self , XRReferenceSpaceType * type);

/**
 * @brief Calls the `requestAnimationFrame` method. 
*/
unsigned long XRSession_requestAnimationFrame(XRSession* self , jb_Function * callback);

/**
 * @brief Calls the `cancelAnimationFrame` method. 
*/
jb_Undefined XRSession_cancelAnimationFrame(XRSession* self , unsigned long handle);

/**
 * @brief Calls the `end` method. 
*/
jb_Promise XRSession_end(XRSession* self );

/**
 * @brief Gets the `onend` property. 
*/
jb_Any XRSession_onend(const XRSession *self);

/**
 * @brief Sets the `onend` property. 
*/
void XRSession_set_onend(XRSession* self, jb_Any * value);

/**
 * @brief Gets the `oninputsourceschange` property. 
*/
jb_Any XRSession_oninputsourceschange(const XRSession *self);

/**
 * @brief Sets the `oninputsourceschange` property. 
*/
void XRSession_set_oninputsourceschange(XRSession* self, jb_Any * value);

/**
 * @brief Gets the `onselect` property. 
*/
jb_Any XRSession_onselect(const XRSession *self);

/**
 * @brief Sets the `onselect` property. 
*/
void XRSession_set_onselect(XRSession* self, jb_Any * value);

/**
 * @brief Gets the `onselectstart` property. 
*/
jb_Any XRSession_onselectstart(const XRSession *self);

/**
 * @brief Sets the `onselectstart` property. 
*/
void XRSession_set_onselectstart(XRSession* self, jb_Any * value);

/**
 * @brief Gets the `onselectend` property. 
*/
jb_Any XRSession_onselectend(const XRSession *self);

/**
 * @brief Sets the `onselectend` property. 
*/
void XRSession_set_onselectend(XRSession* self, jb_Any * value);

/**
 * @brief Gets the `onsqueeze` property. 
*/
jb_Any XRSession_onsqueeze(const XRSession *self);

/**
 * @brief Sets the `onsqueeze` property. 
*/
void XRSession_set_onsqueeze(XRSession* self, jb_Any * value);

/**
 * @brief Gets the `onsqueezestart` property. 
*/
jb_Any XRSession_onsqueezestart(const XRSession *self);

/**
 * @brief Sets the `onsqueezestart` property. 
*/
void XRSession_set_onsqueezestart(XRSession* self, jb_Any * value);

/**
 * @brief Gets the `onsqueezeend` property. 
*/
jb_Any XRSession_onsqueezeend(const XRSession *self);

/**
 * @brief Sets the `onsqueezeend` property. 
*/
void XRSession_set_onsqueezeend(XRSession* self, jb_Any * value);

/**
 * @brief Gets the `onvisibilitychange` property. 
*/
jb_Any XRSession_onvisibilitychange(const XRSession *self);

/**
 * @brief Sets the `onvisibilitychange` property. 
*/
void XRSession_set_onvisibilitychange(XRSession* self, jb_Any * value);

/**
 * @brief Gets the `onframeratechange` property. 
*/
jb_Any XRSession_onframeratechange(const XRSession *self);

/**
 * @brief Sets the `onframeratechange` property. 
*/
void XRSession_set_onframeratechange(XRSession* self, jb_Any * value);

/**
 * @brief Gets the `persistentAnchors` property. 
*/
jb_Array XRSession_persistentAnchors(const XRSession *self);

/**
 * @brief Calls the `restorePersistentAnchor` method. 
*/
jb_Promise XRSession_restorePersistentAnchor(XRSession* self , jb_String * uuid);

/**
 * @brief Calls the `deletePersistentAnchor` method. 
*/
jb_Promise XRSession_deletePersistentAnchor(XRSession* self , jb_String * uuid);

/**
 * @brief Gets the `environmentBlendMode` property. 
*/
XREnvironmentBlendMode XRSession_environmentBlendMode(const XRSession *self);

/**
 * @brief Gets the `interactionMode` property. 
*/
XRInteractionMode XRSession_interactionMode(const XRSession *self);

/**
 * @brief Gets the `depthUsage` property. 
*/
XRDepthUsage XRSession_depthUsage(const XRSession *self);

/**
 * @brief Gets the `depthDataFormat` property. 
*/
XRDepthDataFormat XRSession_depthDataFormat(const XRSession *self);

/**
 * @brief Gets the `depthType` property. 
*/
XRDepthType XRSession_depthType(const XRSession *self);

/**
 * @brief Gets the `depthActive` property. 
*/
bool XRSession_depthActive(const XRSession *self);

/**
 * @brief Calls the `pauseDepthSensing` method. 
*/
jb_Undefined XRSession_pauseDepthSensing(XRSession* self );

/**
 * @brief Calls the `resumeDepthSensing` method. 
*/
jb_Undefined XRSession_resumeDepthSensing(XRSession* self );

/**
 * @brief Gets the `domOverlayState` property. 
*/
XRDOMOverlayState XRSession_domOverlayState(const XRSession *self);

/**
 * @brief Calls the `requestHitTestSource` method. 
*/
jb_Promise XRSession_requestHitTestSource(XRSession* self , XRHitTestOptionsInit * options);

/**
 * @brief Calls the `requestHitTestSourceForTransientInput` method. 
*/
jb_Promise XRSession_requestHitTestSourceForTransientInput(XRSession* self , XRTransientInputHitTestOptionsInit * options);

/**
 * @brief Calls the `requestLightProbe` method. 
*/
jb_Promise XRSession_requestLightProbe0(XRSession* self );

/**
 * @brief Calls the `requestLightProbe` method. 
*/
jb_Promise XRSession_requestLightProbe1(XRSession* self , XRLightProbeInit * options);

/**
 * @brief Gets the `preferredReflectionFormat` property. 
*/
XRReflectionFormat XRSession_preferredReflectionFormat(const XRSession *self);

/**
 * @brief Calls the `initiateRoomCapture` method. 
*/
jb_Promise XRSession_initiateRoomCapture(XRSession* self );

#ifdef __cplusplus
}
#endif
