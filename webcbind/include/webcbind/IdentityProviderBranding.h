#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "IdentityProviderIcon.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityProviderBranding */
DECLARE_EMLITE_TYPE(IdentityProviderBranding, em_Val);

/** @brief Getter of the background_color property */
jb_String IdentityProviderBranding_background_color(const IdentityProviderBranding *self);

/** @brief Setter of the background_color property */
void IdentityProviderBranding_set_background_color(IdentityProviderBranding* self, jb_String * value);

/** @brief Getter of the color property */
jb_String IdentityProviderBranding_color(const IdentityProviderBranding *self);

/** @brief Setter of the color property */
void IdentityProviderBranding_set_color(IdentityProviderBranding* self, jb_String * value);

/** @brief Getter of the icons property */
jb_Array IdentityProviderBranding_icons(const IdentityProviderBranding *self);

/** @brief Setter of the icons property */
void IdentityProviderBranding_set_icons(IdentityProviderBranding* self, jb_Array * value);

/** @brief Getter of the name property */
jb_String IdentityProviderBranding_name(const IdentityProviderBranding *self);

/** @brief Setter of the name property */
void IdentityProviderBranding_set_name(IdentityProviderBranding* self, jb_String * value);

/** @brief Constructor of the IdentityProviderBranding dictionary type */
IdentityProviderBranding IdentityProviderBranding_new();

#ifdef __cplusplus
}
#endif
