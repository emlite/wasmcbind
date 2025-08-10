#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCIdentityProviderDetails.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCIdentityAssertionResult, em_Val);

RTCIdentityProviderDetails RTCIdentityAssertionResult_idp(const RTCIdentityAssertionResult *self);

void RTCIdentityAssertionResult_set_idp(RTCIdentityAssertionResult* self, RTCIdentityProviderDetails * value);

jb_String RTCIdentityAssertionResult_assertion(const RTCIdentityAssertionResult *self);

void RTCIdentityAssertionResult_set_assertion(RTCIdentityAssertionResult* self, jb_String * value);

RTCIdentityAssertionResult RTCIdentityAssertionResult_new();

#ifdef __cplusplus
}
#endif
