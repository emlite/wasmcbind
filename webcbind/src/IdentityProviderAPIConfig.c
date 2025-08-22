#include <webcbind/IdentityProviderAPIConfig.h>

DEFINE_EMLITE_TYPE(IdentityProviderAPIConfig, em_Val);


jb_String IdentityProviderAPIConfig_accounts_endpoint(const IdentityProviderAPIConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("accounts_endpoint")));
}


void IdentityProviderAPIConfig_set_accounts_endpoint(IdentityProviderAPIConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("accounts_endpoint"), em_Val_from(value));
}


jb_String IdentityProviderAPIConfig_client_metadata_endpoint(const IdentityProviderAPIConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("client_metadata_endpoint")));
}


void IdentityProviderAPIConfig_set_client_metadata_endpoint(IdentityProviderAPIConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("client_metadata_endpoint"), em_Val_from(value));
}


jb_String IdentityProviderAPIConfig_id_assertion_endpoint(const IdentityProviderAPIConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id_assertion_endpoint")));
}


void IdentityProviderAPIConfig_set_id_assertion_endpoint(IdentityProviderAPIConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id_assertion_endpoint"), em_Val_from(value));
}


jb_String IdentityProviderAPIConfig_login_url(const IdentityProviderAPIConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("login_url")));
}


void IdentityProviderAPIConfig_set_login_url(IdentityProviderAPIConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("login_url"), em_Val_from(value));
}


jb_String IdentityProviderAPIConfig_disconnect_endpoint(const IdentityProviderAPIConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("disconnect_endpoint")));
}


void IdentityProviderAPIConfig_set_disconnect_endpoint(IdentityProviderAPIConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("disconnect_endpoint"), em_Val_from(value));
}


IdentityProviderBranding IdentityProviderAPIConfig_branding(const IdentityProviderAPIConfig *self) {
    return em_Val_as(IdentityProviderBranding, em_Val_get(em_Val_as_val(self->inner), em_Val_from("branding")));
}


void IdentityProviderAPIConfig_set_branding(IdentityProviderAPIConfig* self, IdentityProviderBranding * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("branding"), em_Val_from(value));
}


bool IdentityProviderAPIConfig_supports_use_other_account(const IdentityProviderAPIConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supports_use_other_account")));
}


void IdentityProviderAPIConfig_set_supports_use_other_account(IdentityProviderAPIConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supports_use_other_account"), em_Val_from(value));
}


jb_String IdentityProviderAPIConfig_account_label(const IdentityProviderAPIConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("account_label")));
}


void IdentityProviderAPIConfig_set_account_label(IdentityProviderAPIConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("account_label"), em_Val_from(value));
}


IdentityProviderAPIConfig IdentityProviderAPIConfig_new() {
    em_Val obj = em_Val_object();
    return IdentityProviderAPIConfig_from_val(&obj);
}

