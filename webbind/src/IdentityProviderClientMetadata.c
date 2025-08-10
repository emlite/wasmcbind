#include <webbind/IdentityProviderClientMetadata.h>

DEFINE_EMLITE_TYPE(IdentityProviderClientMetadata, em_Val);


jb_String IdentityProviderClientMetadata_privacy_policy_url(const IdentityProviderClientMetadata *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("privacy_policy_url")));
}


void IdentityProviderClientMetadata_set_privacy_policy_url(IdentityProviderClientMetadata* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("privacy_policy_url"), em_Val_from(value));
}


jb_String IdentityProviderClientMetadata_terms_of_service_url(const IdentityProviderClientMetadata *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("terms_of_service_url")));
}


void IdentityProviderClientMetadata_set_terms_of_service_url(IdentityProviderClientMetadata* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("terms_of_service_url"), em_Val_from(value));
}


IdentityProviderClientMetadata IdentityProviderClientMetadata_new() {
    em_Val obj = em_Val_object();
    return IdentityProviderClientMetadata_from_val(&obj);
}

