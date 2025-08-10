#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "IdentityProviderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityCredentialDisconnectOptions, IdentityProviderConfig);

jb_String IdentityCredentialDisconnectOptions_accountHint(const IdentityCredentialDisconnectOptions *self);

void IdentityCredentialDisconnectOptions_set_accountHint(IdentityCredentialDisconnectOptions* self, jb_String * value);

IdentityCredentialDisconnectOptions IdentityCredentialDisconnectOptions_new();

#ifdef __cplusplus
}
#endif
