#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticationExtensionsLargeBlobOutputsJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsClientOutputsJSON */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsClientOutputsJSON, em_Val);

/** @brief Getter of the largeBlob property */
AuthenticationExtensionsLargeBlobOutputsJSON AuthenticationExtensionsClientOutputsJSON_largeBlob(const AuthenticationExtensionsClientOutputsJSON *self);

/** @brief Setter of the largeBlob property */
void AuthenticationExtensionsClientOutputsJSON_set_largeBlob(AuthenticationExtensionsClientOutputsJSON* self, AuthenticationExtensionsLargeBlobOutputsJSON * value);

/** @brief Constructor of the AuthenticationExtensionsClientOutputsJSON dictionary type */
AuthenticationExtensionsClientOutputsJSON AuthenticationExtensionsClientOutputsJSON_new();

#ifdef __cplusplus
}
#endif
