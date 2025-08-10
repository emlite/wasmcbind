#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkerGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCIdentityProviderRegistrar RTCIdentityProviderRegistrar;

DECLARE_EMLITE_TYPE(RTCIdentityProviderGlobalScope, WorkerGlobalScope);

RTCIdentityProviderRegistrar RTCIdentityProviderGlobalScope_rtcIdentityProvider(const RTCIdentityProviderGlobalScope *self);

#ifdef __cplusplus
}
#endif
