#include <webbind/PublicKeyCredentialRequestOptions.h>

DEFINE_EMLITE_TYPE(PublicKeyCredentialRequestOptions, em_Val);


jb_Any PublicKeyCredentialRequestOptions_challenge(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("challenge")));
}


void PublicKeyCredentialRequestOptions_set_challenge(PublicKeyCredentialRequestOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("challenge"), em_Val_from(value));
}


unsigned long PublicKeyCredentialRequestOptions_timeout(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void PublicKeyCredentialRequestOptions_set_timeout(PublicKeyCredentialRequestOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


jb_String PublicKeyCredentialRequestOptions_rpId(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void PublicKeyCredentialRequestOptions_set_rpId(PublicKeyCredentialRequestOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_Array PublicKeyCredentialRequestOptions_allowCredentials(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowCredentials")));
}


void PublicKeyCredentialRequestOptions_set_allowCredentials(PublicKeyCredentialRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowCredentials"), em_Val_from(value));
}


jb_String PublicKeyCredentialRequestOptions_userVerification(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userVerification")));
}


void PublicKeyCredentialRequestOptions_set_userVerification(PublicKeyCredentialRequestOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userVerification"), em_Val_from(value));
}


jb_Array PublicKeyCredentialRequestOptions_hints(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hints")));
}


void PublicKeyCredentialRequestOptions_set_hints(PublicKeyCredentialRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hints"), em_Val_from(value));
}


AuthenticationExtensionsClientInputs PublicKeyCredentialRequestOptions_extensions(const PublicKeyCredentialRequestOptions *self) {
    return em_Val_as(AuthenticationExtensionsClientInputs, em_Val_get(em_Val_as_val(self->inner), em_Val_from("extensions")));
}


void PublicKeyCredentialRequestOptions_set_extensions(PublicKeyCredentialRequestOptions* self, AuthenticationExtensionsClientInputs * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("extensions"), em_Val_from(value));
}


PublicKeyCredentialRequestOptions PublicKeyCredentialRequestOptions_new() {
    em_Val obj = em_Val_object();
    return PublicKeyCredentialRequestOptions_from_val(&obj);
}

