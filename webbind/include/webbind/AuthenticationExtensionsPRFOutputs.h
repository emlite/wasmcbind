#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticationExtensionsPRFValues.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsPRFOutputs, em_Val);

bool AuthenticationExtensionsPRFOutputs_enabled(const AuthenticationExtensionsPRFOutputs *self);

void AuthenticationExtensionsPRFOutputs_set_enabled(AuthenticationExtensionsPRFOutputs* self, bool value);

AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFOutputs_results(const AuthenticationExtensionsPRFOutputs *self);

void AuthenticationExtensionsPRFOutputs_set_results(AuthenticationExtensionsPRFOutputs* self, AuthenticationExtensionsPRFValues * value);

AuthenticationExtensionsPRFOutputs AuthenticationExtensionsPRFOutputs_new();

#ifdef __cplusplus
}
#endif
