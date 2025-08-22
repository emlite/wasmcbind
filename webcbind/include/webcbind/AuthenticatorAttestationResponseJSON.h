#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AuthenticatorAttestationResponseJSON */
DECLARE_EMLITE_TYPE(AuthenticatorAttestationResponseJSON, em_Val);

/** @brief Getter of the clientDataJSON property */
jb_Any AuthenticatorAttestationResponseJSON_clientDataJSON(const AuthenticatorAttestationResponseJSON *self);

/** @brief Setter of the clientDataJSON property */
void AuthenticatorAttestationResponseJSON_set_clientDataJSON(AuthenticatorAttestationResponseJSON* self, jb_Any * value);

/** @brief Getter of the authenticatorData property */
jb_Any AuthenticatorAttestationResponseJSON_authenticatorData(const AuthenticatorAttestationResponseJSON *self);

/** @brief Setter of the authenticatorData property */
void AuthenticatorAttestationResponseJSON_set_authenticatorData(AuthenticatorAttestationResponseJSON* self, jb_Any * value);

/** @brief Getter of the transports property */
jb_Array AuthenticatorAttestationResponseJSON_transports(const AuthenticatorAttestationResponseJSON *self);

/** @brief Setter of the transports property */
void AuthenticatorAttestationResponseJSON_set_transports(AuthenticatorAttestationResponseJSON* self, jb_Array * value);

/** @brief Getter of the publicKey property */
jb_Any AuthenticatorAttestationResponseJSON_publicKey(const AuthenticatorAttestationResponseJSON *self);

/** @brief Setter of the publicKey property */
void AuthenticatorAttestationResponseJSON_set_publicKey(AuthenticatorAttestationResponseJSON* self, jb_Any * value);

/** @brief Getter of the publicKeyAlgorithm property */
jb_Any AuthenticatorAttestationResponseJSON_publicKeyAlgorithm(const AuthenticatorAttestationResponseJSON *self);

/** @brief Setter of the publicKeyAlgorithm property */
void AuthenticatorAttestationResponseJSON_set_publicKeyAlgorithm(AuthenticatorAttestationResponseJSON* self, jb_Any * value);

/** @brief Getter of the attestationObject property */
jb_Any AuthenticatorAttestationResponseJSON_attestationObject(const AuthenticatorAttestationResponseJSON *self);

/** @brief Setter of the attestationObject property */
void AuthenticatorAttestationResponseJSON_set_attestationObject(AuthenticatorAttestationResponseJSON* self, jb_Any * value);

/** @brief Constructor of the AuthenticatorAttestationResponseJSON dictionary type */
AuthenticatorAttestationResponseJSON AuthenticatorAttestationResponseJSON_new();

#ifdef __cplusplus
}
#endif
