#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PublicKeyCredentialDescriptorJSON.h"
#include "AuthenticationExtensionsClientInputsJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PublicKeyCredentialRequestOptionsJSON */
DECLARE_EMLITE_TYPE(PublicKeyCredentialRequestOptionsJSON, em_Val);

/** @brief Getter of the challenge property */
jb_Any PublicKeyCredentialRequestOptionsJSON_challenge(const PublicKeyCredentialRequestOptionsJSON *self);

/** @brief Setter of the challenge property */
void PublicKeyCredentialRequestOptionsJSON_set_challenge(PublicKeyCredentialRequestOptionsJSON* self, jb_Any * value);

/** @brief Getter of the timeout property */
unsigned long PublicKeyCredentialRequestOptionsJSON_timeout(const PublicKeyCredentialRequestOptionsJSON *self);

/** @brief Setter of the timeout property */
void PublicKeyCredentialRequestOptionsJSON_set_timeout(PublicKeyCredentialRequestOptionsJSON* self, unsigned long value);

/** @brief Getter of the rpId property */
jb_String PublicKeyCredentialRequestOptionsJSON_rpId(const PublicKeyCredentialRequestOptionsJSON *self);

/** @brief Setter of the rpId property */
void PublicKeyCredentialRequestOptionsJSON_set_rpId(PublicKeyCredentialRequestOptionsJSON* self, jb_String * value);

/** @brief Getter of the allowCredentials property */
jb_Array PublicKeyCredentialRequestOptionsJSON_allowCredentials(const PublicKeyCredentialRequestOptionsJSON *self);

/** @brief Setter of the allowCredentials property */
void PublicKeyCredentialRequestOptionsJSON_set_allowCredentials(PublicKeyCredentialRequestOptionsJSON* self, jb_Array * value);

/** @brief Getter of the userVerification property */
jb_String PublicKeyCredentialRequestOptionsJSON_userVerification(const PublicKeyCredentialRequestOptionsJSON *self);

/** @brief Setter of the userVerification property */
void PublicKeyCredentialRequestOptionsJSON_set_userVerification(PublicKeyCredentialRequestOptionsJSON* self, jb_String * value);

/** @brief Getter of the hints property */
jb_Array PublicKeyCredentialRequestOptionsJSON_hints(const PublicKeyCredentialRequestOptionsJSON *self);

/** @brief Setter of the hints property */
void PublicKeyCredentialRequestOptionsJSON_set_hints(PublicKeyCredentialRequestOptionsJSON* self, jb_Array * value);

/** @brief Getter of the extensions property */
AuthenticationExtensionsClientInputsJSON PublicKeyCredentialRequestOptionsJSON_extensions(const PublicKeyCredentialRequestOptionsJSON *self);

/** @brief Setter of the extensions property */
void PublicKeyCredentialRequestOptionsJSON_set_extensions(PublicKeyCredentialRequestOptionsJSON* self, AuthenticationExtensionsClientInputsJSON * value);

/** @brief Constructor of the PublicKeyCredentialRequestOptionsJSON dictionary type */
PublicKeyCredentialRequestOptionsJSON PublicKeyCredentialRequestOptionsJSON_new();

#ifdef __cplusplus
}
#endif
