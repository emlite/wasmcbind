#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Credential Credential;
typedef struct CredentialRequestOptions CredentialRequestOptions;
typedef struct CredentialCreationOptions CredentialCreationOptions;


/**
 * @brief Interface CredentialsContainer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CredentialsContainer)
 */
DECLARE_EMLITE_TYPE(CredentialsContainer, em_Val);

/**
 * @brief Calls the `get` method. 
*/
jb_Promise CredentialsContainer_get0(CredentialsContainer* self );

/**
 * @brief Calls the `get` method. 
*/
jb_Promise CredentialsContainer_get1(CredentialsContainer* self , CredentialRequestOptions * options);

/**
 * @brief Calls the `store` method. 
*/
jb_Promise CredentialsContainer_store(CredentialsContainer* self , Credential * credential);

/**
 * @brief Calls the `create` method. 
*/
jb_Promise CredentialsContainer_create0(CredentialsContainer* self );

/**
 * @brief Calls the `create` method. 
*/
jb_Promise CredentialsContainer_create1(CredentialsContainer* self , CredentialCreationOptions * options);

/**
 * @brief Calls the `preventSilentAccess` method. 
*/
jb_Promise CredentialsContainer_preventSilentAccess(CredentialsContainer* self );

#ifdef __cplusplus
}
#endif
