#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCIceCandidate RTCIceCandidate;
typedef struct RTCIceCandidatePair RTCIceCandidatePair;
typedef struct RTCIceParameters RTCIceParameters;
typedef struct RTCIceGatherOptions RTCIceGatherOptions;
typedef struct RTCIceCandidateInit RTCIceCandidateInit;


/**
 * @brief Interface RTCIceTransport
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport)
 */
DECLARE_EMLITE_TYPE(RTCIceTransport, EventTarget);

/**
 * @brief Gets the `role` property. 
*/
RTCIceRole RTCIceTransport_role(const RTCIceTransport *self);

/**
 * @brief Gets the `component` property. 
*/
RTCIceComponent RTCIceTransport_component(const RTCIceTransport *self);

/**
 * @brief Gets the `state` property. 
*/
RTCIceTransportState RTCIceTransport_state(const RTCIceTransport *self);

/**
 * @brief Gets the `gatheringState` property. 
*/
RTCIceGathererState RTCIceTransport_gatheringState(const RTCIceTransport *self);

/**
 * @brief Calls the `getLocalCandidates` method. 
*/
jb_Array RTCIceTransport_getLocalCandidates(RTCIceTransport* self );

/**
 * @brief Calls the `getRemoteCandidates` method. 
*/
jb_Array RTCIceTransport_getRemoteCandidates(RTCIceTransport* self );

/**
 * @brief Calls the `getSelectedCandidatePair` method. 
*/
RTCIceCandidatePair RTCIceTransport_getSelectedCandidatePair(RTCIceTransport* self );

/**
 * @brief Calls the `getLocalParameters` method. 
*/
RTCIceParameters RTCIceTransport_getLocalParameters(RTCIceTransport* self );

/**
 * @brief Calls the `getRemoteParameters` method. 
*/
RTCIceParameters RTCIceTransport_getRemoteParameters(RTCIceTransport* self );

/**
 * @brief Gets the `onstatechange` property. 
*/
jb_Any RTCIceTransport_onstatechange(const RTCIceTransport *self);

/**
 * @brief Sets the `onstatechange` property. 
*/
void RTCIceTransport_set_onstatechange(RTCIceTransport* self, jb_Any * value);

/**
 * @brief Gets the `ongatheringstatechange` property. 
*/
jb_Any RTCIceTransport_ongatheringstatechange(const RTCIceTransport *self);

/**
 * @brief Sets the `ongatheringstatechange` property. 
*/
void RTCIceTransport_set_ongatheringstatechange(RTCIceTransport* self, jb_Any * value);

/**
 * @brief Gets the `onselectedcandidatepairchange` property. 
*/
jb_Any RTCIceTransport_onselectedcandidatepairchange(const RTCIceTransport *self);

/**
 * @brief Sets the `onselectedcandidatepairchange` property. 
*/
void RTCIceTransport_set_onselectedcandidatepairchange(RTCIceTransport* self, jb_Any * value);

/**
 * @brief Creates a new `RTCIceTransport` object. 
*/
RTCIceTransport RTCIceTransport_new();

/**
 * @brief Calls the `gather` method. 
*/
jb_Undefined RTCIceTransport_gather0(RTCIceTransport* self );

/**
 * @brief Calls the `gather` method. 
*/
jb_Undefined RTCIceTransport_gather1(RTCIceTransport* self , RTCIceGatherOptions * options);

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined RTCIceTransport_start0(RTCIceTransport* self );

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined RTCIceTransport_start1(RTCIceTransport* self , RTCIceParameters * remoteParameters);

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined RTCIceTransport_start2(RTCIceTransport* self , RTCIceParameters * remoteParameters, RTCIceRole * role);

/**
 * @brief Calls the `stop` method. 
*/
jb_Undefined RTCIceTransport_stop(RTCIceTransport* self );

/**
 * @brief Calls the `addRemoteCandidate` method. 
*/
jb_Undefined RTCIceTransport_addRemoteCandidate0(RTCIceTransport* self );

/**
 * @brief Calls the `addRemoteCandidate` method. 
*/
jb_Undefined RTCIceTransport_addRemoteCandidate1(RTCIceTransport* self , RTCIceCandidateInit * remoteCandidate);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any RTCIceTransport_onerror(const RTCIceTransport *self);

/**
 * @brief Sets the `onerror` property. 
*/
void RTCIceTransport_set_onerror(RTCIceTransport* self, jb_Any * value);

/**
 * @brief Gets the `onicecandidate` property. 
*/
jb_Any RTCIceTransport_onicecandidate(const RTCIceTransport *self);

/**
 * @brief Sets the `onicecandidate` property. 
*/
void RTCIceTransport_set_onicecandidate(RTCIceTransport* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
