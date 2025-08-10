#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PublicKeyCredentialRequestOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CredentialRequestOptions, em_Val);

PublicKeyCredentialRequestOptions CredentialRequestOptions_publicKey(const CredentialRequestOptions *self);

void CredentialRequestOptions_set_publicKey(CredentialRequestOptions* self, PublicKeyCredentialRequestOptions * value);

CredentialRequestOptions CredentialRequestOptions_new();

#ifdef __cplusplus
}
#endif
