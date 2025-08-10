#include <webbind/AuthenticationExtensionsPaymentInputs.h>

DEFINE_EMLITE_TYPE(AuthenticationExtensionsPaymentInputs, em_Val);


bool AuthenticationExtensionsPaymentInputs_isPayment(const AuthenticationExtensionsPaymentInputs *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isPayment")));
}


void AuthenticationExtensionsPaymentInputs_set_isPayment(AuthenticationExtensionsPaymentInputs* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("isPayment"), em_Val_from(value));
}


jb_Array AuthenticationExtensionsPaymentInputs_browserBoundPubKeyCredParams(const AuthenticationExtensionsPaymentInputs *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("browserBoundPubKeyCredParams")));
}


void AuthenticationExtensionsPaymentInputs_set_browserBoundPubKeyCredParams(AuthenticationExtensionsPaymentInputs* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("browserBoundPubKeyCredParams"), em_Val_from(value));
}


jb_String AuthenticationExtensionsPaymentInputs_rpId(const AuthenticationExtensionsPaymentInputs *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void AuthenticationExtensionsPaymentInputs_set_rpId(AuthenticationExtensionsPaymentInputs* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_String AuthenticationExtensionsPaymentInputs_topOrigin(const AuthenticationExtensionsPaymentInputs *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("topOrigin")));
}


void AuthenticationExtensionsPaymentInputs_set_topOrigin(AuthenticationExtensionsPaymentInputs* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("topOrigin"), em_Val_from(value));
}


jb_String AuthenticationExtensionsPaymentInputs_payeeName(const AuthenticationExtensionsPaymentInputs *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payeeName")));
}


void AuthenticationExtensionsPaymentInputs_set_payeeName(AuthenticationExtensionsPaymentInputs* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payeeName"), em_Val_from(value));
}


jb_String AuthenticationExtensionsPaymentInputs_payeeOrigin(const AuthenticationExtensionsPaymentInputs *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payeeOrigin")));
}


void AuthenticationExtensionsPaymentInputs_set_payeeOrigin(AuthenticationExtensionsPaymentInputs* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payeeOrigin"), em_Val_from(value));
}


jb_Array AuthenticationExtensionsPaymentInputs_paymentEntitiesLogos(const AuthenticationExtensionsPaymentInputs *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("paymentEntitiesLogos")));
}


void AuthenticationExtensionsPaymentInputs_set_paymentEntitiesLogos(AuthenticationExtensionsPaymentInputs* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("paymentEntitiesLogos"), em_Val_from(value));
}


PaymentCurrencyAmount AuthenticationExtensionsPaymentInputs_total(const AuthenticationExtensionsPaymentInputs *self) {
    return em_Val_as(PaymentCurrencyAmount, em_Val_get(em_Val_as_val(self->inner), em_Val_from("total")));
}


void AuthenticationExtensionsPaymentInputs_set_total(AuthenticationExtensionsPaymentInputs* self, PaymentCurrencyAmount * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("total"), em_Val_from(value));
}


PaymentCredentialInstrument AuthenticationExtensionsPaymentInputs_instrument(const AuthenticationExtensionsPaymentInputs *self) {
    return em_Val_as(PaymentCredentialInstrument, em_Val_get(em_Val_as_val(self->inner), em_Val_from("instrument")));
}


void AuthenticationExtensionsPaymentInputs_set_instrument(AuthenticationExtensionsPaymentInputs* self, PaymentCredentialInstrument * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("instrument"), em_Val_from(value));
}


AuthenticationExtensionsPaymentInputs AuthenticationExtensionsPaymentInputs_new() {
    em_Val obj = em_Val_object();
    return AuthenticationExtensionsPaymentInputs_from_val(&obj);
}

