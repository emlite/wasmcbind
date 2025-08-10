#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticationExtensionsPRFValuesJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsPRFInputsJSON, em_Val);

AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFInputsJSON_eval(const AuthenticationExtensionsPRFInputsJSON *self);

void AuthenticationExtensionsPRFInputsJSON_set_eval(AuthenticationExtensionsPRFInputsJSON* self, AuthenticationExtensionsPRFValuesJSON * value);

jb_Object AuthenticationExtensionsPRFInputsJSON_evalByCredential(const AuthenticationExtensionsPRFInputsJSON *self);

void AuthenticationExtensionsPRFInputsJSON_set_evalByCredential(AuthenticationExtensionsPRFInputsJSON* self, jb_Object * value);

AuthenticationExtensionsPRFInputsJSON AuthenticationExtensionsPRFInputsJSON_new();

#ifdef __cplusplus
}
#endif
