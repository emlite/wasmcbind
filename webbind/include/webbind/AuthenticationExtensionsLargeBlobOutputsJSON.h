#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsLargeBlobOutputsJSON, em_Val);

bool AuthenticationExtensionsLargeBlobOutputsJSON_supported(const AuthenticationExtensionsLargeBlobOutputsJSON *self);

void AuthenticationExtensionsLargeBlobOutputsJSON_set_supported(AuthenticationExtensionsLargeBlobOutputsJSON* self, bool value);

jb_Any AuthenticationExtensionsLargeBlobOutputsJSON_blob(const AuthenticationExtensionsLargeBlobOutputsJSON *self);

void AuthenticationExtensionsLargeBlobOutputsJSON_set_blob(AuthenticationExtensionsLargeBlobOutputsJSON* self, jb_Any * value);

bool AuthenticationExtensionsLargeBlobOutputsJSON_written(const AuthenticationExtensionsLargeBlobOutputsJSON *self);

void AuthenticationExtensionsLargeBlobOutputsJSON_set_written(AuthenticationExtensionsLargeBlobOutputsJSON* self, bool value);

AuthenticationExtensionsLargeBlobOutputsJSON AuthenticationExtensionsLargeBlobOutputsJSON_new();

#ifdef __cplusplus
}
#endif
