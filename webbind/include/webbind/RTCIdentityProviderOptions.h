#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCIdentityProviderOptions, em_Val);

jb_String RTCIdentityProviderOptions_protocol(const RTCIdentityProviderOptions *self);

void RTCIdentityProviderOptions_set_protocol(RTCIdentityProviderOptions* self, jb_String * value);

jb_String RTCIdentityProviderOptions_usernameHint(const RTCIdentityProviderOptions *self);

void RTCIdentityProviderOptions_set_usernameHint(RTCIdentityProviderOptions* self, jb_String * value);

jb_String RTCIdentityProviderOptions_peerIdentity(const RTCIdentityProviderOptions *self);

void RTCIdentityProviderOptions_set_peerIdentity(RTCIdentityProviderOptions* self, jb_String * value);

RTCIdentityProviderOptions RTCIdentityProviderOptions_new();

#ifdef __cplusplus
}
#endif
