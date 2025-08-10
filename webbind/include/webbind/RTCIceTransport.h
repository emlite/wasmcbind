#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
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

DECLARE_EMLITE_TYPE(RTCIceTransport, EventTarget);

RTCIceRole RTCIceTransport_role(const RTCIceTransport *self);

RTCIceComponent RTCIceTransport_component(const RTCIceTransport *self);

RTCIceTransportState RTCIceTransport_state(const RTCIceTransport *self);

RTCIceGathererState RTCIceTransport_gatheringState(const RTCIceTransport *self);

jb_Array RTCIceTransport_getLocalCandidates(RTCIceTransport* self );

jb_Array RTCIceTransport_getRemoteCandidates(RTCIceTransport* self );

RTCIceCandidatePair RTCIceTransport_getSelectedCandidatePair(RTCIceTransport* self );

RTCIceParameters RTCIceTransport_getLocalParameters(RTCIceTransport* self );

RTCIceParameters RTCIceTransport_getRemoteParameters(RTCIceTransport* self );

jb_Any RTCIceTransport_onstatechange(const RTCIceTransport *self);

void RTCIceTransport_set_onstatechange(RTCIceTransport* self, jb_Any * value);

jb_Any RTCIceTransport_ongatheringstatechange(const RTCIceTransport *self);

void RTCIceTransport_set_ongatheringstatechange(RTCIceTransport* self, jb_Any * value);

jb_Any RTCIceTransport_onselectedcandidatepairchange(const RTCIceTransport *self);

void RTCIceTransport_set_onselectedcandidatepairchange(RTCIceTransport* self, jb_Any * value);

RTCIceTransport RTCIceTransport_new();

jb_Undefined RTCIceTransport_gather0(RTCIceTransport* self );

jb_Undefined RTCIceTransport_gather1(RTCIceTransport* self , RTCIceGatherOptions * options);

jb_Undefined RTCIceTransport_start0(RTCIceTransport* self );

jb_Undefined RTCIceTransport_start1(RTCIceTransport* self , RTCIceParameters * remoteParameters);

jb_Undefined RTCIceTransport_start2(RTCIceTransport* self , RTCIceParameters * remoteParameters, RTCIceRole * role);

jb_Undefined RTCIceTransport_stop(RTCIceTransport* self );

jb_Undefined RTCIceTransport_addRemoteCandidate0(RTCIceTransport* self );

jb_Undefined RTCIceTransport_addRemoteCandidate1(RTCIceTransport* self , RTCIceCandidateInit * remoteCandidate);

jb_Any RTCIceTransport_onerror(const RTCIceTransport *self);

void RTCIceTransport_set_onerror(RTCIceTransport* self, jb_Any * value);

jb_Any RTCIceTransport_onicecandidate(const RTCIceTransport *self);

void RTCIceTransport_set_onicecandidate(RTCIceTransport* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
