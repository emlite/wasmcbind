#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityProviderConfig */
DECLARE_EMLITE_TYPE(IdentityProviderConfig, em_Val);

/** @brief Getter of the configURL property */
jb_String IdentityProviderConfig_configURL(const IdentityProviderConfig *self);

/** @brief Setter of the configURL property */
void IdentityProviderConfig_set_configURL(IdentityProviderConfig* self, jb_String * value);

/** @brief Getter of the clientId property */
jb_String IdentityProviderConfig_clientId(const IdentityProviderConfig *self);

/** @brief Setter of the clientId property */
void IdentityProviderConfig_set_clientId(IdentityProviderConfig* self, jb_String * value);

/** @brief Constructor of the IdentityProviderConfig dictionary type */
IdentityProviderConfig IdentityProviderConfig_new();

#ifdef __cplusplus
}
#endif
