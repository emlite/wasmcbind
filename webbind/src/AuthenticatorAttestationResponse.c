#include <webbind/AuthenticatorAttestationResponse.h>


DEFINE_EMLITE_TYPE(AuthenticatorAttestationResponse, AuthenticatorResponse);


jb_ArrayBuffer AuthenticatorAttestationResponse_attestationObject(const AuthenticatorAttestationResponse *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(AuthenticatorResponse_as_val(self->inner), em_Val_from("attestationObject")));
}


jb_Array AuthenticatorAttestationResponse_getTransports(AuthenticatorAttestationResponse* self ) {
    return em_Val_as(jb_Array, em_Val_call(AuthenticatorResponse_as_val(self->inner), "getTransports"));
}


jb_ArrayBuffer AuthenticatorAttestationResponse_getAuthenticatorData(AuthenticatorAttestationResponse* self ) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(AuthenticatorResponse_as_val(self->inner), "getAuthenticatorData"));
}


jb_ArrayBuffer AuthenticatorAttestationResponse_getPublicKey(AuthenticatorAttestationResponse* self ) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(AuthenticatorResponse_as_val(self->inner), "getPublicKey"));
}


jb_Any AuthenticatorAttestationResponse_getPublicKeyAlgorithm(AuthenticatorAttestationResponse* self ) {
    return em_Val_as(jb_Any, em_Val_call(AuthenticatorResponse_as_val(self->inner), "getPublicKeyAlgorithm"));
}

