#include <webcbind/CredentialRequestOptions.h>

DEFINE_EMLITE_TYPE(CredentialRequestOptions, em_Val);


PublicKeyCredentialRequestOptions CredentialRequestOptions_publicKey(const CredentialRequestOptions *self) {
    return em_Val_as(PublicKeyCredentialRequestOptions, em_Val_get(em_Val_as_val(self->inner), em_Val_from("publicKey")));
}


void CredentialRequestOptions_set_publicKey(CredentialRequestOptions* self, PublicKeyCredentialRequestOptions * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("publicKey"), em_Val_from(value));
}


CredentialRequestOptions CredentialRequestOptions_new() {
    em_Val obj = em_Val_object();
    return CredentialRequestOptions_from_val(&obj);
}

