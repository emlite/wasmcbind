#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsLargeBlobOutputsJSON */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsLargeBlobOutputsJSON, em_Val);

/** @brief Getter of the supported property */
bool AuthenticationExtensionsLargeBlobOutputsJSON_supported(const AuthenticationExtensionsLargeBlobOutputsJSON *self);

/** @brief Setter of the supported property */
void AuthenticationExtensionsLargeBlobOutputsJSON_set_supported(AuthenticationExtensionsLargeBlobOutputsJSON* self, bool value);

/** @brief Getter of the blob property */
jb_Any AuthenticationExtensionsLargeBlobOutputsJSON_blob(const AuthenticationExtensionsLargeBlobOutputsJSON *self);

/** @brief Setter of the blob property */
void AuthenticationExtensionsLargeBlobOutputsJSON_set_blob(AuthenticationExtensionsLargeBlobOutputsJSON* self, jb_Any * value);

/** @brief Getter of the written property */
bool AuthenticationExtensionsLargeBlobOutputsJSON_written(const AuthenticationExtensionsLargeBlobOutputsJSON *self);

/** @brief Setter of the written property */
void AuthenticationExtensionsLargeBlobOutputsJSON_set_written(AuthenticationExtensionsLargeBlobOutputsJSON* self, bool value);

/** @brief Constructor of the AuthenticationExtensionsLargeBlobOutputsJSON dictionary type */
AuthenticationExtensionsLargeBlobOutputsJSON AuthenticationExtensionsLargeBlobOutputsJSON_new();

#ifdef __cplusplus
}
#endif
