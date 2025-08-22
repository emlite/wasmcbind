#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Credential.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FederatedCredentialInit FederatedCredentialInit;


/**
 * @brief Interface FederatedCredential
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredential)
 */
DECLARE_EMLITE_TYPE(FederatedCredential, Credential);

/**
 * @brief Creates a new `FederatedCredential` object. 
*/
FederatedCredential FederatedCredential_new(FederatedCredentialInit * data);

/**
 * @brief Gets the `provider` property. 
*/
jb_String FederatedCredential_provider(const FederatedCredential *self);

/**
 * @brief Gets the `protocol` property. 
*/
jb_String FederatedCredential_protocol(const FederatedCredential *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String FederatedCredential_name(const FederatedCredential *self);

/**
 * @brief Gets the `iconURL` property. 
*/
jb_String FederatedCredential_iconURL(const FederatedCredential *self);

#ifdef __cplusplus
}
#endif
