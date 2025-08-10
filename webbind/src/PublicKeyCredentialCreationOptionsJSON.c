#include <webbind/PublicKeyCredentialCreationOptionsJSON.h>

DEFINE_EMLITE_TYPE(PublicKeyCredentialCreationOptionsJSON, em_Val);


PublicKeyCredentialRpEntity PublicKeyCredentialCreationOptionsJSON_rp(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(PublicKeyCredentialRpEntity, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rp")));
}


void PublicKeyCredentialCreationOptionsJSON_set_rp(PublicKeyCredentialCreationOptionsJSON* self, PublicKeyCredentialRpEntity * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rp"), em_Val_from(value));
}


PublicKeyCredentialUserEntityJSON PublicKeyCredentialCreationOptionsJSON_user(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(PublicKeyCredentialUserEntityJSON, em_Val_get(em_Val_as_val(self->inner), em_Val_from("user")));
}


void PublicKeyCredentialCreationOptionsJSON_set_user(PublicKeyCredentialCreationOptionsJSON* self, PublicKeyCredentialUserEntityJSON * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("user"), em_Val_from(value));
}


jb_Any PublicKeyCredentialCreationOptionsJSON_challenge(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("challenge")));
}


void PublicKeyCredentialCreationOptionsJSON_set_challenge(PublicKeyCredentialCreationOptionsJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("challenge"), em_Val_from(value));
}


jb_Array PublicKeyCredentialCreationOptionsJSON_pubKeyCredParams(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pubKeyCredParams")));
}


void PublicKeyCredentialCreationOptionsJSON_set_pubKeyCredParams(PublicKeyCredentialCreationOptionsJSON* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pubKeyCredParams"), em_Val_from(value));
}


unsigned long PublicKeyCredentialCreationOptionsJSON_timeout(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void PublicKeyCredentialCreationOptionsJSON_set_timeout(PublicKeyCredentialCreationOptionsJSON* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


jb_Array PublicKeyCredentialCreationOptionsJSON_excludeCredentials(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("excludeCredentials")));
}


void PublicKeyCredentialCreationOptionsJSON_set_excludeCredentials(PublicKeyCredentialCreationOptionsJSON* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("excludeCredentials"), em_Val_from(value));
}


AuthenticatorSelectionCriteria PublicKeyCredentialCreationOptionsJSON_authenticatorSelection(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(AuthenticatorSelectionCriteria, em_Val_get(em_Val_as_val(self->inner), em_Val_from("authenticatorSelection")));
}


void PublicKeyCredentialCreationOptionsJSON_set_authenticatorSelection(PublicKeyCredentialCreationOptionsJSON* self, AuthenticatorSelectionCriteria * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("authenticatorSelection"), em_Val_from(value));
}


jb_Array PublicKeyCredentialCreationOptionsJSON_hints(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hints")));
}


void PublicKeyCredentialCreationOptionsJSON_set_hints(PublicKeyCredentialCreationOptionsJSON* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hints"), em_Val_from(value));
}


jb_String PublicKeyCredentialCreationOptionsJSON_attestation(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attestation")));
}


void PublicKeyCredentialCreationOptionsJSON_set_attestation(PublicKeyCredentialCreationOptionsJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attestation"), em_Val_from(value));
}


jb_Array PublicKeyCredentialCreationOptionsJSON_attestationFormats(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attestationFormats")));
}


void PublicKeyCredentialCreationOptionsJSON_set_attestationFormats(PublicKeyCredentialCreationOptionsJSON* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attestationFormats"), em_Val_from(value));
}


AuthenticationExtensionsClientInputsJSON PublicKeyCredentialCreationOptionsJSON_extensions(const PublicKeyCredentialCreationOptionsJSON *self) {
    return em_Val_as(AuthenticationExtensionsClientInputsJSON, em_Val_get(em_Val_as_val(self->inner), em_Val_from("extensions")));
}


void PublicKeyCredentialCreationOptionsJSON_set_extensions(PublicKeyCredentialCreationOptionsJSON* self, AuthenticationExtensionsClientInputsJSON * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("extensions"), em_Val_from(value));
}


PublicKeyCredentialCreationOptionsJSON PublicKeyCredentialCreationOptionsJSON_new() {
    em_Val obj = em_Val_object();
    return PublicKeyCredentialCreationOptionsJSON_from_val(&obj);
}

