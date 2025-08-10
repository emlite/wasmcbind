#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCIdentityValidationResult, em_Val);

jb_String RTCIdentityValidationResult_identity(const RTCIdentityValidationResult *self);

void RTCIdentityValidationResult_set_identity(RTCIdentityValidationResult* self, jb_String * value);

jb_String RTCIdentityValidationResult_contents(const RTCIdentityValidationResult *self);

void RTCIdentityValidationResult_set_contents(RTCIdentityValidationResult* self, jb_String * value);

RTCIdentityValidationResult RTCIdentityValidationResult_new();

#ifdef __cplusplus
}
#endif
