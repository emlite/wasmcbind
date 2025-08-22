#include <webcbind/AuthenticationExtensionsClientOutputs.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsClientOutputs, em_Val);


AuthenticationExtensionsLargeBlobOutputs AuthenticationExtensionsClientOutputs_largeBlob(const AuthenticationExtensionsClientOutputs *self) {
    return em_Val_as(AuthenticationExtensionsLargeBlobOutputs, em_Val_get(em_Val_as_val(self->inner), em_Val_from("largeBlob")));
}


void AuthenticationExtensionsClientOutputs_set_largeBlob(AuthenticationExtensionsClientOutputs* self, AuthenticationExtensionsLargeBlobOutputs * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("largeBlob"), em_Val_from(value));
}


AuthenticationExtensionsClientOutputs AuthenticationExtensionsClientOutputs_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsClientOutputs_from_val(&obj);
}

