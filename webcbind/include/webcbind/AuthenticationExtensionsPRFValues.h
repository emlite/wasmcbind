#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationExtensionsPRFValues */
DECLARE_EMLITE_TYPE(AuthenticationExtensionsPRFValues, em_Val);

/** @brief Getter of the first property */
jb_Any AuthenticationExtensionsPRFValues_first(const AuthenticationExtensionsPRFValues *self);

/** @brief Setter of the first property */
void AuthenticationExtensionsPRFValues_set_first(AuthenticationExtensionsPRFValues* self, jb_Any * value);

/** @brief Getter of the second property */
jb_Any AuthenticationExtensionsPRFValues_second(const AuthenticationExtensionsPRFValues *self);

/** @brief Setter of the second property */
void AuthenticationExtensionsPRFValues_set_second(AuthenticationExtensionsPRFValues* self, jb_Any * value);

/** @brief Constructor of the AuthenticationExtensionsPRFValues dictionary type */
AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFValues_new();

#ifdef __cplusplus
}
#endif
