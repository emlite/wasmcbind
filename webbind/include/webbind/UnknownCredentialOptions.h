#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(UnknownCredentialOptions, em_Val);

jb_String UnknownCredentialOptions_rpId(const UnknownCredentialOptions *self);

void UnknownCredentialOptions_set_rpId(UnknownCredentialOptions* self, jb_String * value);

jb_Any UnknownCredentialOptions_credentialId(const UnknownCredentialOptions *self);

void UnknownCredentialOptions_set_credentialId(UnknownCredentialOptions* self, jb_Any * value);

UnknownCredentialOptions UnknownCredentialOptions_new();

#ifdef __cplusplus
}
#endif
