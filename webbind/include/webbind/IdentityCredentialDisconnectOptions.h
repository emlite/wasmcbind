#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "IdentityProviderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityCredentialDisconnectOptions */
DECLARE_EMLITE_TYPE(IdentityCredentialDisconnectOptions, IdentityProviderConfig);

/** @brief Getter of the accountHint property */
jb_String IdentityCredentialDisconnectOptions_accountHint(const IdentityCredentialDisconnectOptions *self);

/** @brief Setter of the accountHint property */
void IdentityCredentialDisconnectOptions_set_accountHint(IdentityCredentialDisconnectOptions* self, jb_String * value);

/** @brief Constructor of the IdentityCredentialDisconnectOptions dictionary type */
IdentityCredentialDisconnectOptions IdentityCredentialDisconnectOptions_new();

#ifdef __cplusplus
}
#endif
