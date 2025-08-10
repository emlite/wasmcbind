#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityProviderConfig, em_Val);

jb_String IdentityProviderConfig_configURL(const IdentityProviderConfig *self);

void IdentityProviderConfig_set_configURL(IdentityProviderConfig* self, jb_String * value);

jb_String IdentityProviderConfig_clientId(const IdentityProviderConfig *self);

void IdentityProviderConfig_set_clientId(IdentityProviderConfig* self, jb_String * value);

IdentityProviderConfig IdentityProviderConfig_new();

#ifdef __cplusplus
}
#endif
