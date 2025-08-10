#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "IdentityProviderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityProviderRequestOptions, IdentityProviderConfig);

jb_String IdentityProviderRequestOptions_nonce(const IdentityProviderRequestOptions *self);

void IdentityProviderRequestOptions_set_nonce(IdentityProviderRequestOptions* self, jb_String * value);

jb_String IdentityProviderRequestOptions_loginHint(const IdentityProviderRequestOptions *self);

void IdentityProviderRequestOptions_set_loginHint(IdentityProviderRequestOptions* self, jb_String * value);

jb_String IdentityProviderRequestOptions_domainHint(const IdentityProviderRequestOptions *self);

void IdentityProviderRequestOptions_set_domainHint(IdentityProviderRequestOptions* self, jb_String * value);

jb_Array IdentityProviderRequestOptions_fields(const IdentityProviderRequestOptions *self);

void IdentityProviderRequestOptions_set_fields(IdentityProviderRequestOptions* self, jb_Array * value);

jb_Any IdentityProviderRequestOptions_params(const IdentityProviderRequestOptions *self);

void IdentityProviderRequestOptions_set_params(IdentityProviderRequestOptions* self, jb_Any * value);

IdentityProviderRequestOptions IdentityProviderRequestOptions_new();

#ifdef __cplusplus
}
#endif
