#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(OTPCredentialRequestOptions, em_Val);

jb_Array OTPCredentialRequestOptions_transport(const OTPCredentialRequestOptions *self);

void OTPCredentialRequestOptions_set_transport(OTPCredentialRequestOptions* self, jb_Array * value);

OTPCredentialRequestOptions OTPCredentialRequestOptions_new();

#ifdef __cplusplus
}
#endif
