#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityProviderClientMetadata, em_Val);

jb_String IdentityProviderClientMetadata_privacy_policy_url(const IdentityProviderClientMetadata *self);

void IdentityProviderClientMetadata_set_privacy_policy_url(IdentityProviderClientMetadata* self, jb_String * value);

jb_String IdentityProviderClientMetadata_terms_of_service_url(const IdentityProviderClientMetadata *self);

void IdentityProviderClientMetadata_set_terms_of_service_url(IdentityProviderClientMetadata* self, jb_String * value);

IdentityProviderClientMetadata IdentityProviderClientMetadata_new();

#ifdef __cplusplus
}
#endif
