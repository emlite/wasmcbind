#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "IdentityProviderIcon.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityProviderBranding, em_Val);

jb_String IdentityProviderBranding_background_color(const IdentityProviderBranding *self);

void IdentityProviderBranding_set_background_color(IdentityProviderBranding* self, jb_String * value);

jb_String IdentityProviderBranding_color(const IdentityProviderBranding *self);

void IdentityProviderBranding_set_color(IdentityProviderBranding* self, jb_String * value);

jb_Array IdentityProviderBranding_icons(const IdentityProviderBranding *self);

void IdentityProviderBranding_set_icons(IdentityProviderBranding* self, jb_Array * value);

jb_String IdentityProviderBranding_name(const IdentityProviderBranding *self);

void IdentityProviderBranding_set_name(IdentityProviderBranding* self, jb_String * value);

IdentityProviderBranding IdentityProviderBranding_new();

#ifdef __cplusplus
}
#endif
