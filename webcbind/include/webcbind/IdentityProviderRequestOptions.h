#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "IdentityProviderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityProviderRequestOptions */
DECLARE_EMLITE_TYPE(IdentityProviderRequestOptions, IdentityProviderConfig);

/** @brief Getter of the nonce property */
jb_String IdentityProviderRequestOptions_nonce(const IdentityProviderRequestOptions *self);

/** @brief Setter of the nonce property */
void IdentityProviderRequestOptions_set_nonce(IdentityProviderRequestOptions* self, jb_String * value);

/** @brief Getter of the loginHint property */
jb_String IdentityProviderRequestOptions_loginHint(const IdentityProviderRequestOptions *self);

/** @brief Setter of the loginHint property */
void IdentityProviderRequestOptions_set_loginHint(IdentityProviderRequestOptions* self, jb_String * value);

/** @brief Getter of the domainHint property */
jb_String IdentityProviderRequestOptions_domainHint(const IdentityProviderRequestOptions *self);

/** @brief Setter of the domainHint property */
void IdentityProviderRequestOptions_set_domainHint(IdentityProviderRequestOptions* self, jb_String * value);

/** @brief Getter of the fields property */
jb_Array IdentityProviderRequestOptions_fields(const IdentityProviderRequestOptions *self);

/** @brief Setter of the fields property */
void IdentityProviderRequestOptions_set_fields(IdentityProviderRequestOptions* self, jb_Array * value);

/** @brief Getter of the params property */
jb_Any IdentityProviderRequestOptions_params(const IdentityProviderRequestOptions *self);

/** @brief Setter of the params property */
void IdentityProviderRequestOptions_set_params(IdentityProviderRequestOptions* self, jb_Any * value);

/** @brief Constructor of the IdentityProviderRequestOptions dictionary type */
IdentityProviderRequestOptions IdentityProviderRequestOptions_new();

#ifdef __cplusplus
}
#endif
