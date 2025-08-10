#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsPRFValues, em_Val);

jb_Any AuthenticationExtensionsPRFValues_first(const AuthenticationExtensionsPRFValues *self);

void AuthenticationExtensionsPRFValues_set_first(AuthenticationExtensionsPRFValues* self, jb_Any * value);

jb_Any AuthenticationExtensionsPRFValues_second(const AuthenticationExtensionsPRFValues *self);

void AuthenticationExtensionsPRFValues_set_second(AuthenticationExtensionsPRFValues* self, jb_Any * value);

AuthenticationExtensionsPRFValues AuthenticationExtensionsPRFValues_new();

#ifdef __cplusplus
}
#endif
