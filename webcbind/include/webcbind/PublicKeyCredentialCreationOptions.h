#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PublicKeyCredentialRpEntity.h"
#include "PublicKeyCredentialUserEntity.h"
#include "PublicKeyCredentialParameters.h"
#include "PublicKeyCredentialDescriptor.h"
#include "AuthenticatorSelectionCriteria.h"
#include "AuthenticationExtensionsClientInputs.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PublicKeyCredentialCreationOptions */
DECLARE_EMLITE_TYPE(PublicKeyCredentialCreationOptions, em_Val);

/** @brief Getter of the rp property */
PublicKeyCredentialRpEntity PublicKeyCredentialCreationOptions_rp(const PublicKeyCredentialCreationOptions *self);

/** @brief Setter of the rp property */
void PublicKeyCredentialCreationOptions_set_rp(PublicKeyCredentialCreationOptions* self, PublicKeyCredentialRpEntity * value);

/** @brief Getter of the user property */
PublicKeyCredentialUserEntity PublicKeyCredentialCreationOptions_user(const PublicKeyCredentialCreationOptions *self);

/** @brief Setter of the user property */
void PublicKeyCredentialCreationOptions_set_user(PublicKeyCredentialCreationOptions* self, PublicKeyCredentialUserEntity * value);

/** @brief Getter of the challenge property */
jb_Any PublicKeyCredentialCreationOptions_challenge(const PublicKeyCredentialCreationOptions *self);

/** @brief Setter of the challenge property */
void PublicKeyCredentialCreationOptions_set_challenge(PublicKeyCredentialCreationOptions* self, jb_Any * value);

/** @brief Getter of the pubKeyCredParams property */
jb_Array PublicKeyCredentialCreationOptions_pubKeyCredParams(const PublicKeyCredentialCreationOptions *self);

/** @brief Setter of the pubKeyCredParams property */
void PublicKeyCredentialCreationOptions_set_pubKeyCredParams(PublicKeyCredentialCreationOptions* self, jb_Array * value);

/** @brief Getter of the timeout property */
unsigned long PublicKeyCredentialCreationOptions_timeout(const PublicKeyCredentialCreationOptions *self);

/** @brief Setter of the timeout property */
void PublicKeyCredentialCreationOptions_set_timeout(PublicKeyCredentialCreationOptions* self, unsigned long value);

/** @brief Getter of the excludeCredentials property */
jb_Array PublicKeyCredentialCreationOptions_excludeCredentials(const PublicKeyCredentialCreationOptions *self);

/** @brief Setter of the excludeCredentials property */
void PublicKeyCredentialCreationOptions_set_excludeCredentials(PublicKeyCredentialCreationOptions* self, jb_Array * value);

/** @brief Getter of the authenticatorSelection property */
AuthenticatorSelectionCriteria PublicKeyCredentialCreationOptions_authenticatorSelection(const PublicKeyCredentialCreationOptions *self);

/** @brief Setter of the authenticatorSelection property */
void PublicKeyCredentialCreationOptions_set_authenticatorSelection(PublicKeyCredentialCreationOptions* self, AuthenticatorSelectionCriteria * value);

/** @brief Getter of the hints property */
jb_Array PublicKeyCredentialCreationOptions_hints(const PublicKeyCredentialCreationOptions *self);

/** @brief Setter of the hints property */
void PublicKeyCredentialCreationOptions_set_hints(PublicKeyCredentialCreationOptions* self, jb_Array * value);

/** @brief Getter of the attestation property */
jb_String PublicKeyCredentialCreationOptions_attestation(const PublicKeyCredentialCreationOptions *self);

/** @brief Setter of the attestation property */
void PublicKeyCredentialCreationOptions_set_attestation(PublicKeyCredentialCreationOptions* self, jb_String * value);

/** @brief Getter of the attestationFormats property */
jb_Array PublicKeyCredentialCreationOptions_attestationFormats(const PublicKeyCredentialCreationOptions *self);

/** @brief Setter of the attestationFormats property */
void PublicKeyCredentialCreationOptions_set_attestationFormats(PublicKeyCredentialCreationOptions* self, jb_Array * value);

/** @brief Getter of the extensions property */
AuthenticationExtensionsClientInputs PublicKeyCredentialCreationOptions_extensions(const PublicKeyCredentialCreationOptions *self);

/** @brief Setter of the extensions property */
void PublicKeyCredentialCreationOptions_set_extensions(PublicKeyCredentialCreationOptions* self, AuthenticationExtensionsClientInputs * value);

/** @brief Constructor of the PublicKeyCredentialCreationOptions dictionary type */
PublicKeyCredentialCreationOptions PublicKeyCredentialCreationOptions_new();

#ifdef __cplusplus
}
#endif
