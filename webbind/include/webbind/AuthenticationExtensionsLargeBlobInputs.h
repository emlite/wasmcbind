#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticationExtensionsLargeBlobInputs, em_Val);

jb_String AuthenticationExtensionsLargeBlobInputs_support(const AuthenticationExtensionsLargeBlobInputs *self);

void AuthenticationExtensionsLargeBlobInputs_set_support(AuthenticationExtensionsLargeBlobInputs* self, jb_String * value);

bool AuthenticationExtensionsLargeBlobInputs_read(const AuthenticationExtensionsLargeBlobInputs *self);

void AuthenticationExtensionsLargeBlobInputs_set_read(AuthenticationExtensionsLargeBlobInputs* self, bool value);

jb_Any AuthenticationExtensionsLargeBlobInputs_write(const AuthenticationExtensionsLargeBlobInputs *self);

void AuthenticationExtensionsLargeBlobInputs_set_write(AuthenticationExtensionsLargeBlobInputs* self, jb_Any * value);

AuthenticationExtensionsLargeBlobInputs AuthenticationExtensionsLargeBlobInputs_new();

#ifdef __cplusplus
}
#endif
