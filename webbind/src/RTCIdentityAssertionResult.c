#include <webbind/RTCIdentityAssertionResult.h>

DEFINE_EMLITE_TYPE(RTCIdentityAssertionResult, em_Val);


RTCIdentityProviderDetails RTCIdentityAssertionResult_idp(const RTCIdentityAssertionResult *self) {
    return em_Val_as(RTCIdentityProviderDetails, em_Val_get(em_Val_as_val(self->inner), em_Val_from("idp")));
}


void RTCIdentityAssertionResult_set_idp(RTCIdentityAssertionResult* self, RTCIdentityProviderDetails * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("idp"), em_Val_from(value));
}


jb_String RTCIdentityAssertionResult_assertion(const RTCIdentityAssertionResult *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("assertion")));
}


void RTCIdentityAssertionResult_set_assertion(RTCIdentityAssertionResult* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("assertion"), em_Val_from(value));
}


RTCIdentityAssertionResult RTCIdentityAssertionResult_new() {
    em_Val obj = em_Val_object();
    return RTCIdentityAssertionResult_from_val(&obj);
}

