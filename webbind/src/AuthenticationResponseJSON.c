#include <webbind/AuthenticationResponseJSON.h>

DEFINE_EMLITE_TYPE(AuthenticationResponseJSON, em_Val);


jb_String AuthenticationResponseJSON_id(const AuthenticationResponseJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void AuthenticationResponseJSON_set_id(AuthenticationResponseJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_Any AuthenticationResponseJSON_rawId(const AuthenticationResponseJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rawId")));
}


void AuthenticationResponseJSON_set_rawId(AuthenticationResponseJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rawId"), em_Val_from(value));
}


AuthenticatorAssertionResponseJSON AuthenticationResponseJSON_response(const AuthenticationResponseJSON *self) {
    return em_Val_as(AuthenticatorAssertionResponseJSON, em_Val_get(em_Val_as_val(self->inner), em_Val_from("response")));
}


void AuthenticationResponseJSON_set_response(AuthenticationResponseJSON* self, AuthenticatorAssertionResponseJSON * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("response"), em_Val_from(value));
}


jb_String AuthenticationResponseJSON_authenticatorAttachment(const AuthenticationResponseJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("authenticatorAttachment")));
}


void AuthenticationResponseJSON_set_authenticatorAttachment(AuthenticationResponseJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("authenticatorAttachment"), em_Val_from(value));
}


AuthenticationExtensionsClientOutputsJSON AuthenticationResponseJSON_clientExtensionResults(const AuthenticationResponseJSON *self) {
    return em_Val_as(AuthenticationExtensionsClientOutputsJSON, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clientExtensionResults")));
}


void AuthenticationResponseJSON_set_clientExtensionResults(AuthenticationResponseJSON* self, AuthenticationExtensionsClientOutputsJSON * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clientExtensionResults"), em_Val_from(value));
}


jb_String AuthenticationResponseJSON_type(const AuthenticationResponseJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void AuthenticationResponseJSON_set_type(AuthenticationResponseJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


AuthenticationResponseJSON AuthenticationResponseJSON_new() {
    em_Val obj = em_Val_object();
    return AuthenticationResponseJSON_from_val(&obj);
}

