#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCIceCandidateStats, RTCStats);

jb_String RTCIceCandidateStats_transportId(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_transportId(RTCIceCandidateStats* self, jb_String * value);

jb_String RTCIceCandidateStats_address(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_address(RTCIceCandidateStats* self, jb_String * value);

long RTCIceCandidateStats_port(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_port(RTCIceCandidateStats* self, long value);

jb_String RTCIceCandidateStats_protocol(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_protocol(RTCIceCandidateStats* self, jb_String * value);

RTCIceCandidateType RTCIceCandidateStats_candidateType(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_candidateType(RTCIceCandidateStats* self, RTCIceCandidateType * value);

long RTCIceCandidateStats_priority(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_priority(RTCIceCandidateStats* self, long value);

jb_String RTCIceCandidateStats_url(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_url(RTCIceCandidateStats* self, jb_String * value);

RTCIceServerTransportProtocol RTCIceCandidateStats_relayProtocol(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_relayProtocol(RTCIceCandidateStats* self, RTCIceServerTransportProtocol * value);

jb_String RTCIceCandidateStats_foundation(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_foundation(RTCIceCandidateStats* self, jb_String * value);

jb_String RTCIceCandidateStats_relatedAddress(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_relatedAddress(RTCIceCandidateStats* self, jb_String * value);

long RTCIceCandidateStats_relatedPort(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_relatedPort(RTCIceCandidateStats* self, long value);

jb_String RTCIceCandidateStats_usernameFragment(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_usernameFragment(RTCIceCandidateStats* self, jb_String * value);

RTCIceTcpCandidateType RTCIceCandidateStats_tcpType(const RTCIceCandidateStats *self);

void RTCIceCandidateStats_set_tcpType(RTCIceCandidateStats* self, RTCIceTcpCandidateType * value);

RTCIceCandidateStats RTCIceCandidateStats_new();

#ifdef __cplusplus
}
#endif
