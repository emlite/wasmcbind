#include <webbind/IdentityCredential.h>

#include <webbind/IdentityCredentialDisconnectOptions.h>

DEFINE_EMLITE_TYPE(IdentityCredential, Credential);


jb_Promise IdentityCredential_disconnect(IdentityCredential* self , IdentityCredentialDisconnectOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("identitycredential"), "disconnect", em_Val_from(options)));
}


jb_String IdentityCredential_token(const IdentityCredential *self) {
    return em_Val_as(jb_String, em_Val_get(Credential_as_val(self->inner), em_Val_from("token")));
}


bool IdentityCredential_isAutoSelected(const IdentityCredential *self) {
    return em_Val_as(bool, em_Val_get(Credential_as_val(self->inner), em_Val_from("isAutoSelected")));
}


jb_String IdentityCredential_configURL(const IdentityCredential *self) {
    return em_Val_as(jb_String, em_Val_get(Credential_as_val(self->inner), em_Val_from("configURL")));
}

