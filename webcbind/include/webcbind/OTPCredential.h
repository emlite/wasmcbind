#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Credential.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface OTPCredential
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/OTPCredential)
 */
DECLARE_EMLITE_TYPE(OTPCredential, Credential);

/**
 * @brief Gets the `code` property. 
*/
jb_String OTPCredential_code(const OTPCredential *self);

#ifdef __cplusplus
}
#endif
