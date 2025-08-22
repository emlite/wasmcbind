#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsPRFValuesJSON */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsPRFValuesJSON, em_Val);

/** @brief Getter of the first property */
jb_Any AuthenticationExtensionsPRFValuesJSON_first(const AuthenticationExtensionsPRFValuesJSON *self);

/** @brief Setter of the first property */
void AuthenticationExtensionsPRFValuesJSON_set_first(AuthenticationExtensionsPRFValuesJSON* self, jb_Any * value);

/** @brief Getter of the second property */
jb_Any AuthenticationExtensionsPRFValuesJSON_second(const AuthenticationExtensionsPRFValuesJSON *self);

/** @brief Setter of the second property */
void AuthenticationExtensionsPRFValuesJSON_set_second(AuthenticationExtensionsPRFValuesJSON* self, jb_Any * value);

/** @brief Constructor of the AuthenticationExtensionsPRFValuesJSON dictionary type */
AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFValuesJSON_new();

#ifdef __cplusplus
}
#endif
