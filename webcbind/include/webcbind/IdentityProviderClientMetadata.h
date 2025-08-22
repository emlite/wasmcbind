#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityProviderClientMetadata */
DECLARE_EMLITE_TYPE(IdentityProviderClientMetadata, em_Val);

/** @brief Getter of the privacy_policy_url property */
jb_String IdentityProviderClientMetadata_privacy_policy_url(const IdentityProviderClientMetadata *self);

/** @brief Setter of the privacy_policy_url property */
void IdentityProviderClientMetadata_set_privacy_policy_url(IdentityProviderClientMetadata* self, jb_String * value);

/** @brief Getter of the terms_of_service_url property */
jb_String IdentityProviderClientMetadata_terms_of_service_url(const IdentityProviderClientMetadata *self);

/** @brief Setter of the terms_of_service_url property */
void IdentityProviderClientMetadata_set_terms_of_service_url(IdentityProviderClientMetadata* self, jb_String * value);

/** @brief Constructor of the IdentityProviderClientMetadata dictionary type */
IdentityProviderClientMetadata IdentityProviderClientMetadata_new();

#ifdef __cplusplus
}
#endif
