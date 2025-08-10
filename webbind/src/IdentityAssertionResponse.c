#include <webbind/IdentityAssertionResponse.h>

DEFINE_EMLITE_TYPE(IdentityAssertionResponse, em_Val);


jb_String IdentityAssertionResponse_token(const IdentityAssertionResponse *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("token")));
}


void IdentityAssertionResponse_set_token(IdentityAssertionResponse* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("token"), em_Val_from(value));
}


jb_String IdentityAssertionResponse_continue_on(const IdentityAssertionResponse *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("continue_on")));
}


void IdentityAssertionResponse_set_continue_on(IdentityAssertionResponse* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("continue_on"), em_Val_from(value));
}


IdentityCredentialErrorInit IdentityAssertionResponse_error(const IdentityAssertionResponse *self) {
    return em_Val_as(IdentityCredentialErrorInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void IdentityAssertionResponse_set_error(IdentityAssertionResponse* self, IdentityCredentialErrorInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


IdentityAssertionResponse IdentityAssertionResponse_new() {
    em_Val obj = em_Val_object();
    return IdentityAssertionResponse_from_val(&obj);
}

