#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticationExtensionsLargeBlobOutputsJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsClientOutputsJSON, em_Val);

AuthenticationExtensionsLargeBlobOutputsJSON AuthenticationExtensionsClientOutputsJSON_largeBlob(const AuthenticationExtensionsClientOutputsJSON *self);

void AuthenticationExtensionsClientOutputsJSON_set_largeBlob(AuthenticationExtensionsClientOutputsJSON* self, AuthenticationExtensionsLargeBlobOutputsJSON * value);

AuthenticationExtensionsClientOutputsJSON AuthenticationExtensionsClientOutputsJSON_new();

#ifdef __cplusplus
}
#endif
