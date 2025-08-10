#include <webbind/IdentityProviderAccount.h>

DEFINE_EMLITE_TYPE(IdentityProviderAccount, em_Val);


jb_String IdentityProviderAccount_id(const IdentityProviderAccount *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void IdentityProviderAccount_set_id(IdentityProviderAccount* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_String IdentityProviderAccount_name(const IdentityProviderAccount *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void IdentityProviderAccount_set_name(IdentityProviderAccount* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String IdentityProviderAccount_email(const IdentityProviderAccount *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("email")));
}


void IdentityProviderAccount_set_email(IdentityProviderAccount* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("email"), em_Val_from(value));
}


jb_String IdentityProviderAccount_tel(const IdentityProviderAccount *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tel")));
}


void IdentityProviderAccount_set_tel(IdentityProviderAccount* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("tel"), em_Val_from(value));
}


jb_String IdentityProviderAccount_username(const IdentityProviderAccount *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("username")));
}


void IdentityProviderAccount_set_username(IdentityProviderAccount* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("username"), em_Val_from(value));
}


jb_String IdentityProviderAccount_given_name(const IdentityProviderAccount *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("given_name")));
}


void IdentityProviderAccount_set_given_name(IdentityProviderAccount* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("given_name"), em_Val_from(value));
}


jb_String IdentityProviderAccount_picture(const IdentityProviderAccount *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("picture")));
}


void IdentityProviderAccount_set_picture(IdentityProviderAccount* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("picture"), em_Val_from(value));
}


jb_Array IdentityProviderAccount_approved_clients(const IdentityProviderAccount *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("approved_clients")));
}


void IdentityProviderAccount_set_approved_clients(IdentityProviderAccount* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("approved_clients"), em_Val_from(value));
}


jb_Array IdentityProviderAccount_login_hints(const IdentityProviderAccount *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("login_hints")));
}


void IdentityProviderAccount_set_login_hints(IdentityProviderAccount* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("login_hints"), em_Val_from(value));
}


jb_Array IdentityProviderAccount_domain_hints(const IdentityProviderAccount *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("domain_hints")));
}


void IdentityProviderAccount_set_domain_hints(IdentityProviderAccount* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("domain_hints"), em_Val_from(value));
}


jb_Array IdentityProviderAccount_label_hints(const IdentityProviderAccount *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label_hints")));
}


void IdentityProviderAccount_set_label_hints(IdentityProviderAccount* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label_hints"), em_Val_from(value));
}


IdentityProviderAccount IdentityProviderAccount_new() {
    em_Val obj = em_Val_object();
    return IdentityProviderAccount_from_val(&obj);
}

