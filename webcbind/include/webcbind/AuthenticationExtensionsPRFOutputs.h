#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AuthenticationExtensionsPRFValues.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsPRFOutputs */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsPRFOutputs, em_Val);

/** @brief Getter of the enabled property */
bool AuthenticationExtensionsPRFOutputs_enabled(const AuthenticationExtensionsPRFOutputs *self);

/** @brief Setter of the enabled property */
void AuthenticationExtensionsPRFOutputs_set_enabled(AuthenticationExtensionsPRFOutputs* self, bool value);

/** @brief Getter of the results property */
AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFOutputs_results(const AuthenticationExtensionsPRFOutputs *self);

/** @brief Setter of the results property */
void AuthenticationExtensionsPRFOutputs_set_results(AuthenticationExtensionsPRFOutputs* self, AuthenticationExtensionsPRFValues * value);

/** @brief Constructor of the AuthenticationExtensionsPRFOutputs dictionary type */
AuthenticationExtensionsPRFOutputs AuthenticationExtensionsPRFOutputs_new();

#ifdef __cplusplus
}
#endif
