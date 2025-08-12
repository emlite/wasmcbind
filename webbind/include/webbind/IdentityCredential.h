#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Credential.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IdentityCredentialDisconnectOptions IdentityCredentialDisconnectOptions;


/**
 * @brief Interface IdentityCredential
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredential)
 */
DECLARE_EMLITE_TYPE(IdentityCredential, Credential);

/**
 * @brief Calls the `disconnect` method. 
*/
jb_Promise IdentityCredential_disconnect(IdentityCredential* self , IdentityCredentialDisconnectOptions * options);

/**
 * @brief Gets the `token` property. 
*/
jb_String IdentityCredential_token(const IdentityCredential *self);

/**
 * @brief Gets the `isAutoSelected` property. 
*/
bool IdentityCredential_isAutoSelected(const IdentityCredential *self);

/**
 * @brief Gets the `configURL` property. 
*/
jb_String IdentityCredential_configURL(const IdentityCredential *self);

#ifdef __cplusplus
}
#endif
