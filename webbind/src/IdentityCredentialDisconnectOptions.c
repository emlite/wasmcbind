#include <webbind/IdentityCredentialDisconnectOptions.h>

DEFINE_EMLITE_TYPE(IdentityCredentialDisconnectOptions, IdentityProviderConfig);


jb_String IdentityCredentialDisconnectOptions_accountHint(const IdentityCredentialDisconnectOptions *self) {
    return em_Val_as(jb_String, em_Val_get(IdentityProviderConfig_as_val(self->inner), em_Val_from("accountHint")));
}


void IdentityCredentialDisconnectOptions_set_accountHint(IdentityCredentialDisconnectOptions* self, jb_String * value) {
    em_Val_set(IdentityProviderConfig_as_val(self->inner), em_Val_from("accountHint"), em_Val_from(value));
}


IdentityCredentialDisconnectOptions IdentityCredentialDisconnectOptions_new() {
    em_Val obj = em_Val_object();
    return IdentityCredentialDisconnectOptions_from_val(&obj);
}

