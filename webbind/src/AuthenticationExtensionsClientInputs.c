#include <webbind/AuthenticationExtensionsClientInputs.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsClientInputs, em_Val);


AuthenticationExtensionsLargeBlobInputs AuthenticationExtensionsClientInputs_largeBlob(const AuthenticationExtensionsClientInputs *self) {
    return em_Val_as(AuthenticationExtensionsLargeBlobInputs, em_Val_get(em_Val_as_val(self->inner), em_Val_from("largeBlob")));
}


void AuthenticationExtensionsClientInputs_set_largeBlob(AuthenticationExtensionsClientInputs* self, AuthenticationExtensionsLargeBlobInputs * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("largeBlob"), em_Val_from(value));
}


AuthenticationExtensionsClientInputs AuthenticationExtensionsClientInputs_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsClientInputs_from_val(&obj);
}

