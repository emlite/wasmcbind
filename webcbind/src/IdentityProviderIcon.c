#include <webcbind/IdentityProviderIcon.h>

DEFINE_EMLITE_TYPE(IdentityProviderIcon, em_Val);


jb_String IdentityProviderIcon_url(const IdentityProviderIcon *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void IdentityProviderIcon_set_url(IdentityProviderIcon* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


unsigned long IdentityProviderIcon_size(const IdentityProviderIcon *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}


void IdentityProviderIcon_set_size(IdentityProviderIcon* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


IdentityProviderIcon IdentityProviderIcon_new() {
    em_Val obj = em_Val_object();
    return IdentityProviderIcon_from_val(&obj);
}

