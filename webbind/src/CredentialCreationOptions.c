#include <webbind/CredentialCreationOptions.h>

DEFINE_EMLITE_TYPE(CredentialCreationOptions, em_Val);


PublicKeyCredentialCreationOptions CredentialCreationOptions_publicKey(const CredentialCreationOptions *self) {
    return em_Val_as(PublicKeyCredentialCreationOptions, em_Val_get(em_Val_as_val(self->inner), em_Val_from("publicKey")));
}


void CredentialCreationOptions_set_publicKey(CredentialCreationOptions* self, PublicKeyCredentialCreationOptions * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("publicKey"), em_Val_from(value));
}


CredentialCreationOptions CredentialCreationOptions_new() {
    em_Val obj = em_Val_object();
    return CredentialCreationOptions_from_val(&obj);
}

