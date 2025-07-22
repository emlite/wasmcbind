#include <webbind/CredentialsContainer.h>
#include <webbind/Credential.h>
#include <webbind/PublicKeyCredential.h>


DEFINE_EMLITE_TYPE(CredentialRequestOptions, em_Val);


PublicKeyCredentialRequestOptions CredentialRequestOptions_publicKey(const CredentialRequestOptions *self) {
    return em_Val_as(PublicKeyCredentialRequestOptions, em_Val_get(em_Val_as_val(self->inner), "publicKey"));
}


void CredentialRequestOptions_set_publicKey(CredentialRequestOptions* self, const PublicKeyCredentialRequestOptions* value) {
    em_Val_set(em_Val_as_val(self->inner), "publicKey", value);
}

DEFINE_EMLITE_TYPE(CredentialCreationOptions, em_Val);


PublicKeyCredentialCreationOptions CredentialCreationOptions_publicKey(const CredentialCreationOptions *self) {
    return em_Val_as(PublicKeyCredentialCreationOptions, em_Val_get(em_Val_as_val(self->inner), "publicKey"));
}


void CredentialCreationOptions_set_publicKey(CredentialCreationOptions* self, const PublicKeyCredentialCreationOptions* value) {
    em_Val_set(em_Val_as_val(self->inner), "publicKey", value);
}

DEFINE_EMLITE_TYPE(CredentialsContainer, em_Val);


jb_Promise CredentialsContainer_get(CredentialsContainer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "get"));
}


jb_Promise CredentialsContainer_get(CredentialsContainer* self , const CredentialRequestOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(options)));
}


jb_Promise CredentialsContainer_store(CredentialsContainer* self , const Credential* credential) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "store", em_Val_from(credential)));
}


jb_Promise CredentialsContainer_create(CredentialsContainer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "create"));
}


jb_Promise CredentialsContainer_create(CredentialsContainer* self , const CredentialCreationOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "create", em_Val_from(options)));
}


jb_Promise CredentialsContainer_preventSilentAccess(CredentialsContainer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "preventSilentAccess"));
}

