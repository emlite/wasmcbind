#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AuthenticatorAttestationResponseJSON, em_Val);

jb_Any AuthenticatorAttestationResponseJSON_clientDataJSON(const AuthenticatorAttestationResponseJSON *self);

void AuthenticatorAttestationResponseJSON_set_clientDataJSON(AuthenticatorAttestationResponseJSON* self, jb_Any * value);

jb_Any AuthenticatorAttestationResponseJSON_authenticatorData(const AuthenticatorAttestationResponseJSON *self);

void AuthenticatorAttestationResponseJSON_set_authenticatorData(AuthenticatorAttestationResponseJSON* self, jb_Any * value);

jb_Array AuthenticatorAttestationResponseJSON_transports(const AuthenticatorAttestationResponseJSON *self);

void AuthenticatorAttestationResponseJSON_set_transports(AuthenticatorAttestationResponseJSON* self, jb_Array * value);

jb_Any AuthenticatorAttestationResponseJSON_publicKey(const AuthenticatorAttestationResponseJSON *self);

void AuthenticatorAttestationResponseJSON_set_publicKey(AuthenticatorAttestationResponseJSON* self, jb_Any * value);

jb_Any AuthenticatorAttestationResponseJSON_publicKeyAlgorithm(const AuthenticatorAttestationResponseJSON *self);

void AuthenticatorAttestationResponseJSON_set_publicKeyAlgorithm(AuthenticatorAttestationResponseJSON* self, jb_Any * value);

jb_Any AuthenticatorAttestationResponseJSON_attestationObject(const AuthenticatorAttestationResponseJSON *self);

void AuthenticatorAttestationResponseJSON_set_attestationObject(AuthenticatorAttestationResponseJSON* self, jb_Any * value);

AuthenticatorAttestationResponseJSON AuthenticatorAttestationResponseJSON_new();

#ifdef __cplusplus
}
#endif
