#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Credential.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PasswordCredentialData PasswordCredentialData;


/**
 * @brief Interface PasswordCredential
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredential)
 */
DECLARE_EMLITE_TYPE(PasswordCredential, Credential);

/**
 * @brief Creates a new `PasswordCredential` object. 
*/
PasswordCredential PasswordCredential_new(PasswordCredentialData * data);

/**
 * @brief Gets the `password` property. 
*/
jb_String PasswordCredential_password(const PasswordCredential *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String PasswordCredential_name(const PasswordCredential *self);

/**
 * @brief Gets the `iconURL` property. 
*/
jb_String PasswordCredential_iconURL(const PasswordCredential *self);

#ifdef __cplusplus
}
#endif
