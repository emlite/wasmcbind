#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticationExtensionsLargeBlobInputsJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsClientInputsJSON */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsClientInputsJSON, em_Val);

/** @brief Getter of the largeBlob property */
AuthenticationExtensionsLargeBlobInputsJSON AuthenticationExtensionsClientInputsJSON_largeBlob(const AuthenticationExtensionsClientInputsJSON *self);

/** @brief Setter of the largeBlob property */
void AuthenticationExtensionsClientInputsJSON_set_largeBlob(AuthenticationExtensionsClientInputsJSON* self, AuthenticationExtensionsLargeBlobInputsJSON * value);

/** @brief Constructor of the AuthenticationExtensionsClientInputsJSON dictionary type */
AuthenticationExtensionsClientInputsJSON AuthenticationExtensionsClientInputsJSON_new();

#ifdef __cplusplus
}
#endif
