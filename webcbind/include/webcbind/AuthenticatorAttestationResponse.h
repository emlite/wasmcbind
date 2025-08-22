#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AuthenticatorResponse.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface AuthenticatorAttestationResponse
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAttestationResponse)
 */
DECLARE_EMLITE_TYPE(AuthenticatorAttestationResponse, AuthenticatorResponse);

/**
 * @brief Gets the `attestationObject` property. 
*/
jb_ArrayBuffer AuthenticatorAttestationResponse_attestationObject(const AuthenticatorAttestationResponse *self);

/**
 * @brief Calls the `getTransports` method. 
*/
jb_Array AuthenticatorAttestationResponse_getTransports(AuthenticatorAttestationResponse* self );

/**
 * @brief Calls the `getAuthenticatorData` method. 
*/
jb_ArrayBuffer AuthenticatorAttestationResponse_getAuthenticatorData(AuthenticatorAttestationResponse* self );

/**
 * @brief Calls the `getPublicKey` method. 
*/
jb_ArrayBuffer AuthenticatorAttestationResponse_getPublicKey(AuthenticatorAttestationResponse* self );

/**
 * @brief Calls the `getPublicKeyAlgorithm` method. 
*/
jb_Any AuthenticatorAttestationResponse_getPublicKeyAlgorithm(AuthenticatorAttestationResponse* self );

#ifdef __cplusplus
}
#endif
