#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsPRFValuesJSON, em_Val);

jb_Any AuthenticationExtensionsPRFValuesJSON_first(const AuthenticationExtensionsPRFValuesJSON *self);

void AuthenticationExtensionsPRFValuesJSON_set_first(AuthenticationExtensionsPRFValuesJSON* self, jb_Any * value);

jb_Any AuthenticationExtensionsPRFValuesJSON_second(const AuthenticationExtensionsPRFValuesJSON *self);

void AuthenticationExtensionsPRFValuesJSON_set_second(AuthenticationExtensionsPRFValuesJSON* self, jb_Any * value);

AuthenticationExtensionsPRFValuesJSON AuthenticationExtensionsPRFValuesJSON_new();

#ifdef __cplusplus
}
#endif
