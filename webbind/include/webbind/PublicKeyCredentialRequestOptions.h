#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PublicKeyCredentialDescriptor.h"
#include "AuthenticationExtensionsClientInputs.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PublicKeyCredentialRequestOptions, em_Val);

jb_Any PublicKeyCredentialRequestOptions_challenge(const PublicKeyCredentialRequestOptions *self);

void PublicKeyCredentialRequestOptions_set_challenge(PublicKeyCredentialRequestOptions* self, jb_Any * value);

unsigned long PublicKeyCredentialRequestOptions_timeout(const PublicKeyCredentialRequestOptions *self);

void PublicKeyCredentialRequestOptions_set_timeout(PublicKeyCredentialRequestOptions* self, unsigned long value);

jb_String PublicKeyCredentialRequestOptions_rpId(const PublicKeyCredentialRequestOptions *self);

void PublicKeyCredentialRequestOptions_set_rpId(PublicKeyCredentialRequestOptions* self, jb_String * value);

jb_Array PublicKeyCredentialRequestOptions_allowCredentials(const PublicKeyCredentialRequestOptions *self);

void PublicKeyCredentialRequestOptions_set_allowCredentials(PublicKeyCredentialRequestOptions* self, jb_Array * value);

jb_String PublicKeyCredentialRequestOptions_userVerification(const PublicKeyCredentialRequestOptions *self);

void PublicKeyCredentialRequestOptions_set_userVerification(PublicKeyCredentialRequestOptions* self, jb_String * value);

jb_Array PublicKeyCredentialRequestOptions_hints(const PublicKeyCredentialRequestOptions *self);

void PublicKeyCredentialRequestOptions_set_hints(PublicKeyCredentialRequestOptions* self, jb_Array * value);

AuthenticationExtensionsClientInputs PublicKeyCredentialRequestOptions_extensions(const PublicKeyCredentialRequestOptions *self);

void PublicKeyCredentialRequestOptions_set_extensions(PublicKeyCredentialRequestOptions* self, AuthenticationExtensionsClientInputs * value);

PublicKeyCredentialRequestOptions PublicKeyCredentialRequestOptions_new();

#ifdef __cplusplus
}
#endif
