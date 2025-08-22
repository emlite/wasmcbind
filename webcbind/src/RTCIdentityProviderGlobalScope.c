#include <webcbind/RTCIdentityProviderGlobalScope.h>

#include <webcbind/RTCIdentityProviderRegistrar.h>

DEFINE_EMLITE_TYPE(RTCIdentityProviderGlobalScope, WorkerGlobalScope);


RTCIdentityProviderRegistrar RTCIdentityProviderGlobalScope_rtcIdentityProvider(const RTCIdentityProviderGlobalScope *self) {
    return em_Val_as(RTCIdentityProviderRegistrar, em_Val_get(WorkerGlobalScope_as_val(self->inner), em_Val_from("rtcIdentityProvider")));
}

