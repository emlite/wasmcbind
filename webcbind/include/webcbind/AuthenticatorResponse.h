#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface AuthenticatorResponse
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorResponse)
 */
DECLARE_EMLITE_TYPE(AuthenticatorResponse, em_Val);

/**
 * @brief Gets the `clientDataJSON` property. 
*/
jb_ArrayBuffer AuthenticatorResponse_clientDataJSON(const AuthenticatorResponse *self);

#ifdef __cplusplus
}
#endif
