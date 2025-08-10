#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DigitalCredentialGetRequest, em_Val);

jb_String DigitalCredentialGetRequest_protocol(const DigitalCredentialGetRequest *self);

void DigitalCredentialGetRequest_set_protocol(DigitalCredentialGetRequest* self, jb_String * value);

jb_Object DigitalCredentialGetRequest_data(const DigitalCredentialGetRequest *self);

void DigitalCredentialGetRequest_set_data(DigitalCredentialGetRequest* self, jb_Object * value);

DigitalCredentialGetRequest DigitalCredentialGetRequest_new();

#ifdef __cplusplus
}
#endif
