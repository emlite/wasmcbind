#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "IdentityProviderBranding.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityProviderAPIConfig, em_Val);

jb_String IdentityProviderAPIConfig_accounts_endpoint(const IdentityProviderAPIConfig *self);

void IdentityProviderAPIConfig_set_accounts_endpoint(IdentityProviderAPIConfig* self, jb_String * value);

jb_String IdentityProviderAPIConfig_client_metadata_endpoint(const IdentityProviderAPIConfig *self);

void IdentityProviderAPIConfig_set_client_metadata_endpoint(IdentityProviderAPIConfig* self, jb_String * value);

jb_String IdentityProviderAPIConfig_id_assertion_endpoint(const IdentityProviderAPIConfig *self);

void IdentityProviderAPIConfig_set_id_assertion_endpoint(IdentityProviderAPIConfig* self, jb_String * value);

jb_String IdentityProviderAPIConfig_login_url(const IdentityProviderAPIConfig *self);

void IdentityProviderAPIConfig_set_login_url(IdentityProviderAPIConfig* self, jb_String * value);

jb_String IdentityProviderAPIConfig_disconnect_endpoint(const IdentityProviderAPIConfig *self);

void IdentityProviderAPIConfig_set_disconnect_endpoint(IdentityProviderAPIConfig* self, jb_String * value);

IdentityProviderBranding IdentityProviderAPIConfig_branding(const IdentityProviderAPIConfig *self);

void IdentityProviderAPIConfig_set_branding(IdentityProviderAPIConfig* self, IdentityProviderBranding * value);

bool IdentityProviderAPIConfig_supports_use_other_account(const IdentityProviderAPIConfig *self);

void IdentityProviderAPIConfig_set_supports_use_other_account(IdentityProviderAPIConfig* self, bool value);

jb_String IdentityProviderAPIConfig_account_label(const IdentityProviderAPIConfig *self);

void IdentityProviderAPIConfig_set_account_label(IdentityProviderAPIConfig* self, jb_String * value);

IdentityProviderAPIConfig IdentityProviderAPIConfig_new();

#ifdef __cplusplus
}
#endif
