#include <webcbind/IdentityProviderWellKnown.h>

DEFINE_EMLITE_TYPE(IdentityProviderWellKnown, em_Val);


jb_Array IdentityProviderWellKnown_provider_urls(const IdentityProviderWellKnown *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("provider_urls")));
}


void IdentityProviderWellKnown_set_provider_urls(IdentityProviderWellKnown* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("provider_urls"), em_Val_from(value));
}


jb_String IdentityProviderWellKnown_accounts_endpoint(const IdentityProviderWellKnown *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("accounts_endpoint")));
}


void IdentityProviderWellKnown_set_accounts_endpoint(IdentityProviderWellKnown* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("accounts_endpoint"), em_Val_from(value));
}


jb_String IdentityProviderWellKnown_login_url(const IdentityProviderWellKnown *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("login_url")));
}


void IdentityProviderWellKnown_set_login_url(IdentityProviderWellKnown* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("login_url"), em_Val_from(value));
}


IdentityProviderWellKnown IdentityProviderWellKnown_new() {
    em_Val obj = em_Val_object();
    return IdentityProviderWellKnown_from_val(&obj);
}

