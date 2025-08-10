#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Credential.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AuthenticatorResponse AuthenticatorResponse;
typedef struct AuthenticationExtensionsClientOutputs AuthenticationExtensionsClientOutputs;
typedef struct PublicKeyCredentialCreationOptions PublicKeyCredentialCreationOptions;
typedef struct PublicKeyCredentialCreationOptionsJSON PublicKeyCredentialCreationOptionsJSON;
typedef struct PublicKeyCredentialRequestOptions PublicKeyCredentialRequestOptions;
typedef struct PublicKeyCredentialRequestOptionsJSON PublicKeyCredentialRequestOptionsJSON;
typedef struct UnknownCredentialOptions UnknownCredentialOptions;
typedef struct AllAcceptedCredentialsOptions AllAcceptedCredentialsOptions;
typedef struct CurrentUserDetailsOptions CurrentUserDetailsOptions;

DECLARE_EMLITE_TYPE(PublicKeyCredential, Credential);

jb_ArrayBuffer PublicKeyCredential_rawId(const PublicKeyCredential *self);

AuthenticatorResponse PublicKeyCredential_response(const PublicKeyCredential *self);

jb_String PublicKeyCredential_authenticatorAttachment(const PublicKeyCredential *self);

AuthenticationExtensionsClientOutputs PublicKeyCredential_getClientExtensionResults(PublicKeyCredential* self );

jb_Promise PublicKeyCredential_isConditionalMediationAvailable(PublicKeyCredential* self );

jb_Any PublicKeyCredential_toJSON(PublicKeyCredential* self );

jb_Promise PublicKeyCredential_isUserVerifyingPlatformAuthenticatorAvailable(PublicKeyCredential* self );

jb_Promise PublicKeyCredential_getClientCapabilities(PublicKeyCredential* self );

PublicKeyCredentialCreationOptions PublicKeyCredential_parseCreationOptionsFromJSON(PublicKeyCredential* self , PublicKeyCredentialCreationOptionsJSON * options);

PublicKeyCredentialRequestOptions PublicKeyCredential_parseRequestOptionsFromJSON(PublicKeyCredential* self , PublicKeyCredentialRequestOptionsJSON * options);

jb_Promise PublicKeyCredential_signalUnknownCredential(PublicKeyCredential* self , UnknownCredentialOptions * options);

jb_Promise PublicKeyCredential_signalAllAcceptedCredentials(PublicKeyCredential* self , AllAcceptedCredentialsOptions * options);

jb_Promise PublicKeyCredential_signalCurrentUserDetails(PublicKeyCredential* self , CurrentUserDetailsOptions * options);

#ifdef __cplusplus
}
#endif
