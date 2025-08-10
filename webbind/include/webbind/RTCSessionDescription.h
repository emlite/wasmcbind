#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCSessionDescriptionInit RTCSessionDescriptionInit;

DECLARE_EMLITE_TYPE(RTCSessionDescription, em_Val);

RTCSessionDescription RTCSessionDescription_new(RTCSessionDescriptionInit * descriptionInitDict);

RTCSdpType RTCSessionDescription_type(const RTCSessionDescription *self);

jb_String RTCSessionDescription_sdp(const RTCSessionDescription *self);

RTCSessionDescriptionInit RTCSessionDescription_toJSON(RTCSessionDescription* self );

#ifdef __cplusplus
}
#endif
