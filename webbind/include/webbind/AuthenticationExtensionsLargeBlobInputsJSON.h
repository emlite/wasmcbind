#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsLargeBlobInputsJSON */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsLargeBlobInputsJSON, em_Val);

/** @brief Getter of the support property */
jb_String AuthenticationExtensionsLargeBlobInputsJSON_support(const AuthenticationExtensionsLargeBlobInputsJSON *self);

/** @brief Setter of the support property */
void AuthenticationExtensionsLargeBlobInputsJSON_set_support(AuthenticationExtensionsLargeBlobInputsJSON* self, jb_String * value);

/** @brief Getter of the read property */
bool AuthenticationExtensionsLargeBlobInputsJSON_read(const AuthenticationExtensionsLargeBlobInputsJSON *self);

/** @brief Setter of the read property */
void AuthenticationExtensionsLargeBlobInputsJSON_set_read(AuthenticationExtensionsLargeBlobInputsJSON* self, bool value);

/** @brief Getter of the write property */
jb_Any AuthenticationExtensionsLargeBlobInputsJSON_write(const AuthenticationExtensionsLargeBlobInputsJSON *self);

/** @brief Setter of the write property */
void AuthenticationExtensionsLargeBlobInputsJSON_set_write(AuthenticationExtensionsLargeBlobInputsJSON* self, jb_Any * value);

/** @brief Constructor of the AuthenticationExtensionsLargeBlobInputsJSON dictionary type */
AuthenticationExtensionsLargeBlobInputsJSON AuthenticationExtensionsLargeBlobInputsJSON_new();

#ifdef __cplusplus
}
#endif
