#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PublicKeyCredentialRpEntity.h"
#include "PublicKeyCredentialUserEntityJSON.h"
#include "PublicKeyCredentialParameters.h"
#include "PublicKeyCredentialDescriptorJSON.h"
#include "AuthenticatorSelectionCriteria.h"
#include "AuthenticationExtensionsClientInputsJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PublicKeyCredentialCreationOptionsJSON */
DECLARE_EMLITE_TYPE(PublicKeyCredentialCreationOptionsJSON, em_Val);

/** @brief Getter of the rp property */
PublicKeyCredentialRpEntity PublicKeyCredentialCreationOptionsJSON_rp(const PublicKeyCredentialCreationOptionsJSON *self);

/** @brief Setter of the rp property */
void PublicKeyCredentialCreationOptionsJSON_set_rp(PublicKeyCredentialCreationOptionsJSON* self, PublicKeyCredentialRpEntity * value);

/** @brief Getter of the user property */
PublicKeyCredentialUserEntityJSON PublicKeyCredentialCreationOptionsJSON_user(const PublicKeyCredentialCreationOptionsJSON *self);

/** @brief Setter of the user property */
void PublicKeyCredentialCreationOptionsJSON_set_user(PublicKeyCredentialCreationOptionsJSON* self, PublicKeyCredentialUserEntityJSON * value);

/** @brief Getter of the challenge property */
jb_Any PublicKeyCredentialCreationOptionsJSON_challenge(const PublicKeyCredentialCreationOptionsJSON *self);

/** @brief Setter of the challenge property */
void PublicKeyCredentialCreationOptionsJSON_set_challenge(PublicKeyCredentialCreationOptionsJSON* self, jb_Any * value);

/** @brief Getter of the pubKeyCredParams property */
jb_Array PublicKeyCredentialCreationOptionsJSON_pubKeyCredParams(const PublicKeyCredentialCreationOptionsJSON *self);

/** @brief Setter of the pubKeyCredParams property */
void PublicKeyCredentialCreationOptionsJSON_set_pubKeyCredParams(PublicKeyCredentialCreationOptionsJSON* self, jb_Array * value);

/** @brief Getter of the timeout property */
unsigned long PublicKeyCredentialCreationOptionsJSON_timeout(const PublicKeyCredentialCreationOptionsJSON *self);

/** @brief Setter of the timeout property */
void PublicKeyCredentialCreationOptionsJSON_set_timeout(PublicKeyCredentialCreationOptionsJSON* self, unsigned long value);

/** @brief Getter of the excludeCredentials property */
jb_Array PublicKeyCredentialCreationOptionsJSON_excludeCredentials(const PublicKeyCredentialCreationOptionsJSON *self);

/** @brief Setter of the excludeCredentials property */
void PublicKeyCredentialCreationOptionsJSON_set_excludeCredentials(PublicKeyCredentialCreationOptionsJSON* self, jb_Array * value);

/** @brief Getter of the authenticatorSelection property */
AuthenticatorSelectionCriteria PublicKeyCredentialCreationOptionsJSON_authenticatorSelection(const PublicKeyCredentialCreationOptionsJSON *self);

/** @brief Setter of the authenticatorSelection property */
void PublicKeyCredentialCreationOptionsJSON_set_authenticatorSelection(PublicKeyCredentialCreationOptionsJSON* self, AuthenticatorSelectionCriteria * value);

/** @brief Getter of the hints property */
jb_Array PublicKeyCredentialCreationOptionsJSON_hints(const PublicKeyCredentialCreationOptionsJSON *self);

/** @brief Setter of the hints property */
void PublicKeyCredentialCreationOptionsJSON_set_hints(PublicKeyCredentialCreationOptionsJSON* self, jb_Array * value);

/** @brief Getter of the attestation property */
jb_String PublicKeyCredentialCreationOptionsJSON_attestation(const PublicKeyCredentialCreationOptionsJSON *self);

/** @brief Setter of the attestation property */
void PublicKeyCredentialCreationOptionsJSON_set_attestation(PublicKeyCredentialCreationOptionsJSON* self, jb_String * value);

/** @brief Getter of the attestationFormats property */
jb_Array PublicKeyCredentialCreationOptionsJSON_attestationFormats(const PublicKeyCredentialCreationOptionsJSON *self);

/** @brief Setter of the attestationFormats property */
void PublicKeyCredentialCreationOptionsJSON_set_attestationFormats(PublicKeyCredentialCreationOptionsJSON* self, jb_Array * value);

/** @brief Getter of the extensions property */
AuthenticationExtensionsClientInputsJSON PublicKeyCredentialCreationOptionsJSON_extensions(const PublicKeyCredentialCreationOptionsJSON *self);

/** @brief Setter of the extensions property */
void PublicKeyCredentialCreationOptionsJSON_set_extensions(PublicKeyCredentialCreationOptionsJSON* self, AuthenticationExtensionsClientInputsJSON * value);

/** @brief Constructor of the PublicKeyCredentialCreationOptionsJSON dictionary type */
PublicKeyCredentialCreationOptionsJSON PublicKeyCredentialCreationOptionsJSON_new();

#ifdef __cplusplus
}
#endif
