#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AuthenticationExtensionsLargeBlobInputs.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsClientInputs */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsClientInputs, em_Val);

/** @brief Getter of the largeBlob property */
AuthenticationExtensionsLargeBlobInputs AuthenticationExtensionsClientInputs_largeBlob(const AuthenticationExtensionsClientInputs *self);

/** @brief Setter of the largeBlob property */
void AuthenticationExtensionsClientInputs_set_largeBlob(AuthenticationExtensionsClientInputs* self, AuthenticationExtensionsLargeBlobInputs * value);

/** @brief Constructor of the AuthenticationExtensionsClientInputs dictionary type */
AuthenticationExtensionsClientInputs AuthenticationExtensionsClientInputs_new();

#ifdef __cplusplus
}
#endif
