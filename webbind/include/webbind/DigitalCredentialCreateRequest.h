#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DigitalCredentialCreateRequest, em_Val);

jb_String DigitalCredentialCreateRequest_protocol(const DigitalCredentialCreateRequest *self);

void DigitalCredentialCreateRequest_set_protocol(DigitalCredentialCreateRequest* self, jb_String * value);

jb_Object DigitalCredentialCreateRequest_data(const DigitalCredentialCreateRequest *self);

void DigitalCredentialCreateRequest_set_data(DigitalCredentialCreateRequest* self, jb_Object * value);

DigitalCredentialCreateRequest DigitalCredentialCreateRequest_new();

#ifdef __cplusplus
}
#endif
