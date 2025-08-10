#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityProviderIcon, em_Val);

jb_String IdentityProviderIcon_url(const IdentityProviderIcon *self);

void IdentityProviderIcon_set_url(IdentityProviderIcon* self, jb_String * value);

unsigned long IdentityProviderIcon_size(const IdentityProviderIcon *self);

void IdentityProviderIcon_set_size(IdentityProviderIcon* self, unsigned long value);

IdentityProviderIcon IdentityProviderIcon_new();

#ifdef __cplusplus
}
#endif
