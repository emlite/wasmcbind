#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityProviderWellKnown, em_Val);

jb_Array IdentityProviderWellKnown_provider_urls(const IdentityProviderWellKnown *self);

void IdentityProviderWellKnown_set_provider_urls(IdentityProviderWellKnown* self, jb_Array * value);

jb_String IdentityProviderWellKnown_accounts_endpoint(const IdentityProviderWellKnown *self);

void IdentityProviderWellKnown_set_accounts_endpoint(IdentityProviderWellKnown* self, jb_String * value);

jb_String IdentityProviderWellKnown_login_url(const IdentityProviderWellKnown *self);

void IdentityProviderWellKnown_set_login_url(IdentityProviderWellKnown* self, jb_String * value);

IdentityProviderWellKnown IdentityProviderWellKnown_new();

#ifdef __cplusplus
}
#endif
