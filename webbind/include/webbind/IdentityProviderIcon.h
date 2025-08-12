#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityProviderIcon */
DECLARE_EMLITE_TYPE(IdentityProviderIcon, em_Val);

/** @brief Getter of the url property */
jb_String IdentityProviderIcon_url(const IdentityProviderIcon *self);

/** @brief Setter of the url property */
void IdentityProviderIcon_set_url(IdentityProviderIcon* self, jb_String * value);

/** @brief Getter of the size property */
unsigned long IdentityProviderIcon_size(const IdentityProviderIcon *self);

/** @brief Setter of the size property */
void IdentityProviderIcon_set_size(IdentityProviderIcon* self, unsigned long value);

/** @brief Constructor of the IdentityProviderIcon dictionary type */
IdentityProviderIcon IdentityProviderIcon_new();

#ifdef __cplusplus
}
#endif
