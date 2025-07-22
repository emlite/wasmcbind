#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct RTCIceCandidate RTCIceCandidate;


typedef struct {
  em_Val inner;
} RTCIceCandidatePair;


DECLARE_EMLITE_TYPE(RTCIceCandidatePair, em_Val);

RTCIceCandidate RTCIceCandidatePair_local( const RTCIceCandidatePair *self);

RTCIceCandidate RTCIceCandidatePair_remote( const RTCIceCandidatePair *self);
