#include <webcbind/RegistrationResponseJSON.h>

DEFINE_EMLITE_TYPE(RegistrationResponseJSON, em_Val);


jb_String RegistrationResponseJSON_id(const RegistrationResponseJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void RegistrationResponseJSON_set_id(RegistrationResponseJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_Any RegistrationResponseJSON_rawId(const RegistrationResponseJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rawId")));
}


void RegistrationResponseJSON_set_rawId(RegistrationResponseJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rawId"), em_Val_from(value));
}


AuthenticatorAttestationResponseJSON RegistrationResponseJSON_response(const RegistrationResponseJSON *self) {
    return em_Val_as(AuthenticatorAttestationResponseJSON, em_Val_get(em_Val_as_val(self->inner), em_Val_from("response")));
}


void RegistrationResponseJSON_set_response(RegistrationResponseJSON* self, AuthenticatorAttestationResponseJSON * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("response"), em_Val_from(value));
}


jb_String RegistrationResponseJSON_authenticatorAttachment(const RegistrationResponseJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("authenticatorAttachment")));
}


void RegistrationResponseJSON_set_authenticatorAttachment(RegistrationResponseJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("authenticatorAttachment"), em_Val_from(value));
}


AuthenticationExtensionsClientOutputsJSON RegistrationResponseJSON_clientExtensionResults(const RegistrationResponseJSON *self) {
    return em_Val_as(AuthenticationExtensionsClientOutputsJSON, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clientExtensionResults")));
}


void RegistrationResponseJSON_set_clientExtensionResults(RegistrationResponseJSON* self, AuthenticationExtensionsClientOutputsJSON * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clientExtensionResults"), em_Val_from(value));
}


jb_String RegistrationResponseJSON_type(const RegistrationResponseJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void RegistrationResponseJSON_set_type(RegistrationResponseJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


RegistrationResponseJSON RegistrationResponseJSON_new() {
    em_Val obj = em_Val_object();
    return RegistrationResponseJSON_from_val(&obj);
}

