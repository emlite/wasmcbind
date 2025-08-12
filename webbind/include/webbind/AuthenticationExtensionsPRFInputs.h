#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticationExtensionsPRFValues.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsPRFInputs */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsPRFInputs, em_Val);

/** @brief Getter of the eval property */
AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFInputs_eval(const AuthenticationExtensionsPRFInputs *self);

/** @brief Setter of the eval property */
void AuthenticationExtensionsPRFInputs_set_eval(AuthenticationExtensionsPRFInputs* self, AuthenticationExtensionsPRFValues * value);

/** @brief Getter of the evalByCredential property */
jb_Object AuthenticationExtensionsPRFInputs_evalByCredential(const AuthenticationExtensionsPRFInputs *self);

/** @brief Setter of the evalByCredential property */
void AuthenticationExtensionsPRFInputs_set_evalByCredential(AuthenticationExtensionsPRFInputs* self, jb_Object * value);

/** @brief Constructor of the AuthenticationExtensionsPRFInputs dictionary type */
AuthenticationExtensionsPRFInputs AuthenticationExtensionsPRFInputs_new();

#ifdef __cplusplus
}
#endif
