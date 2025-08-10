#include <webbind/OTPCredentialRequestOptions.h>

DEFINE_EMLITE_TYPE(OTPCredentialRequestOptions, em_Val);


jb_Array OTPCredentialRequestOptions_transport(const OTPCredentialRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transport")));
}


void OTPCredentialRequestOptions_set_transport(OTPCredentialRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transport"), em_Val_from(value));
}


OTPCredentialRequestOptions OTPCredentialRequestOptions_new() {
    em_Val obj = em_Val_object();
    return OTPCredentialRequestOptions_from_val(&obj);
}

