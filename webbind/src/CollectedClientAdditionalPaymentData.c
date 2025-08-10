#include <webbind/CollectedClientAdditionalPaymentData.h>

DEFINE_EMLITE_TYPE(CollectedClientAdditionalPaymentData, em_Val);


jb_String CollectedClientAdditionalPaymentData_rpId(const CollectedClientAdditionalPaymentData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rpId")));
}


void CollectedClientAdditionalPaymentData_set_rpId(CollectedClientAdditionalPaymentData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rpId"), em_Val_from(value));
}


jb_String CollectedClientAdditionalPaymentData_topOrigin(const CollectedClientAdditionalPaymentData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("topOrigin")));
}


void CollectedClientAdditionalPaymentData_set_topOrigin(CollectedClientAdditionalPaymentData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("topOrigin"), em_Val_from(value));
}


jb_String CollectedClientAdditionalPaymentData_payeeName(const CollectedClientAdditionalPaymentData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payeeName")));
}


void CollectedClientAdditionalPaymentData_set_payeeName(CollectedClientAdditionalPaymentData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payeeName"), em_Val_from(value));
}


jb_String CollectedClientAdditionalPaymentData_payeeOrigin(const CollectedClientAdditionalPaymentData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payeeOrigin")));
}


void CollectedClientAdditionalPaymentData_set_payeeOrigin(CollectedClientAdditionalPaymentData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payeeOrigin"), em_Val_from(value));
}


jb_Array CollectedClientAdditionalPaymentData_paymentEntitiesLogos(const CollectedClientAdditionalPaymentData *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("paymentEntitiesLogos")));
}


void CollectedClientAdditionalPaymentData_set_paymentEntitiesLogos(CollectedClientAdditionalPaymentData* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("paymentEntitiesLogos"), em_Val_from(value));
}


PaymentCurrencyAmount CollectedClientAdditionalPaymentData_total(const CollectedClientAdditionalPaymentData *self) {
    return em_Val_as(PaymentCurrencyAmount, em_Val_get(em_Val_as_val(self->inner), em_Val_from("total")));
}


void CollectedClientAdditionalPaymentData_set_total(CollectedClientAdditionalPaymentData* self, PaymentCurrencyAmount * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("total"), em_Val_from(value));
}


PaymentCredentialInstrument CollectedClientAdditionalPaymentData_instrument(const CollectedClientAdditionalPaymentData *self) {
    return em_Val_as(PaymentCredentialInstrument, em_Val_get(em_Val_as_val(self->inner), em_Val_from("instrument")));
}


void CollectedClientAdditionalPaymentData_set_instrument(CollectedClientAdditionalPaymentData* self, PaymentCredentialInstrument * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("instrument"), em_Val_from(value));
}


jb_String CollectedClientAdditionalPaymentData_browserBoundPublicKey(const CollectedClientAdditionalPaymentData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("browserBoundPublicKey")));
}


void CollectedClientAdditionalPaymentData_set_browserBoundPublicKey(CollectedClientAdditionalPaymentData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("browserBoundPublicKey"), em_Val_from(value));
}


CollectedClientAdditionalPaymentData CollectedClientAdditionalPaymentData_new() {
    em_Val obj = em_Val_object();
    return CollectedClientAdditionalPaymentData_from_val(&obj);
}

