#include <webcbind/PaymentDetailsUpdate.h>

DEFINE_EMLITE_TYPE(PaymentDetailsUpdate, PaymentDetailsBase);


jb_String PaymentDetailsUpdate_error(const PaymentDetailsUpdate *self) {
    return em_Val_as(jb_String, em_Val_get(PaymentDetailsBase_as_val(self->inner), em_Val_from("error")));
}


void PaymentDetailsUpdate_set_error(PaymentDetailsUpdate* self, jb_String * value) {
    em_Val_set(PaymentDetailsBase_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


PaymentItem PaymentDetailsUpdate_total(const PaymentDetailsUpdate *self) {
    return em_Val_as(PaymentItem, em_Val_get(PaymentDetailsBase_as_val(self->inner), em_Val_from("total")));
}


void PaymentDetailsUpdate_set_total(PaymentDetailsUpdate* self, PaymentItem * value) {
    em_Val_set(PaymentDetailsBase_as_val(self->inner), em_Val_from("total"), em_Val_from(value));
}


AddressErrors PaymentDetailsUpdate_shippingAddressErrors(const PaymentDetailsUpdate *self) {
    return em_Val_as(AddressErrors, em_Val_get(PaymentDetailsBase_as_val(self->inner), em_Val_from("shippingAddressErrors")));
}


void PaymentDetailsUpdate_set_shippingAddressErrors(PaymentDetailsUpdate* self, AddressErrors * value) {
    em_Val_set(PaymentDetailsBase_as_val(self->inner), em_Val_from("shippingAddressErrors"), em_Val_from(value));
}


PayerErrors PaymentDetailsUpdate_payerErrors(const PaymentDetailsUpdate *self) {
    return em_Val_as(PayerErrors, em_Val_get(PaymentDetailsBase_as_val(self->inner), em_Val_from("payerErrors")));
}


void PaymentDetailsUpdate_set_payerErrors(PaymentDetailsUpdate* self, PayerErrors * value) {
    em_Val_set(PaymentDetailsBase_as_val(self->inner), em_Val_from("payerErrors"), em_Val_from(value));
}


jb_Object PaymentDetailsUpdate_paymentMethodErrors(const PaymentDetailsUpdate *self) {
    return em_Val_as(jb_Object, em_Val_get(PaymentDetailsBase_as_val(self->inner), em_Val_from("paymentMethodErrors")));
}


void PaymentDetailsUpdate_set_paymentMethodErrors(PaymentDetailsUpdate* self, jb_Object * value) {
    em_Val_set(PaymentDetailsBase_as_val(self->inner), em_Val_from("paymentMethodErrors"), em_Val_from(value));
}


PaymentDetailsUpdate PaymentDetailsUpdate_new() {
    em_Val obj = em_Val_object();
    return PaymentDetailsUpdate_from_val(&obj);
}

