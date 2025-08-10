#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PublicKeyCredentialDescriptorJSON.h"
#include "AuthenticationExtensionsClientInputsJSON.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PublicKeyCredentialRequestOptionsJSON, em_Val);

jb_Any PublicKeyCredentialRequestOptionsJSON_challenge(const PublicKeyCredentialRequestOptionsJSON *self);

void PublicKeyCredentialRequestOptionsJSON_set_challenge(PublicKeyCredentialRequestOptionsJSON* self, jb_Any * value);

unsigned long PublicKeyCredentialRequestOptionsJSON_timeout(const PublicKeyCredentialRequestOptionsJSON *self);

void PublicKeyCredentialRequestOptionsJSON_set_timeout(PublicKeyCredentialRequestOptionsJSON* self, unsigned long value);

jb_String PublicKeyCredentialRequestOptionsJSON_rpId(const PublicKeyCredentialRequestOptionsJSON *self);

void PublicKeyCredentialRequestOptionsJSON_set_rpId(PublicKeyCredentialRequestOptionsJSON* self, jb_String * value);

jb_Array PublicKeyCredentialRequestOptionsJSON_allowCredentials(const PublicKeyCredentialRequestOptionsJSON *self);

void PublicKeyCredentialRequestOptionsJSON_set_allowCredentials(PublicKeyCredentialRequestOptionsJSON* self, jb_Array * value);

jb_String PublicKeyCredentialRequestOptionsJSON_userVerification(const PublicKeyCredentialRequestOptionsJSON *self);

void PublicKeyCredentialRequestOptionsJSON_set_userVerification(PublicKeyCredentialRequestOptionsJSON* self, jb_String * value);

jb_Array PublicKeyCredentialRequestOptionsJSON_hints(const PublicKeyCredentialRequestOptionsJSON *self);

void PublicKeyCredentialRequestOptionsJSON_set_hints(PublicKeyCredentialRequestOptionsJSON* self, jb_Array * value);

AuthenticationExtensionsClientInputsJSON PublicKeyCredentialRequestOptionsJSON_extensions(const PublicKeyCredentialRequestOptionsJSON *self);

void PublicKeyCredentialRequestOptionsJSON_set_extensions(PublicKeyCredentialRequestOptionsJSON* self, AuthenticationExtensionsClientInputsJSON * value);

PublicKeyCredentialRequestOptionsJSON PublicKeyCredentialRequestOptionsJSON_new();

#ifdef __cplusplus
}
#endif
