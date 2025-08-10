#include <webbind/IdentityProviderConfig.h>

DEFINE_EMLITE_TYPE(IdentityProviderConfig, em_Val);


jb_String IdentityProviderConfig_configURL(const IdentityProviderConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("configURL")));
}


void IdentityProviderConfig_set_configURL(IdentityProviderConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("configURL"), em_Val_from(value));
}


jb_String IdentityProviderConfig_clientId(const IdentityProviderConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clientId")));
}


void IdentityProviderConfig_set_clientId(IdentityProviderConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clientId"), em_Val_from(value));
}


IdentityProviderConfig IdentityProviderConfig_new() {
    em_Val obj = em_Val_object();
    return IdentityProviderConfig_from_val(&obj);
}

