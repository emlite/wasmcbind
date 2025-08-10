#include <webbind/RTCIdentityProviderRegistrar.h>

#include <webbind/RTCIdentityProvider.h>

DEFINE_EMLITE_TYPE(RTCIdentityProviderRegistrar, em_Val);


jb_Undefined RTCIdentityProviderRegistrar_register_(RTCIdentityProviderRegistrar* self , RTCIdentityProvider * idp) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "register", em_Val_from(idp)));
}

