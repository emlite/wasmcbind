#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsLargeBlobOutputs */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsLargeBlobOutputs, em_Val);

/** @brief Getter of the supported property */
bool AuthenticationExtensionsLargeBlobOutputs_supported(const AuthenticationExtensionsLargeBlobOutputs *self);

/** @brief Setter of the supported property */
void AuthenticationExtensionsLargeBlobOutputs_set_supported(AuthenticationExtensionsLargeBlobOutputs* self, bool value);

/** @brief Getter of the blob property */
jb_ArrayBuffer AuthenticationExtensionsLargeBlobOutputs_blob(const AuthenticationExtensionsLargeBlobOutputs *self);

/** @brief Setter of the blob property */
void AuthenticationExtensionsLargeBlobOutputs_set_blob(AuthenticationExtensionsLargeBlobOutputs* self, jb_ArrayBuffer * value);

/** @brief Getter of the written property */
bool AuthenticationExtensionsLargeBlobOutputs_written(const AuthenticationExtensionsLargeBlobOutputs *self);

/** @brief Setter of the written property */
void AuthenticationExtensionsLargeBlobOutputs_set_written(AuthenticationExtensionsLargeBlobOutputs* self, bool value);

/** @brief Constructor of the AuthenticationExtensionsLargeBlobOutputs dictionary type */
AuthenticationExtensionsLargeBlobOutputs AuthenticationExtensionsLargeBlobOutputs_new();

#ifdef __cplusplus
}
#endif
