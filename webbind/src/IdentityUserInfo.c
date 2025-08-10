#include <webbind/IdentityUserInfo.h>

DEFINE_EMLITE_TYPE(IdentityUserInfo, em_Val);


jb_String IdentityUserInfo_email(const IdentityUserInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("email")));
}


void IdentityUserInfo_set_email(IdentityUserInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("email"), em_Val_from(value));
}


jb_String IdentityUserInfo_name(const IdentityUserInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void IdentityUserInfo_set_name(IdentityUserInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String IdentityUserInfo_givenName(const IdentityUserInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("givenName")));
}


void IdentityUserInfo_set_givenName(IdentityUserInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("givenName"), em_Val_from(value));
}


jb_String IdentityUserInfo_picture(const IdentityUserInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("picture")));
}


void IdentityUserInfo_set_picture(IdentityUserInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("picture"), em_Val_from(value));
}


IdentityUserInfo IdentityUserInfo_new() {
    em_Val obj = em_Val_object();
    return IdentityUserInfo_from_val(&obj);
}

