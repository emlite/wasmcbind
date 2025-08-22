#include <webcbind/PublicKeyCredentialCreationOptions.h>

DEFINE_EMLITE_TYPE(PublicKeyCredentialCreationOptions, em_Val);


PublicKeyCredentialRpEntity PublicKeyCredentialCreationOptions_rp(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(PublicKeyCredentialRpEntity, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rp")));
}


void PublicKeyCredentialCreationOptions_set_rp(PublicKeyCredentialCreationOptions* self, PublicKeyCredentialRpEntity * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rp"), em_Val_from(value));
}


PublicKeyCredentialUserEntity PublicKeyCredentialCreationOptions_user(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(PublicKeyCredentialUserEntity, em_Val_get(em_Val_as_val(self->inner), em_Val_from("user")));
}


void PublicKeyCredentialCreationOptions_set_user(PublicKeyCredentialCreationOptions* self, PublicKeyCredentialUserEntity * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("user"), em_Val_from(value));
}


jb_Any PublicKeyCredentialCreationOptions_challenge(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("challenge")));
}


void PublicKeyCredentialCreationOptions_set_challenge(PublicKeyCredentialCreationOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("challenge"), em_Val_from(value));
}


jb_Array PublicKeyCredentialCreationOptions_pubKeyCredParams(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pubKeyCredParams")));
}


void PublicKeyCredentialCreationOptions_set_pubKeyCredParams(PublicKeyCredentialCreationOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pubKeyCredParams"), em_Val_from(value));
}


unsigned long PublicKeyCredentialCreationOptions_timeout(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void PublicKeyCredentialCreationOptions_set_timeout(PublicKeyCredentialCreationOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


jb_Array PublicKeyCredentialCreationOptions_excludeCredentials(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("excludeCredentials")));
}


void PublicKeyCredentialCreationOptions_set_excludeCredentials(PublicKeyCredentialCreationOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("excludeCredentials"), em_Val_from(value));
}


AuthenticatorSelectionCriteria PublicKeyCredentialCreationOptions_authenticatorSelection(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(AuthenticatorSelectionCriteria, em_Val_get(em_Val_as_val(self->inner), em_Val_from("authenticatorSelection")));
}


void PublicKeyCredentialCreationOptions_set_authenticatorSelection(PublicKeyCredentialCreationOptions* self, AuthenticatorSelectionCriteria * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("authenticatorSelection"), em_Val_from(value));
}


jb_Array PublicKeyCredentialCreationOptions_hints(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hints")));
}


void PublicKeyCredentialCreationOptions_set_hints(PublicKeyCredentialCreationOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hints"), em_Val_from(value));
}


jb_String PublicKeyCredentialCreationOptions_attestation(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attestation")));
}


void PublicKeyCredentialCreationOptions_set_attestation(PublicKeyCredentialCreationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attestation"), em_Val_from(value));
}


jb_Array PublicKeyCredentialCreationOptions_attestationFormats(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attestationFormats")));
}


void PublicKeyCredentialCreationOptions_set_attestationFormats(PublicKeyCredentialCreationOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attestationFormats"), em_Val_from(value));
}


AuthenticationExtensionsClientInputs PublicKeyCredentialCreationOptions_extensions(const PublicKeyCredentialCreationOptions *self) {
    return em_Val_as(AuthenticationExtensionsClientInputs, em_Val_get(em_Val_as_val(self->inner), em_Val_from("extensions")));
}


void PublicKeyCredentialCreationOptions_set_extensions(PublicKeyCredentialCreationOptions* self, AuthenticationExtensionsClientInputs * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("extensions"), em_Val_from(value));
}


PublicKeyCredentialCreationOptions PublicKeyCredentialCreationOptions_new() {
    em_Val obj = em_Val_object();
    return PublicKeyCredentialCreationOptions_from_val(&obj);
}

