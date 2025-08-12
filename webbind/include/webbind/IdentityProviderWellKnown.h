#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityProviderWellKnown */
DECLARE_EMLITE_TYPE(IdentityProviderWellKnown, em_Val);

/** @brief Getter of the provider_urls property */
jb_Array IdentityProviderWellKnown_provider_urls(const IdentityProviderWellKnown *self);

/** @brief Setter of the provider_urls property */
void IdentityProviderWellKnown_set_provider_urls(IdentityProviderWellKnown* self, jb_Array * value);

/** @brief Getter of the accounts_endpoint property */
jb_String IdentityProviderWellKnown_accounts_endpoint(const IdentityProviderWellKnown *self);

/** @brief Setter of the accounts_endpoint property */
void IdentityProviderWellKnown_set_accounts_endpoint(IdentityProviderWellKnown* self, jb_String * value);

/** @brief Getter of the login_url property */
jb_String IdentityProviderWellKnown_login_url(const IdentityProviderWellKnown *self);

/** @brief Setter of the login_url property */
void IdentityProviderWellKnown_set_login_url(IdentityProviderWellKnown* self, jb_String * value);

/** @brief Constructor of the IdentityProviderWellKnown dictionary type */
IdentityProviderWellKnown IdentityProviderWellKnown_new();

#ifdef __cplusplus
}
#endif
