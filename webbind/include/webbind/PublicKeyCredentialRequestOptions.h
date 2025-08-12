#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PublicKeyCredentialDescriptor.h"
#include "AuthenticationExtensionsClientInputs.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PublicKeyCredentialRequestOptions */
DECLARE_EMLITE_TYPE(PublicKeyCredentialRequestOptions, em_Val);

/** @brief Getter of the challenge property */
jb_Any PublicKeyCredentialRequestOptions_challenge(const PublicKeyCredentialRequestOptions *self);

/** @brief Setter of the challenge property */
void PublicKeyCredentialRequestOptions_set_challenge(PublicKeyCredentialRequestOptions* self, jb_Any * value);

/** @brief Getter of the timeout property */
unsigned long PublicKeyCredentialRequestOptions_timeout(const PublicKeyCredentialRequestOptions *self);

/** @brief Setter of the timeout property */
void PublicKeyCredentialRequestOptions_set_timeout(PublicKeyCredentialRequestOptions* self, unsigned long value);

/** @brief Getter of the rpId property */
jb_String PublicKeyCredentialRequestOptions_rpId(const PublicKeyCredentialRequestOptions *self);

/** @brief Setter of the rpId property */
void PublicKeyCredentialRequestOptions_set_rpId(PublicKeyCredentialRequestOptions* self, jb_String * value);

/** @brief Getter of the allowCredentials property */
jb_Array PublicKeyCredentialRequestOptions_allowCredentials(const PublicKeyCredentialRequestOptions *self);

/** @brief Setter of the allowCredentials property */
void PublicKeyCredentialRequestOptions_set_allowCredentials(PublicKeyCredentialRequestOptions* self, jb_Array * value);

/** @brief Getter of the userVerification property */
jb_String PublicKeyCredentialRequestOptions_userVerification(const PublicKeyCredentialRequestOptions *self);

/** @brief Setter of the userVerification property */
void PublicKeyCredentialRequestOptions_set_userVerification(PublicKeyCredentialRequestOptions* self, jb_String * value);

/** @brief Getter of the hints property */
jb_Array PublicKeyCredentialRequestOptions_hints(const PublicKeyCredentialRequestOptions *self);

/** @brief Setter of the hints property */
void PublicKeyCredentialRequestOptions_set_hints(PublicKeyCredentialRequestOptions* self, jb_Array * value);

/** @brief Getter of the extensions property */
AuthenticationExtensionsClientInputs PublicKeyCredentialRequestOptions_extensions(const PublicKeyCredentialRequestOptions *self);

/** @brief Setter of the extensions property */
void PublicKeyCredentialRequestOptions_set_extensions(PublicKeyCredentialRequestOptions* self, AuthenticationExtensionsClientInputs * value);

/** @brief Constructor of the PublicKeyCredentialRequestOptions dictionary type */
PublicKeyCredentialRequestOptions PublicKeyCredentialRequestOptions_new();

#ifdef __cplusplus
}
#endif
