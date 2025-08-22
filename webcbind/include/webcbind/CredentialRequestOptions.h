#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PublicKeyCredentialRequestOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CredentialRequestOptions */
DECLARE_EMLITE_TYPE(CredentialRequestOptions, em_Val);

/** @brief Getter of the publicKey property */
PublicKeyCredentialRequestOptions CredentialRequestOptions_publicKey(const CredentialRequestOptions *self);

/** @brief Setter of the publicKey property */
void CredentialRequestOptions_set_publicKey(CredentialRequestOptions* self, PublicKeyCredentialRequestOptions * value);

/** @brief Constructor of the CredentialRequestOptions dictionary type */
CredentialRequestOptions CredentialRequestOptions_new();

#ifdef __cplusplus
}
#endif
