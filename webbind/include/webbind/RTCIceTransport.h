#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct RTCIceCandidate RTCIceCandidate;
typedef struct RTCIceCandidatePair RTCIceCandidatePair;
typedef struct RTCIceParameters RTCIceParameters;
typedef struct RTCIceGatherOptions RTCIceGatherOptions;
typedef struct RTCIceCandidateInit RTCIceCandidateInit;


typedef struct {
  em_Val inner;
} RTCIceParameters;


DECLARE_EMLITE_TYPE(RTCIceParameters, em_Val);

jb_DOMString RTCIceParameters_usernameFragment( const RTCIceParameters *self);

void RTCIceParameters_set_usernameFragment(RTCIceParameters* self, const jb_DOMString* value);

jb_DOMString RTCIceParameters_password( const RTCIceParameters *self);

void RTCIceParameters_set_password(RTCIceParameters* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} RTCIceGatherOptions;


DECLARE_EMLITE_TYPE(RTCIceGatherOptions, em_Val);

RTCIceTransportPolicy RTCIceGatherOptions_gatherPolicy( const RTCIceGatherOptions *self);

void RTCIceGatherOptions_set_gatherPolicy(RTCIceGatherOptions* self, const RTCIceTransportPolicy* value);

jb_Sequence RTCIceGatherOptions_iceServers( const RTCIceGatherOptions *self);

void RTCIceGatherOptions_set_iceServers(RTCIceGatherOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} RTCIceCandidateInit;


DECLARE_EMLITE_TYPE(RTCIceCandidateInit, em_Val);

jb_DOMString RTCIceCandidateInit_candidate( const RTCIceCandidateInit *self);

void RTCIceCandidateInit_set_candidate(RTCIceCandidateInit* self, const jb_DOMString* value);

jb_DOMString RTCIceCandidateInit_sdpMid( const RTCIceCandidateInit *self);

void RTCIceCandidateInit_set_sdpMid(RTCIceCandidateInit* self, const jb_DOMString* value);

unsigned short RTCIceCandidateInit_sdpMLineIndex( const RTCIceCandidateInit *self);

void RTCIceCandidateInit_set_sdpMLineIndex(RTCIceCandidateInit* self, unsigned short value);

jb_DOMString RTCIceCandidateInit_usernameFragment( const RTCIceCandidateInit *self);

void RTCIceCandidateInit_set_usernameFragment(RTCIceCandidateInit* self, const jb_DOMString* value);
typedef struct {
  EventTarget inner;
} RTCIceTransport;


DECLARE_EMLITE_TYPE(RTCIceTransport, EventTarget);

RTCIceRole RTCIceTransport_role( const RTCIceTransport *self);

RTCIceComponent RTCIceTransport_component( const RTCIceTransport *self);

RTCIceTransportState RTCIceTransport_state( const RTCIceTransport *self);

RTCIceGathererState RTCIceTransport_gatheringState( const RTCIceTransport *self);

jb_Sequence RTCIceTransport_getLocalCandidates(RTCIceTransport* self );

jb_Sequence RTCIceTransport_getRemoteCandidates(RTCIceTransport* self );

RTCIceCandidatePair RTCIceTransport_getSelectedCandidatePair(RTCIceTransport* self );

RTCIceParameters RTCIceTransport_getLocalParameters(RTCIceTransport* self );

RTCIceParameters RTCIceTransport_getRemoteParameters(RTCIceTransport* self );

jb_Any RTCIceTransport_onstatechange( const RTCIceTransport *self);

void RTCIceTransport_set_onstatechange(RTCIceTransport* self, const jb_Any* value);

jb_Any RTCIceTransport_ongatheringstatechange( const RTCIceTransport *self);

void RTCIceTransport_set_ongatheringstatechange(RTCIceTransport* self, const jb_Any* value);

jb_Any RTCIceTransport_onselectedcandidatepairchange( const RTCIceTransport *self);

void RTCIceTransport_set_onselectedcandidatepairchange(RTCIceTransport* self, const jb_Any* value);

RTCIceTransport RTCIceTransport_new();

jb_Undefined RTCIceTransport_gather(RTCIceTransport* self );

jb_Undefined RTCIceTransport_gather(RTCIceTransport* self , const RTCIceGatherOptions* options);

jb_Undefined RTCIceTransport_start(RTCIceTransport* self );

jb_Undefined RTCIceTransport_start(RTCIceTransport* self , const RTCIceParameters* remoteParameters);

jb_Undefined RTCIceTransport_start(RTCIceTransport* self , const RTCIceParameters* remoteParameters, const RTCIceRole* role);

jb_Undefined RTCIceTransport_stop(RTCIceTransport* self );

jb_Undefined RTCIceTransport_addRemoteCandidate(RTCIceTransport* self );

jb_Undefined RTCIceTransport_addRemoteCandidate(RTCIceTransport* self , const RTCIceCandidateInit* remoteCandidate);

jb_Any RTCIceTransport_onerror( const RTCIceTransport *self);

void RTCIceTransport_set_onerror(RTCIceTransport* self, const jb_Any* value);

jb_Any RTCIceTransport_onicecandidate( const RTCIceTransport *self);

void RTCIceTransport_set_onicecandidate(RTCIceTransport* self, const jb_Any* value);
