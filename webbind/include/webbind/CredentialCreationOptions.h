#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PublicKeyCredentialCreationOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CredentialCreationOptions, em_Val);

PublicKeyCredentialCreationOptions CredentialCreationOptions_publicKey(const CredentialCreationOptions *self);

void CredentialCreationOptions_set_publicKey(CredentialCreationOptions* self, PublicKeyCredentialCreationOptions * value);

CredentialCreationOptions CredentialCreationOptions_new();

#ifdef __cplusplus
}
#endif
