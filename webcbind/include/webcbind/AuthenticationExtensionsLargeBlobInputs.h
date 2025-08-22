#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsLargeBlobInputs */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsLargeBlobInputs, em_Val);

/** @brief Getter of the support property */
jb_String AuthenticationExtensionsLargeBlobInputs_support(const AuthenticationExtensionsLargeBlobInputs *self);

/** @brief Setter of the support property */
void AuthenticationExtensionsLargeBlobInputs_set_support(AuthenticationExtensionsLargeBlobInputs* self, jb_String * value);

/** @brief Getter of the read property */
bool AuthenticationExtensionsLargeBlobInputs_read(const AuthenticationExtensionsLargeBlobInputs *self);

/** @brief Setter of the read property */
void AuthenticationExtensionsLargeBlobInputs_set_read(AuthenticationExtensionsLargeBlobInputs* self, bool value);

/** @brief Getter of the write property */
jb_Any AuthenticationExtensionsLargeBlobInputs_write(const AuthenticationExtensionsLargeBlobInputs *self);

/** @brief Setter of the write property */
void AuthenticationExtensionsLargeBlobInputs_set_write(AuthenticationExtensionsLargeBlobInputs* self, jb_Any * value);

/** @brief Constructor of the AuthenticationExtensionsLargeBlobInputs dictionary type */
AuthenticationExtensionsLargeBlobInputs AuthenticationExtensionsLargeBlobInputs_new();

#ifdef __cplusplus
}
#endif
