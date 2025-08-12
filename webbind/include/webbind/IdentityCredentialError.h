#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IdentityCredentialErrorInit IdentityCredentialErrorInit;


/**
 * @brief Interface IdentityCredentialError
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredentialError)
 */
DECLARE_EMLITE_TYPE(IdentityCredentialError, DOMException);

/**
 * @brief Creates a new `IdentityCredentialError` object. 
*/
IdentityCredentialError IdentityCredentialError_new0();

/**
 * @brief Creates a new `IdentityCredentialError` object. 
*/
IdentityCredentialError IdentityCredentialError_new1(jb_String * message);

/**
 * @brief Creates a new `IdentityCredentialError` object. 
*/
IdentityCredentialError IdentityCredentialError_new2(jb_String * message, IdentityCredentialErrorInit * options);

/**
 * @brief Gets the `error` property. 
*/
jb_String IdentityCredentialError_error(const IdentityCredentialError *self);

/**
 * @brief Gets the `url` property. 
*/
jb_String IdentityCredentialError_url(const IdentityCredentialError *self);

#ifdef __cplusplus
}
#endif
