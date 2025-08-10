#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCIdentityProvider, em_Val);

jb_Function RTCIdentityProvider_generateAssertion(const RTCIdentityProvider *self);

void RTCIdentityProvider_set_generateAssertion(RTCIdentityProvider* self, jb_Function * value);

jb_Function RTCIdentityProvider_validateAssertion(const RTCIdentityProvider *self);

void RTCIdentityProvider_set_validateAssertion(RTCIdentityProvider* self, jb_Function * value);

RTCIdentityProvider RTCIdentityProvider_new();

#ifdef __cplusplus
}
#endif
