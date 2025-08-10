#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DigitalCredentialGetRequest.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DigitalCredentialRequestOptions, em_Val);

jb_Array DigitalCredentialRequestOptions_requests(const DigitalCredentialRequestOptions *self);

void DigitalCredentialRequestOptions_set_requests(DigitalCredentialRequestOptions* self, jb_Array * value);

DigitalCredentialRequestOptions DigitalCredentialRequestOptions_new();

#ifdef __cplusplus
}
#endif
