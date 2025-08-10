#include <webbind/AuthenticatorAttestationResponseJSON.h>

DEFINE_EMLITE_TYPE(AuthenticatorAttestationResponseJSON, em_Val);


jb_Any AuthenticatorAttestationResponseJSON_clientDataJSON(const AuthenticatorAttestationResponseJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clientDataJSON")));
}


void AuthenticatorAttestationResponseJSON_set_clientDataJSON(AuthenticatorAttestationResponseJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clientDataJSON"), em_Val_from(value));
}


jb_Any AuthenticatorAttestationResponseJSON_authenticatorData(const AuthenticatorAttestationResponseJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("authenticatorData")));
}


void AuthenticatorAttestationResponseJSON_set_authenticatorData(AuthenticatorAttestationResponseJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("authenticatorData"), em_Val_from(value));
}


jb_Array AuthenticatorAttestationResponseJSON_transports(const AuthenticatorAttestationResponseJSON *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transports")));
}


void AuthenticatorAttestationResponseJSON_set_transports(AuthenticatorAttestationResponseJSON* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transports"), em_Val_from(value));
}


jb_Any AuthenticatorAttestationResponseJSON_publicKey(const AuthenticatorAttestationResponseJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("publicKey")));
}


void AuthenticatorAttestationResponseJSON_set_publicKey(AuthenticatorAttestationResponseJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("publicKey"), em_Val_from(value));
}


jb_Any AuthenticatorAttestationResponseJSON_publicKeyAlgorithm(const AuthenticatorAttestationResponseJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("publicKeyAlgorithm")));
}


void AuthenticatorAttestationResponseJSON_set_publicKeyAlgorithm(AuthenticatorAttestationResponseJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("publicKeyAlgorithm"), em_Val_from(value));
}


jb_Any AuthenticatorAttestationResponseJSON_attestationObject(const AuthenticatorAttestationResponseJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attestationObject")));
}


void AuthenticatorAttestationResponseJSON_set_attestationObject(AuthenticatorAttestationResponseJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attestationObject"), em_Val_from(value));
}


AuthenticatorAttestationResponseJSON AuthenticatorAttestationResponseJSON_new() {
    em_Val obj = em_Val_object();
    return AuthenticatorAttestationResponseJSON_from_val(&obj);
}

