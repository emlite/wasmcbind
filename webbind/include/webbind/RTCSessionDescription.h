#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "RTCPeerConnection.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(RTCSessionDescription, em_Val);

RTCSessionDescription RTCSessionDescription_new(RTCSessionDescriptionInit * descriptionInitDict);

RTCSdpType RTCSessionDescription_type( const RTCSessionDescription *self);

jb_DOMString RTCSessionDescription_sdp( const RTCSessionDescription *self);

RTCSessionDescriptionInit RTCSessionDescription_toJSON(RTCSessionDescription* self );
