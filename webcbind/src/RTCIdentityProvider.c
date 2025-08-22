#include <webcbind/RTCIdentityProvider.h>

DEFINE_EMLITE_TYPE(RTCIdentityProvider, em_Val);


jb_Function RTCIdentityProvider_generateAssertion(const RTCIdentityProvider *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("generateAssertion")));
}


void RTCIdentityProvider_set_generateAssertion(RTCIdentityProvider* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("generateAssertion"), em_Val_from(value));
}


jb_Function RTCIdentityProvider_validateAssertion(const RTCIdentityProvider *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("validateAssertion")));
}


void RTCIdentityProvider_set_validateAssertion(RTCIdentityProvider* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("validateAssertion"), em_Val_from(value));
}


RTCIdentityProvider RTCIdentityProvider_new() {
    em_Val obj = em_Val_object();
    return RTCIdentityProvider_from_val(&obj);
}

