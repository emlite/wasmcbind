#include <webcbind/PasswordCredentialData.h>

DEFINE_EMLITE_TYPE(PasswordCredentialData, CredentialData);


jb_String PasswordCredentialData_name(const PasswordCredentialData *self) {
    return em_Val_as(jb_String, em_Val_get(CredentialData_as_val(self->inner), em_Val_from("name")));
}


void PasswordCredentialData_set_name(PasswordCredentialData* self, jb_String * value) {
    em_Val_set(CredentialData_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String PasswordCredentialData_iconURL(const PasswordCredentialData *self) {
    return em_Val_as(jb_String, em_Val_get(CredentialData_as_val(self->inner), em_Val_from("iconURL")));
}


void PasswordCredentialData_set_iconURL(PasswordCredentialData* self, jb_String * value) {
    em_Val_set(CredentialData_as_val(self->inner), em_Val_from("iconURL"), em_Val_from(value));
}


jb_String PasswordCredentialData_origin(const PasswordCredentialData *self) {
    return em_Val_as(jb_String, em_Val_get(CredentialData_as_val(self->inner), em_Val_from("origin")));
}


void PasswordCredentialData_set_origin(PasswordCredentialData* self, jb_String * value) {
    em_Val_set(CredentialData_as_val(self->inner), em_Val_from("origin"), em_Val_from(value));
}


jb_String PasswordCredentialData_password(const PasswordCredentialData *self) {
    return em_Val_as(jb_String, em_Val_get(CredentialData_as_val(self->inner), em_Val_from("password")));
}


void PasswordCredentialData_set_password(PasswordCredentialData* self, jb_String * value) {
    em_Val_set(CredentialData_as_val(self->inner), em_Val_from("password"), em_Val_from(value));
}


PasswordCredentialData PasswordCredentialData_new() {
    em_Val obj = em_Val_object();
    return PasswordCredentialData_from_val(&obj);
}

