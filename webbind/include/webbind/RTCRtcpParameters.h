#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtcpParameters, em_Val);

jb_String RTCRtcpParameters_cname(const RTCRtcpParameters *self);

void RTCRtcpParameters_set_cname(RTCRtcpParameters* self, jb_String * value);

bool RTCRtcpParameters_reducedSize(const RTCRtcpParameters *self);

void RTCRtcpParameters_set_reducedSize(RTCRtcpParameters* self, bool value);

RTCRtcpParameters RTCRtcpParameters_new();

#ifdef __cplusplus
}
#endif
