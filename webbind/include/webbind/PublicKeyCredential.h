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


/**
 * @brief Interface PublicKeyCredential
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredential)
 */
DECLARE_EMLITE_TYPE(PublicKeyCredential, Credential);

/**
 * @brief Gets the `rawId` property. 
*/
jb_ArrayBuffer PublicKeyCredential_rawId(const PublicKeyCredential *self);

/**
 * @brief Gets the `response` property. 
*/
AuthenticatorResponse PublicKeyCredential_response(const PublicKeyCredential *self);

/**
 * @brief Gets the `authenticatorAttachment` property. 
*/
jb_String PublicKeyCredential_authenticatorAttachment(const PublicKeyCredential *self);

/**
 * @brief Calls the `getClientExtensionResults` method. 
*/
AuthenticationExtensionsClientOutputs PublicKeyCredential_getClientExtensionResults(PublicKeyCredential* self );

/**
 * @brief Calls the `isConditionalMediationAvailable` method. 
*/
jb_Promise PublicKeyCredential_isConditionalMediationAvailable(PublicKeyCredential* self );

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Any PublicKeyCredential_toJSON(PublicKeyCredential* self );

/**
 * @brief Calls the `isUserVerifyingPlatformAuthenticatorAvailable` method. 
*/
jb_Promise PublicKeyCredential_isUserVerifyingPlatformAuthenticatorAvailable(PublicKeyCredential* self );

/**
 * @brief Calls the `getClientCapabilities` method. 
*/
jb_Promise PublicKeyCredential_getClientCapabilities(PublicKeyCredential* self );

/**
 * @brief Calls the `parseCreationOptionsFromJSON` method. 
*/
PublicKeyCredentialCreationOptions PublicKeyCredential_parseCreationOptionsFromJSON(PublicKeyCredential* self , PublicKeyCredentialCreationOptionsJSON * options);

/**
 * @brief Calls the `parseRequestOptionsFromJSON` method. 
*/
PublicKeyCredentialRequestOptions PublicKeyCredential_parseRequestOptionsFromJSON(PublicKeyCredential* self , PublicKeyCredentialRequestOptionsJSON * options);

/**
 * @brief Calls the `signalUnknownCredential` method. 
*/
jb_Promise PublicKeyCredential_signalUnknownCredential(PublicKeyCredential* self , UnknownCredentialOptions * options);

/**
 * @brief Calls the `signalAllAcceptedCredentials` method. 
*/
jb_Promise PublicKeyCredential_signalAllAcceptedCredentials(PublicKeyCredential* self , AllAcceptedCredentialsOptions * options);

/**
 * @brief Calls the `signalCurrentUserDetails` method. 
*/
jb_Promise PublicKeyCredential_signalCurrentUserDetails(PublicKeyCredential* self , CurrentUserDetailsOptions * options);

#ifdef __cplusplus
}
#endif
