#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AuthenticationExtensionsPRFValuesJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsPRFOutputsJSON */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsPRFOutputsJSON, em_Val);

/** @brief Getter of the enabled property */
bool AuthenticationExtensionsPRFOutputsJSON_enabled(const AuthenticationExtensionsPRFOutputsJSON *self);

/** @brief Setter of the enabled property */
void AuthenticationExtensionsPRFOutputsJSON_set_enabled(AuthenticationExtensionsPRFOutputsJSON* self, bool value);

/** @brief Getter of the results property */
AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFOutputsJSON_results(const AuthenticationExtensionsPRFOutputsJSON *self);

/** @brief Setter of the results property */
void AuthenticationExtensionsPRFOutputsJSON_set_results(AuthenticationExtensionsPRFOutputsJSON* self, AuthenticationExtensionsPRFValuesJSON * value);

/** @brief Constructor of the AuthenticationExtensionsPRFOutputsJSON dictionary type */
AuthenticationExtensionsPRFOutputsJSON AuthenticationExtensionsPRFOutputsJSON_new();

#ifdef __cplusplus
}
#endif
