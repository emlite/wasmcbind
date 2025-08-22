#include <webcbind/CurrentUserDetailsOptions.h>

DEFINE_EMLITE_TYPE(CurrentUserDetailsOptions, em_Val);


jb_String CurrentUserDetailsOptions_rpId(const CurrentUserDetailsOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void CurrentUserDetailsOptions_set_rpId(CurrentUserDetailsOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_Any CurrentUserDetailsOptions_userId(const CurrentUserDetailsOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userId")));
}


void CurrentUserDetailsOptions_set_userId(CurrentUserDetailsOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userId"), em_Val_from(value));
}


jb_String CurrentUserDetailsOptions_name(const CurrentUserDetailsOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void CurrentUserDetailsOptions_set_name(CurrentUserDetailsOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String CurrentUserDetailsOptions_displayName(const CurrentUserDetailsOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayName")));
}


void CurrentUserDetailsOptions_set_displayName(CurrentUserDetailsOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayName"), em_Val_from(value));
}


CurrentUserDetailsOptions CurrentUserDetailsOptions_new() {
    em_Val obj = em_Val_object();
    return CurrentUserDetailsOptions_from_val(&obj);
}

