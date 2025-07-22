#include <webbind/PasswordCredential.h>


DEFINE_EMLITE_TYPE(PasswordCredential, Credential);


PasswordCredential PasswordCredential_new(const jb_Any* data) : Credential(em_Val_global("PasswordCredential").new_(em_Val_from(data))) {
        return PasswordCredential(em_Val_new(em_Val_global("PasswordCredential", em_Val_from(data)));
      }


jb_USVString PasswordCredential_password(const PasswordCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), "password"));
}


jb_USVString PasswordCredential_name(const PasswordCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), "name"));
}


jb_USVString PasswordCredential_iconURL(const PasswordCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), "iconURL"));
}

