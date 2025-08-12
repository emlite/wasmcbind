#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PublicKeyCredentialCreationOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CredentialCreationOptions */
DECLARE_EMLITE_TYPE(CredentialCreationOptions, em_Val);

/** @brief Getter of the publicKey property */
PublicKeyCredentialCreationOptions CredentialCreationOptions_publicKey(const CredentialCreationOptions *self);

/** @brief Setter of the publicKey property */
void CredentialCreationOptions_set_publicKey(CredentialCreationOptions* self, PublicKeyCredentialCreationOptions * value);

/** @brief Constructor of the CredentialCreationOptions dictionary type */
CredentialCreationOptions CredentialCreationOptions_new();

#ifdef __cplusplus
}
#endif
