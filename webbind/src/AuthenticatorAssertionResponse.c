#include <webbind/AuthenticatorAssertionResponse.h>


DEFINE_EMLITE_TYPE(AuthenticatorAssertionResponse, AuthenticatorResponse);


jb_ArrayBuffer AuthenticatorAssertionResponse_authenticatorData(const AuthenticatorAssertionResponse *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(AuthenticatorResponse_as_val(self->inner), "authenticatorData"));
}


jb_ArrayBuffer AuthenticatorAssertionResponse_signature(const AuthenticatorAssertionResponse *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(AuthenticatorResponse_as_val(self->inner), "signature"));
}


jb_ArrayBuffer AuthenticatorAssertionResponse_userHandle(const AuthenticatorAssertionResponse *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(AuthenticatorResponse_as_val(self->inner), "userHandle"));
}

