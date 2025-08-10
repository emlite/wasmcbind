#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "IdentityProviderRequestOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityCredentialRequestOptions, em_Val);

jb_Array IdentityCredentialRequestOptions_providers(const IdentityCredentialRequestOptions *self);

void IdentityCredentialRequestOptions_set_providers(IdentityCredentialRequestOptions* self, jb_Array * value);

IdentityCredentialRequestOptionsContext IdentityCredentialRequestOptions_context(const IdentityCredentialRequestOptions *self);

void IdentityCredentialRequestOptions_set_context(IdentityCredentialRequestOptions* self, IdentityCredentialRequestOptionsContext * value);

IdentityCredentialRequestOptionsMode IdentityCredentialRequestOptions_mode(const IdentityCredentialRequestOptions *self);

void IdentityCredentialRequestOptions_set_mode(IdentityCredentialRequestOptions* self, IdentityCredentialRequestOptionsMode * value);

IdentityCredentialRequestOptions IdentityCredentialRequestOptions_new();

#ifdef __cplusplus
}
#endif
