#include <webbind/IdentityProviderBranding.h>

DEFINE_EMLITE_TYPE(IdentityProviderBranding, em_Val);


jb_String IdentityProviderBranding_background_color(const IdentityProviderBranding *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("background_color")));
}


void IdentityProviderBranding_set_background_color(IdentityProviderBranding* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("background_color"), em_Val_from(value));
}


jb_String IdentityProviderBranding_color(const IdentityProviderBranding *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("color")));
}


void IdentityProviderBranding_set_color(IdentityProviderBranding* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("color"), em_Val_from(value));
}


jb_Array IdentityProviderBranding_icons(const IdentityProviderBranding *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("icons")));
}


void IdentityProviderBranding_set_icons(IdentityProviderBranding* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("icons"), em_Val_from(value));
}


jb_String IdentityProviderBranding_name(const IdentityProviderBranding *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void IdentityProviderBranding_set_name(IdentityProviderBranding* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


IdentityProviderBranding IdentityProviderBranding_new() {
    em_Val obj = em_Val_object();
    return IdentityProviderBranding_from_val(&obj);
}

