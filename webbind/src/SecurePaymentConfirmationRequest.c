#include <webbind/SecurePaymentConfirmationRequest.h>

DEFINE_EMLITE_TYPE(SecurePaymentConfirmationRequest, em_Val);


jb_Any SecurePaymentConfirmationRequest_challenge(const SecurePaymentConfirmationRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("challenge")));
}


void SecurePaymentConfirmationRequest_set_challenge(SecurePaymentConfirmationRequest* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("challenge"), em_Val_from(value));
}


jb_String SecurePaymentConfirmationRequest_rpId(const SecurePaymentConfirmationRequest *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void SecurePaymentConfirmationRequest_set_rpId(SecurePaymentConfirmationRequest* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_Array SecurePaymentConfirmationRequest_credentialIds(const SecurePaymentConfirmationRequest *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("credentialIds")));
}


void SecurePaymentConfirmationRequest_set_credentialIds(SecurePaymentConfirmationRequest* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("credentialIds"), em_Val_from(value));
}


PaymentCredentialInstrument SecurePaymentConfirmationRequest_instrument(const SecurePaymentConfirmationRequest *self) {
    return em_Val_as(PaymentCredentialInstrument, em_Val_get(em_Val_as_val(self->inner), em_Val_from("instrument")));
}


void SecurePaymentConfirmationRequest_set_instrument(SecurePaymentConfirmationRequest* self, PaymentCredentialInstrument * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("instrument"), em_Val_from(value));
}


unsigned long SecurePaymentConfirmationRequest_timeout(const SecurePaymentConfirmationRequest *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeout")));
}


void SecurePaymentConfirmationRequest_set_timeout(SecurePaymentConfirmationRequest* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


jb_String SecurePaymentConfirmationRequest_payeeName(const SecurePaymentConfirmationRequest *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payeeName")));
}


void SecurePaymentConfirmationRequest_set_payeeName(SecurePaymentConfirmationRequest* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payeeName"), em_Val_from(value));
}


jb_String SecurePaymentConfirmationRequest_payeeOrigin(const SecurePaymentConfirmationRequest *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payeeOrigin")));
}


void SecurePaymentConfirmationRequest_set_payeeOrigin(SecurePaymentConfirmationRequest* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payeeOrigin"), em_Val_from(value));
}


jb_Array SecurePaymentConfirmationRequest_paymentEntitiesLogos(const SecurePaymentConfirmationRequest *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("paymentEntitiesLogos")));
}


void SecurePaymentConfirmationRequest_set_paymentEntitiesLogos(SecurePaymentConfirmationRequest* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("paymentEntitiesLogos"), em_Val_from(value));
}


AuthenticationExtensionsClientInputs SecurePaymentConfirmationRequest_extensions(const SecurePaymentConfirmationRequest *self) {
    return em_Val_as(AuthenticationExtensionsClientInputs, em_Val_get(em_Val_as_val(self->inner), em_Val_from("extensions")));
}


void SecurePaymentConfirmationRequest_set_extensions(SecurePaymentConfirmationRequest* self, AuthenticationExtensionsClientInputs * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("extensions"), em_Val_from(value));
}


jb_Array SecurePaymentConfirmationRequest_browserBoundPubKeyCredParams(const SecurePaymentConfirmationRequest *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("browserBoundPubKeyCredParams")));
}


void SecurePaymentConfirmationRequest_set_browserBoundPubKeyCredParams(SecurePaymentConfirmationRequest* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("browserBoundPubKeyCredParams"), em_Val_from(value));
}


jb_Array SecurePaymentConfirmationRequest_locale(const SecurePaymentConfirmationRequest *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("locale")));
}


void SecurePaymentConfirmationRequest_set_locale(SecurePaymentConfirmationRequest* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("locale"), em_Val_from(value));
}


bool SecurePaymentConfirmationRequest_showOptOut(const SecurePaymentConfirmationRequest *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("showOptOut")));
}


void SecurePaymentConfirmationRequest_set_showOptOut(SecurePaymentConfirmationRequest* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("showOptOut"), em_Val_from(value));
}


SecurePaymentConfirmationRequest SecurePaymentConfirmationRequest_new() {
    em_Val obj = em_Val_object();
    return SecurePaymentConfirmationRequest_from_val(&obj);
}

