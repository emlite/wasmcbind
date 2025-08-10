#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCIdentityProviderDetails, em_Val);

jb_String RTCIdentityProviderDetails_domain(const RTCIdentityProviderDetails *self);

void RTCIdentityProviderDetails_set_domain(RTCIdentityProviderDetails* self, jb_String * value);

jb_String RTCIdentityProviderDetails_protocol(const RTCIdentityProviderDetails *self);

void RTCIdentityProviderDetails_set_protocol(RTCIdentityProviderDetails* self, jb_String * value);

RTCIdentityProviderDetails RTCIdentityProviderDetails_new();

#ifdef __cplusplus
}
#endif
