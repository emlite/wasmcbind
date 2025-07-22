#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "RTCPeerConnection.h"
#include "enums.h"


typedef struct {
  em_Val inner;
} RTCSessionDescription;


DECLARE_EMLITE_TYPE(RTCSessionDescription, em_Val);

RTCSessionDescription RTCSessionDescription_new(const RTCSessionDescriptionInit* descriptionInitDict);

RTCSdpType RTCSessionDescription_type( const RTCSessionDescription *self);

jb_DOMString RTCSessionDescription_sdp( const RTCSessionDescription *self);

RTCSessionDescriptionInit RTCSessionDescription_toJSON(RTCSessionDescription* self );
