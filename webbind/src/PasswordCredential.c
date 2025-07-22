#include <webbind/PasswordCredential.h>


DEFINE_EMLITE_TYPE(PasswordCredential, Credential);


PasswordCredential PasswordCredential_new(jb_Any * data) {
        em_Val vv = em_Val_new(em_Val_global("PasswordCredential") , em_Val_from(data));
        return PasswordCredential_from_val(&vv);
      }


jb_USVString PasswordCredential_password(const PasswordCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), em_Val_from("password")));
}


jb_USVString PasswordCredential_name(const PasswordCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), em_Val_from("name")));
}


jb_USVString PasswordCredential_iconURL(const PasswordCredential *self) {
    return em_Val_as(jb_USVString, em_Val_get(Credential_as_val(self->inner), em_Val_from("iconURL")));
}

