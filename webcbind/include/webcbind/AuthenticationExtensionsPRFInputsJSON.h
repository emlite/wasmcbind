#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AuthenticationExtensionsPRFValuesJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsPRFInputsJSON */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsPRFInputsJSON, em_Val);

/** @brief Getter of the eval property */
AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFInputsJSON_eval(const AuthenticationExtensionsPRFInputsJSON *self);

/** @brief Setter of the eval property */
void AuthenticationExtensionsPRFInputsJSON_set_eval(AuthenticationExtensionsPRFInputsJSON* self, AuthenticationExtensionsPRFValuesJSON * value);

/** @brief Getter of the evalByCredential property */
jb_Object AuthenticationExtensionsPRFInputsJSON_evalByCredential(const AuthenticationExtensionsPRFInputsJSON *self);

/** @brief Setter of the evalByCredential property */
void AuthenticationExtensionsPRFInputsJSON_set_evalByCredential(AuthenticationExtensionsPRFInputsJSON* self, jb_Object * value);

/** @brief Constructor of the AuthenticationExtensionsPRFInputsJSON dictionary type */
AuthenticationExtensionsPRFInputsJSON AuthenticationExtensionsPRFInputsJSON_new();

#ifdef __cplusplus
}
#endif
