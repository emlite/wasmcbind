#include <webcbind/PublicKeyCredentialRequestOptionsJSON.h>

DEFINE_EMLITE_TYPE(PublicKeyCredentialRequestOptionsJSON, em_Val);


jb_Any PublicKeyCredentialRequestOptionsJSON_challenge(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("challenge")));
}


void PublicKeyCredentialRequestOptionsJSON_set_challenge(PublicKeyCredentialRequestOptionsJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("challenge"), em_Val_from(value));
}


unsigned long PublicKeyCredentialRequestOptionsJSON_timeout(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void PublicKeyCredentialRequestOptionsJSON_set_timeout(PublicKeyCredentialRequestOptionsJSON* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


jb_String PublicKeyCredentialRequestOptionsJSON_rpId(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void PublicKeyCredentialRequestOptionsJSON_set_rpId(PublicKeyCredentialRequestOptionsJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_Array PublicKeyCredentialRequestOptionsJSON_allowCredentials(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowCredentials")));
}


void PublicKeyCredentialRequestOptionsJSON_set_allowCredentials(PublicKeyCredentialRequestOptionsJSON* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowCredentials"), em_Val_from(value));
}


jb_String PublicKeyCredentialRequestOptionsJSON_userVerification(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userVerification")));
}


void PublicKeyCredentialRequestOptionsJSON_set_userVerification(PublicKeyCredentialRequestOptionsJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userVerification"), em_Val_from(value));
}


jb_Array PublicKeyCredentialRequestOptionsJSON_hints(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hints")));
}


void PublicKeyCredentialRequestOptionsJSON_set_hints(PublicKeyCredentialRequestOptionsJSON* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hints"), em_Val_from(value));
}


AuthenticationExtensionsClientInputsJSON PublicKeyCredentialRequestOptionsJSON_extensions(const PublicKeyCredentialRequestOptionsJSON *self) {
    return em_Val_as(AuthenticationExtensionsClientInputsJSON, em_Val_get(em_Val_as_val(self->inner), em_Val_from("extensions")));
}


void PublicKeyCredentialRequestOptionsJSON_set_extensions(PublicKeyCredentialRequestOptionsJSON* self, AuthenticationExtensionsClientInputsJSON * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("extensions"), em_Val_from(value));
}


PublicKeyCredentialRequestOptionsJSON PublicKeyCredentialRequestOptionsJSON_new() {
    em_Val obj = em_Val_object();
    return PublicKeyCredentialRequestOptionsJSON_from_val(&obj);
}

