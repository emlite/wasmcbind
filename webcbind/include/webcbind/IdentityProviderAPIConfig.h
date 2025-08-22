#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "IdentityProviderBranding.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityProviderAPIConfig */
DECLARE_EMLITE_TYPE(IdentityProviderAPIConfig, em_Val);

/** @brief Getter of the accounts_endpoint property */
jb_String IdentityProviderAPIConfig_accounts_endpoint(const IdentityProviderAPIConfig *self);

/** @brief Setter of the accounts_endpoint property */
void IdentityProviderAPIConfig_set_accounts_endpoint(IdentityProviderAPIConfig* self, jb_String * value);

/** @brief Getter of the client_metadata_endpoint property */
jb_String IdentityProviderAPIConfig_client_metadata_endpoint(const IdentityProviderAPIConfig *self);

/** @brief Setter of the client_metadata_endpoint property */
void IdentityProviderAPIConfig_set_client_metadata_endpoint(IdentityProviderAPIConfig* self, jb_String * value);

/** @brief Getter of the id_assertion_endpoint property */
jb_String IdentityProviderAPIConfig_id_assertion_endpoint(const IdentityProviderAPIConfig *self);

/** @brief Setter of the id_assertion_endpoint property */
void IdentityProviderAPIConfig_set_id_assertion_endpoint(IdentityProviderAPIConfig* self, jb_String * value);

/** @brief Getter of the login_url property */
jb_String IdentityProviderAPIConfig_login_url(const IdentityProviderAPIConfig *self);

/** @brief Setter of the login_url property */
void IdentityProviderAPIConfig_set_login_url(IdentityProviderAPIConfig* self, jb_String * value);

/** @brief Getter of the disconnect_endpoint property */
jb_String IdentityProviderAPIConfig_disconnect_endpoint(const IdentityProviderAPIConfig *self);

/** @brief Setter of the disconnect_endpoint property */
void IdentityProviderAPIConfig_set_disconnect_endpoint(IdentityProviderAPIConfig* self, jb_String * value);

/** @brief Getter of the branding property */
IdentityProviderBranding IdentityProviderAPIConfig_branding(const IdentityProviderAPIConfig *self);

/** @brief Setter of the branding property */
void IdentityProviderAPIConfig_set_branding(IdentityProviderAPIConfig* self, IdentityProviderBranding * value);

/** @brief Getter of the supports_use_other_account property */
bool IdentityProviderAPIConfig_supports_use_other_account(const IdentityProviderAPIConfig *self);

/** @brief Setter of the supports_use_other_account property */
void IdentityProviderAPIConfig_set_supports_use_other_account(IdentityProviderAPIConfig* self, bool value);

/** @brief Getter of the account_label property */
jb_String IdentityProviderAPIConfig_account_label(const IdentityProviderAPIConfig *self);

/** @brief Setter of the account_label property */
void IdentityProviderAPIConfig_set_account_label(IdentityProviderAPIConfig* self, jb_String * value);

/** @brief Constructor of the IdentityProviderAPIConfig dictionary type */
IdentityProviderAPIConfig IdentityProviderAPIConfig_new();

#ifdef __cplusplus
}
#endif
