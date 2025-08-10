#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticationExtensionsPRFValuesJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsPRFOutputsJSON, em_Val);

bool AuthenticationExtensionsPRFOutputsJSON_enabled(const AuthenticationExtensionsPRFOutputsJSON *self);

void AuthenticationExtensionsPRFOutputsJSON_set_enabled(AuthenticationExtensionsPRFOutputsJSON* self, bool value);

AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFOutputsJSON_results(const AuthenticationExtensionsPRFOutputsJSON *self);

void AuthenticationExtensionsPRFOutputsJSON_set_results(AuthenticationExtensionsPRFOutputsJSON* self, AuthenticationExtensionsPRFValuesJSON * value);

AuthenticationExtensionsPRFOutputsJSON AuthenticationExtensionsPRFOutputsJSON_new();

#ifdef __cplusplus
}
#endif
