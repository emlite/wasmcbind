#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticatorAttestationResponseJSON.h"
#include "AuthenticationExtensionsClientOutputsJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RegistrationResponseJSON, em_Val);

jb_String RegistrationResponseJSON_id(const RegistrationResponseJSON *self);

void RegistrationResponseJSON_set_id(RegistrationResponseJSON* self, jb_String * value);

jb_Any RegistrationResponseJSON_rawId(const RegistrationResponseJSON *self);

void RegistrationResponseJSON_set_rawId(RegistrationResponseJSON* self, jb_Any * value);

AuthenticatorAttestationResponseJSON RegistrationResponseJSON_response(const RegistrationResponseJSON *self);

void RegistrationResponseJSON_set_response(RegistrationResponseJSON* self, AuthenticatorAttestationResponseJSON * value);

jb_String RegistrationResponseJSON_authenticatorAttachment(const RegistrationResponseJSON *self);

void RegistrationResponseJSON_set_authenticatorAttachment(RegistrationResponseJSON* self, jb_String * value);

AuthenticationExtensionsClientOutputsJSON RegistrationResponseJSON_clientExtensionResults(const RegistrationResponseJSON *self);

void RegistrationResponseJSON_set_clientExtensionResults(RegistrationResponseJSON* self, AuthenticationExtensionsClientOutputsJSON * value);

jb_String RegistrationResponseJSON_type(const RegistrationResponseJSON *self);

void RegistrationResponseJSON_set_type(RegistrationResponseJSON* self, jb_String * value);

RegistrationResponseJSON RegistrationResponseJSON_new();

#ifdef __cplusplus
}
#endif
