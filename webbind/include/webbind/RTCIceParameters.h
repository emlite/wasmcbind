#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCIceParameters, em_Val);

jb_String RTCIceParameters_usernameFragment(const RTCIceParameters *self);

void RTCIceParameters_set_usernameFragment(RTCIceParameters* self, jb_String * value);

jb_String RTCIceParameters_password(const RTCIceParameters *self);

void RTCIceParameters_set_password(RTCIceParameters* self, jb_String * value);

RTCIceParameters RTCIceParameters_new();

#ifdef __cplusplus
}
#endif
