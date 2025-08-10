#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DigitalCredentialCreateRequest.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DigitalCredentialCreationOptions, em_Val);

jb_Array DigitalCredentialCreationOptions_requests(const DigitalCredentialCreationOptions *self);

void DigitalCredentialCreationOptions_set_requests(DigitalCredentialCreationOptions* self, jb_Array * value);

DigitalCredentialCreationOptions DigitalCredentialCreationOptions_new();

#ifdef __cplusplus
}
#endif
