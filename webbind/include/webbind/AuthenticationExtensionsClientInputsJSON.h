#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticationExtensionsLargeBlobInputsJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsClientInputsJSON, em_Val);

AuthenticationExtensionsLargeBlobInputsJSON AuthenticationExtensionsClientInputsJSON_largeBlob(const AuthenticationExtensionsClientInputsJSON *self);

void AuthenticationExtensionsClientInputsJSON_set_largeBlob(AuthenticationExtensionsClientInputsJSON* self, AuthenticationExtensionsLargeBlobInputsJSON * value);

AuthenticationExtensionsClientInputsJSON AuthenticationExtensionsClientInputsJSON_new();

#ifdef __cplusplus
}
#endif
