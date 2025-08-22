#include <webcbind/CredentialsContainer.h>

#include <webcbind/Credential.h>
#include <webcbind/CredentialRequestOptions.h>
#include <webcbind/CredentialCreationOptions.h>

DEFINE_EMLITE_TYPE(CredentialsContainer, em_Val);


jb_Promise CredentialsContainer_get0(CredentialsContainer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "get"));
}


jb_Promise CredentialsContainer_get1(CredentialsContainer* self , CredentialRequestOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(options)));
}


jb_Promise CredentialsContainer_store(CredentialsContainer* self , Credential * credential) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "store", em_Val_from(credential)));
}


jb_Promise CredentialsContainer_create0(CredentialsContainer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "create"));
}


jb_Promise CredentialsContainer_create1(CredentialsContainer* self , CredentialCreationOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "create", em_Val_from(options)));
}


jb_Promise CredentialsContainer_preventSilentAccess(CredentialsContainer* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "preventSilentAccess"));
}

