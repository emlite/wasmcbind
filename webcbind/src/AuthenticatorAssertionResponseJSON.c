#include <webcbind/AuthenticatorAssertionResponseJSON.h>

DEFINE_EMLITE_TYPE(AuthenticatorAssertionResponseJSON, em_Val);


jb_Any AuthenticatorAssertionResponseJSON_clientDataJSON(const AuthenticatorAssertionResponseJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clientDataJSON")));
}


void AuthenticatorAssertionResponseJSON_set_clientDataJSON(AuthenticatorAssertionResponseJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clientDataJSON"), em_Val_from(value));
}


jb_Any AuthenticatorAssertionResponseJSON_authenticatorData(const AuthenticatorAssertionResponseJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("authenticatorData")));
}


void AuthenticatorAssertionResponseJSON_set_authenticatorData(AuthenticatorAssertionResponseJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("authenticatorData"), em_Val_from(value));
}


jb_Any AuthenticatorAssertionResponseJSON_signature(const AuthenticatorAssertionResponseJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signature")));
}


void AuthenticatorAssertionResponseJSON_set_signature(AuthenticatorAssertionResponseJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signature"), em_Val_from(value));
}


jb_Any AuthenticatorAssertionResponseJSON_userHandle(const AuthenticatorAssertionResponseJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userHandle")));
}


void AuthenticatorAssertionResponseJSON_set_userHandle(AuthenticatorAssertionResponseJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userHandle"), em_Val_from(value));
}


AuthenticatorAssertionResponseJSON AuthenticatorAssertionResponseJSON_new() {
    em_Val obj = em_Val_object();
    return AuthenticatorAssertionResponseJSON_from_val(&obj);
}

