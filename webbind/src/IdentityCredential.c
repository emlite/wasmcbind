#include <webbind/IdentityCredential.h>


DEFINE_EMLITE_TYPE(IdentityCredentialDisconnectOptions, em_Val);


jb_USVString IdentityCredentialDisconnectOptions_accountHint(const IdentityCredentialDisconnectOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "accountHint"));
}


void IdentityCredentialDisconnectOptions_set_accountHint(IdentityCredentialDisconnectOptions* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "accountHint", value);
}

DEFINE_EMLITE_TYPE(IdentityCredential, Credential);


jb_Promise IdentityCredential_disconnect(IdentityCredential* self , const IdentityCredentialDisconnectOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("identitycredential"), "disconnect", em_Val_from(options)));
}


jb_USVString IdentityCredential_token(const IdentityCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), "token"));
}


bool IdentityCredential_isAutoSelected(const IdentityCredential *self) {
    return em_Val_as(bool, em_Val_get(Credential_as_val(self->inner), "isAutoSelected"));
}


jb_USVString IdentityCredential_configURL(const IdentityCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), "configURL"));
}

