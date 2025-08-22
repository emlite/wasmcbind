#include <webcbind/IdentityCredentialRequestOptions.h>

DEFINE_EMLITE_TYPE(IdentityCredentialRequestOptions, em_Val);


jb_Array IdentityCredentialRequestOptions_providers(const IdentityCredentialRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("providers")));
}


void IdentityCredentialRequestOptions_set_providers(IdentityCredentialRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("providers"), em_Val_from(value));
}


IdentityCredentialRequestOptionsContext IdentityCredentialRequestOptions_context(const IdentityCredentialRequestOptions *self) {
    return em_Val_as(IdentityCredentialRequestOptionsContext, em_Val_get(em_Val_as_val(self->inner), em_Val_from("context")));
}


void IdentityCredentialRequestOptions_set_context(IdentityCredentialRequestOptions* self, IdentityCredentialRequestOptionsContext * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("context"), em_Val_from(value));
}


IdentityCredentialRequestOptionsMode IdentityCredentialRequestOptions_mode(const IdentityCredentialRequestOptions *self) {
    return em_Val_as(IdentityCredentialRequestOptionsMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void IdentityCredentialRequestOptions_set_mode(IdentityCredentialRequestOptions* self, IdentityCredentialRequestOptionsMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


IdentityCredentialRequestOptions IdentityCredentialRequestOptions_new() {
    em_Val obj = em_Val_object();
    return IdentityCredentialRequestOptions_from_val(&obj);
}

