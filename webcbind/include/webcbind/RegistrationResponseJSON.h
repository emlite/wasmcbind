#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AuthenticatorAttestationResponseJSON.h"
#include "AuthenticationExtensionsClientOutputsJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RegistrationResponseJSON */
DECLARE_EMLITE_TYPE(RegistrationResponseJSON, em_Val);

/** @brief Getter of the id property */
jb_String RegistrationResponseJSON_id(const RegistrationResponseJSON *self);

/** @brief Setter of the id property */
void RegistrationResponseJSON_set_id(RegistrationResponseJSON* self, jb_String * value);

/** @brief Getter of the rawId property */
jb_Any RegistrationResponseJSON_rawId(const RegistrationResponseJSON *self);

/** @brief Setter of the rawId property */
void RegistrationResponseJSON_set_rawId(RegistrationResponseJSON* self, jb_Any * value);

/** @brief Getter of the response property */
AuthenticatorAttestationResponseJSON RegistrationResponseJSON_response(const RegistrationResponseJSON *self);

/** @brief Setter of the response property */
void RegistrationResponseJSON_set_response(RegistrationResponseJSON* self, AuthenticatorAttestationResponseJSON * value);

/** @brief Getter of the authenticatorAttachment property */
jb_String RegistrationResponseJSON_authenticatorAttachment(const RegistrationResponseJSON *self);

/** @brief Setter of the authenticatorAttachment property */
void RegistrationResponseJSON_set_authenticatorAttachment(RegistrationResponseJSON* self, jb_String * value);

/** @brief Getter of the clientExtensionResults property */
AuthenticationExtensionsClientOutputsJSON RegistrationResponseJSON_clientExtensionResults(const RegistrationResponseJSON *self);

/** @brief Setter of the clientExtensionResults property */
void RegistrationResponseJSON_set_clientExtensionResults(RegistrationResponseJSON* self, AuthenticationExtensionsClientOutputsJSON * value);

/** @brief Getter of the type property */
jb_String RegistrationResponseJSON_type(const RegistrationResponseJSON *self);

/** @brief Setter of the type property */
void RegistrationResponseJSON_set_type(RegistrationResponseJSON* self, jb_String * value);

/** @brief Constructor of the RegistrationResponseJSON dictionary type */
RegistrationResponseJSON RegistrationResponseJSON_new();

#ifdef __cplusplus
}
#endif
