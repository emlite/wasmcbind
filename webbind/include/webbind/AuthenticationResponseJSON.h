#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticatorAssertionResponseJSON.h"
#include "AuthenticationExtensionsClientOutputsJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticationResponseJSON */
DECLARE_EMLITE_TYPE(AuthenticationResponseJSON, em_Val);

/** @brief Getter of the id property */
jb_String AuthenticationResponseJSON_id(const AuthenticationResponseJSON *self);

/** @brief Setter of the id property */
void AuthenticationResponseJSON_set_id(AuthenticationResponseJSON* self, jb_String * value);

/** @brief Getter of the rawId property */
jb_Any AuthenticationResponseJSON_rawId(const AuthenticationResponseJSON *self);

/** @brief Setter of the rawId property */
void AuthenticationResponseJSON_set_rawId(AuthenticationResponseJSON* self, jb_Any * value);

/** @brief Getter of the response property */
AuthenticatorAssertionResponseJSON AuthenticationResponseJSON_response(const AuthenticationResponseJSON *self);

/** @brief Setter of the response property */
void AuthenticationResponseJSON_set_response(AuthenticationResponseJSON* self, AuthenticatorAssertionResponseJSON * value);

/** @brief Getter of the authenticatorAttachment property */
jb_String AuthenticationResponseJSON_authenticatorAttachment(const AuthenticationResponseJSON *self);

/** @brief Setter of the authenticatorAttachment property */
void AuthenticationResponseJSON_set_authenticatorAttachment(AuthenticationResponseJSON* self, jb_String * value);

/** @brief Getter of the clientExtensionResults property */
AuthenticationExtensionsClientOutputsJSON AuthenticationResponseJSON_clientExtensionResults(const AuthenticationResponseJSON *self);

/** @brief Setter of the clientExtensionResults property */
void AuthenticationResponseJSON_set_clientExtensionResults(AuthenticationResponseJSON* self, AuthenticationExtensionsClientOutputsJSON * value);

/** @brief Getter of the type property */
jb_String AuthenticationResponseJSON_type(const AuthenticationResponseJSON *self);

/** @brief Setter of the type property */
void AuthenticationResponseJSON_set_type(AuthenticationResponseJSON* self, jb_String * value);

/** @brief Constructor of the AuthenticationResponseJSON dictionary type */
AuthenticationResponseJSON AuthenticationResponseJSON_new();

#ifdef __cplusplus
}
#endif
