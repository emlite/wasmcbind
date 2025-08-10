#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsLargeBlobOutputs, em_Val);

bool AuthenticationExtensionsLargeBlobOutputs_supported(const AuthenticationExtensionsLargeBlobOutputs *self);

void AuthenticationExtensionsLargeBlobOutputs_set_supported(AuthenticationExtensionsLargeBlobOutputs* self, bool value);

jb_ArrayBuffer AuthenticationExtensionsLargeBlobOutputs_blob(const AuthenticationExtensionsLargeBlobOutputs *self);

void AuthenticationExtensionsLargeBlobOutputs_set_blob(AuthenticationExtensionsLargeBlobOutputs* self, jb_ArrayBuffer * value);

bool AuthenticationExtensionsLargeBlobOutputs_written(const AuthenticationExtensionsLargeBlobOutputs *self);

void AuthenticationExtensionsLargeBlobOutputs_set_written(AuthenticationExtensionsLargeBlobOutputs* self, bool value);

AuthenticationExtensionsLargeBlobOutputs AuthenticationExtensionsLargeBlobOutputs_new();

#ifdef __cplusplus
}
#endif
