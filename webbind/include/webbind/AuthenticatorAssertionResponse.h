#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AuthenticatorResponse.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface AuthenticatorAssertionResponse
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAssertionResponse)
 */
DECLARE_EMLITE_TYPE(AuthenticatorAssertionResponse, AuthenticatorResponse);

/**
 * @brief Gets the `authenticatorData` property. 
*/
jb_ArrayBuffer AuthenticatorAssertionResponse_authenticatorData(const AuthenticatorAssertionResponse *self);

/**
 * @brief Gets the `signature` property. 
*/
jb_ArrayBuffer AuthenticatorAssertionResponse_signature(const AuthenticatorAssertionResponse *self);

/**
 * @brief Gets the `userHandle` property. 
*/
jb_ArrayBuffer AuthenticatorAssertionResponse_userHandle(const AuthenticatorAssertionResponse *self);

#ifdef __cplusplus
}
#endif
