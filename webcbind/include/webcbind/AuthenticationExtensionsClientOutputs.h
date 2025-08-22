#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AuthenticationExtensionsLargeBlobOutputs.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsClientOutputs */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsClientOutputs, em_Val);

/** @brief Getter of the largeBlob property */
AuthenticationExtensionsLargeBlobOutputs AuthenticationExtensionsClientOutputs_largeBlob(const AuthenticationExtensionsClientOutputs *self);

/** @brief Setter of the largeBlob property */
void AuthenticationExtensionsClientOutputs_set_largeBlob(AuthenticationExtensionsClientOutputs* self, AuthenticationExtensionsLargeBlobOutputs * value);

/** @brief Constructor of the AuthenticationExtensionsClientOutputs dictionary type */
AuthenticationExtensionsClientOutputs AuthenticationExtensionsClientOutputs_new();

#ifdef __cplusplus
}
#endif
