#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCIdentityProvider RTCIdentityProvider;


/**
 * @brief Interface RTCIdentityProviderRegistrar
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderRegistrar)
 */
DECLARE_EMLITE_TYPE(RTCIdentityProviderRegistrar, em_Val);

/**
 * @brief Calls the `register` method. 
*/
jb_Undefined RTCIdentityProviderRegistrar_register_(RTCIdentityProviderRegistrar* self , RTCIdentityProvider * idp);

#ifdef __cplusplus
}
#endif
