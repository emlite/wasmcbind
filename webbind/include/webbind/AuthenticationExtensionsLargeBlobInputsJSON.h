#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsLargeBlobInputsJSON, em_Val);

jb_String AuthenticationExtensionsLargeBlobInputsJSON_support(const AuthenticationExtensionsLargeBlobInputsJSON *self);

void AuthenticationExtensionsLargeBlobInputsJSON_set_support(AuthenticationExtensionsLargeBlobInputsJSON* self, jb_String * value);

bool AuthenticationExtensionsLargeBlobInputsJSON_read(const AuthenticationExtensionsLargeBlobInputsJSON *self);

void AuthenticationExtensionsLargeBlobInputsJSON_set_read(AuthenticationExtensionsLargeBlobInputsJSON* self, bool value);

jb_Any AuthenticationExtensionsLargeBlobInputsJSON_write(const AuthenticationExtensionsLargeBlobInputsJSON *self);

void AuthenticationExtensionsLargeBlobInputsJSON_set_write(AuthenticationExtensionsLargeBlobInputsJSON* self, jb_Any * value);

AuthenticationExtensionsLargeBlobInputsJSON AuthenticationExtensionsLargeBlobInputsJSON_new();

#ifdef __cplusplus
}
#endif
