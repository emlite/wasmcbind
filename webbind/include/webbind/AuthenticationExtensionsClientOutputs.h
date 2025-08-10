#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticationExtensionsLargeBlobOutputs.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsClientOutputs, em_Val);

AuthenticationExtensionsLargeBlobOutputs AuthenticationExtensionsClientOutputs_largeBlob(const AuthenticationExtensionsClientOutputs *self);

void AuthenticationExtensionsClientOutputs_set_largeBlob(AuthenticationExtensionsClientOutputs* self, AuthenticationExtensionsLargeBlobOutputs * value);

AuthenticationExtensionsClientOutputs AuthenticationExtensionsClientOutputs_new();

#ifdef __cplusplus
}
#endif
