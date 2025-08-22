#include <webcbind/AuthenticationExtensionsPaymentOutputs.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsPaymentOutputs, em_Val);


BrowserBoundSignature AuthenticationExtensionsPaymentOutputs_browserBoundSignature(const AuthenticationExtensionsPaymentOutputs *self) {
    return em_Val_as(BrowserBoundSignature, em_Val_get(em_Val_as_val(self->inner), em_Val_from("browserBoundSignature")));
}


void AuthenticationExtensionsPaymentOutputs_set_browserBoundSignature(AuthenticationExtensionsPaymentOutputs* self, BrowserBoundSignature * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("browserBoundSignature"), em_Val_from(value));
}


AuthenticationExtensionsPaymentOutputs AuthenticationExtensionsPaymentOutputs_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsPaymentOutputs_from_val(&obj);
}

