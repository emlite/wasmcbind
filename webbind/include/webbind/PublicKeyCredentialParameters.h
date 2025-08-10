#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PublicKeyCredentialParameters, em_Val);

jb_String PublicKeyCredentialParameters_type(const PublicKeyCredentialParameters *self);

void PublicKeyCredentialParameters_set_type(PublicKeyCredentialParameters* self, jb_String * value);

jb_Any PublicKeyCredentialParameters_alg(const PublicKeyCredentialParameters *self);

void PublicKeyCredentialParameters_set_alg(PublicKeyCredentialParameters* self, jb_Any * value);

PublicKeyCredentialParameters PublicKeyCredentialParameters_new();

#ifdef __cplusplus
}
#endif
