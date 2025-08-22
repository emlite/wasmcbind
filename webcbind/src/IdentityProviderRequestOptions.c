#include <webcbind/IdentityProviderRequestOptions.h>

DEFINE_EMLITE_TYPE(IdentityProviderRequestOptions, IdentityProviderConfig);


jb_String IdentityProviderRequestOptions_nonce(const IdentityProviderRequestOptions *self) {
    return em_Val_as(jb_String, em_Val_get(IdentityProviderConfig_as_val(self->inner), em_Val_from("nonce")));
}


void IdentityProviderRequestOptions_set_nonce(IdentityProviderRequestOptions* self, jb_String * value) {
    em_Val_set(IdentityProviderConfig_as_val(self->inner), em_Val_from("nonce"), em_Val_from(value));
}


jb_String IdentityProviderRequestOptions_loginHint(const IdentityProviderRequestOptions *self) {
    return em_Val_as(jb_String, em_Val_get(IdentityProviderConfig_as_val(self->inner), em_Val_from("loginHint")));
}


void IdentityProviderRequestOptions_set_loginHint(IdentityProviderRequestOptions* self, jb_String * value) {
    em_Val_set(IdentityProviderConfig_as_val(self->inner), em_Val_from("loginHint"), em_Val_from(value));
}


jb_String IdentityProviderRequestOptions_domainHint(const IdentityProviderRequestOptions *self) {
    return em_Val_as(jb_String, em_Val_get(IdentityProviderConfig_as_val(self->inner), em_Val_from("domainHint")));
}


void IdentityProviderRequestOptions_set_domainHint(IdentityProviderRequestOptions* self, jb_String * value) {
    em_Val_set(IdentityProviderConfig_as_val(self->inner), em_Val_from("domainHint"), em_Val_from(value));
}


jb_Array IdentityProviderRequestOptions_fields(const IdentityProviderRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(IdentityProviderConfig_as_val(self->inner), em_Val_from("fields")));
}


void IdentityProviderRequestOptions_set_fields(IdentityProviderRequestOptions* self, jb_Array * value) {
    em_Val_set(IdentityProviderConfig_as_val(self->inner), em_Val_from("fields"), em_Val_from(value));
}


jb_Any IdentityProviderRequestOptions_params(const IdentityProviderRequestOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(IdentityProviderConfig_as_val(self->inner), em_Val_from("params")));
}


void IdentityProviderRequestOptions_set_params(IdentityProviderRequestOptions* self, jb_Any * value) {
    em_Val_set(IdentityProviderConfig_as_val(self->inner), em_Val_from("params"), em_Val_from(value));
}


IdentityProviderRequestOptions IdentityProviderRequestOptions_new() {
    em_Val obj = em_Val_object();
    return IdentityProviderRequestOptions_from_val(&obj);
}

