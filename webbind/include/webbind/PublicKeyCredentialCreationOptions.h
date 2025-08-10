#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
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

DECLARE_EMLITE_TYPE(PublicKeyCredentialCreationOptions, em_Val);

PublicKeyCredentialRpEntity PublicKeyCredentialCreationOptions_rp(const PublicKeyCredentialCreationOptions *self);

void PublicKeyCredentialCreationOptions_set_rp(PublicKeyCredentialCreationOptions* self, PublicKeyCredentialRpEntity * value);

PublicKeyCredentialUserEntity PublicKeyCredentialCreationOptions_user(const PublicKeyCredentialCreationOptions *self);

void PublicKeyCredentialCreationOptions_set_user(PublicKeyCredentialCreationOptions* self, PublicKeyCredentialUserEntity * value);

jb_Any PublicKeyCredentialCreationOptions_challenge(const PublicKeyCredentialCreationOptions *self);

void PublicKeyCredentialCreationOptions_set_challenge(PublicKeyCredentialCreationOptions* self, jb_Any * value);

jb_Array PublicKeyCredentialCreationOptions_pubKeyCredParams(const PublicKeyCredentialCreationOptions *self);

void PublicKeyCredentialCreationOptions_set_pubKeyCredParams(PublicKeyCredentialCreationOptions* self, jb_Array * value);

unsigned long PublicKeyCredentialCreationOptions_timeout(const PublicKeyCredentialCreationOptions *self);

void PublicKeyCredentialCreationOptions_set_timeout(PublicKeyCredentialCreationOptions* self, unsigned long value);

jb_Array PublicKeyCredentialCreationOptions_excludeCredentials(const PublicKeyCredentialCreationOptions *self);

void PublicKeyCredentialCreationOptions_set_excludeCredentials(PublicKeyCredentialCreationOptions* self, jb_Array * value);

AuthenticatorSelectionCriteria PublicKeyCredentialCreationOptions_authenticatorSelection(const PublicKeyCredentialCreationOptions *self);

void PublicKeyCredentialCreationOptions_set_authenticatorSelection(PublicKeyCredentialCreationOptions* self, AuthenticatorSelectionCriteria * value);

jb_Array PublicKeyCredentialCreationOptions_hints(const PublicKeyCredentialCreationOptions *self);

void PublicKeyCredentialCreationOptions_set_hints(PublicKeyCredentialCreationOptions* self, jb_Array * value);

jb_String PublicKeyCredentialCreationOptions_attestation(const PublicKeyCredentialCreationOptions *self);

void PublicKeyCredentialCreationOptions_set_attestation(PublicKeyCredentialCreationOptions* self, jb_String * value);

jb_Array PublicKeyCredentialCreationOptions_attestationFormats(const PublicKeyCredentialCreationOptions *self);

void PublicKeyCredentialCreationOptions_set_attestationFormats(PublicKeyCredentialCreationOptions* self, jb_Array * value);

AuthenticationExtensionsClientInputs PublicKeyCredentialCreationOptions_extensions(const PublicKeyCredentialCreationOptions *self);

void PublicKeyCredentialCreationOptions_set_extensions(PublicKeyCredentialCreationOptions* self, AuthenticationExtensionsClientInputs * value);

PublicKeyCredentialCreationOptions PublicKeyCredentialCreationOptions_new();

#ifdef __cplusplus
}
#endif
