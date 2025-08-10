#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticationExtensionsLargeBlobInputs.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsClientInputs, em_Val);

AuthenticationExtensionsLargeBlobInputs AuthenticationExtensionsClientInputs_largeBlob(const AuthenticationExtensionsClientInputs *self);

void AuthenticationExtensionsClientInputs_set_largeBlob(AuthenticationExtensionsClientInputs* self, AuthenticationExtensionsLargeBlobInputs * value);

AuthenticationExtensionsClientInputs AuthenticationExtensionsClientInputs_new();

#ifdef __cplusplus
}
#endif
