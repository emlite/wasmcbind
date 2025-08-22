#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "IdentityProviderRequestOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityCredentialRequestOptions */
DECLARE_EMLITE_TYPE(IdentityCredentialRequestOptions, em_Val);

/** @brief Getter of the providers property */
jb_Array IdentityCredentialRequestOptions_providers(const IdentityCredentialRequestOptions *self);

/** @brief Setter of the providers property */
void IdentityCredentialRequestOptions_set_providers(IdentityCredentialRequestOptions* self, jb_Array * value);

/** @brief Getter of the context property */
IdentityCredentialRequestOptionsContext IdentityCredentialRequestOptions_context(const IdentityCredentialRequestOptions *self);

/** @brief Setter of the context property */
void IdentityCredentialRequestOptions_set_context(IdentityCredentialRequestOptions* self, IdentityCredentialRequestOptionsContext * value);

/** @brief Getter of the mode property */
IdentityCredentialRequestOptionsMode IdentityCredentialRequestOptions_mode(const IdentityCredentialRequestOptions *self);

/** @brief Setter of the mode property */
void IdentityCredentialRequestOptions_set_mode(IdentityCredentialRequestOptions* self, IdentityCredentialRequestOptionsMode * value);

/** @brief Constructor of the IdentityCredentialRequestOptions dictionary type */
IdentityCredentialRequestOptions IdentityCredentialRequestOptions_new();

#ifdef __cplusplus
}
#endif
