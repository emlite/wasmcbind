#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCIceCandidateInit, em_Val);

jb_String RTCIceCandidateInit_candidate(const RTCIceCandidateInit *self);

void RTCIceCandidateInit_set_candidate(RTCIceCandidateInit* self, jb_String * value);

jb_String RTCIceCandidateInit_sdpMid(const RTCIceCandidateInit *self);

void RTCIceCandidateInit_set_sdpMid(RTCIceCandidateInit* self, jb_String * value);

unsigned short RTCIceCandidateInit_sdpMLineIndex(const RTCIceCandidateInit *self);

void RTCIceCandidateInit_set_sdpMLineIndex(RTCIceCandidateInit* self, unsigned short value);

jb_String RTCIceCandidateInit_usernameFragment(const RTCIceCandidateInit *self);

void RTCIceCandidateInit_set_usernameFragment(RTCIceCandidateInit* self, jb_String * value);

RTCIceCandidateInit RTCIceCandidateInit_new();

#ifdef __cplusplus
}
#endif
