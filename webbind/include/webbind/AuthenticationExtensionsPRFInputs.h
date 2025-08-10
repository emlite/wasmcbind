#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticationExtensionsPRFValues.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsPRFInputs, em_Val);

AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFInputs_eval(const AuthenticationExtensionsPRFInputs *self);

void AuthenticationExtensionsPRFInputs_set_eval(AuthenticationExtensionsPRFInputs* self, AuthenticationExtensionsPRFValues * value);

jb_Object AuthenticationExtensionsPRFInputs_evalByCredential(const AuthenticationExtensionsPRFInputs *self);

void AuthenticationExtensionsPRFInputs_set_evalByCredential(AuthenticationExtensionsPRFInputs* self, jb_Object * value);

AuthenticationExtensionsPRFInputs AuthenticationExtensionsPRFInputs_new();

#ifdef __cplusplus
}
#endif
