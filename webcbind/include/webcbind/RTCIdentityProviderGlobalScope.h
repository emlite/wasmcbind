#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WorkerGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCIdentityProviderRegistrar RTCIdentityProviderRegistrar;


/**
 * @brief Interface RTCIdentityProviderGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityProviderGlobalScope)
 */
DECLARE_EMLITE_TYPE(RTCIdentityProviderGlobalScope, WorkerGlobalScope);

/**
 * @brief Gets the `rtcIdentityProvider` property. 
*/
RTCIdentityProviderRegistrar RTCIdentityProviderGlobalScope_rtcIdentityProvider(const RTCIdentityProviderGlobalScope *self);

#ifdef __cplusplus
}
#endif
