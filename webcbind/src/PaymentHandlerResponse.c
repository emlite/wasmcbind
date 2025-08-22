#include <webcbind/PaymentHandlerResponse.h>

DEFINE_EMLITE_TYPE(PaymentHandlerResponse, em_Val);


jb_String PaymentHandlerResponse_methodName(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("methodName")));
}


void PaymentHandlerResponse_set_methodName(PaymentHandlerResponse* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("methodName"), em_Val_from(value));
}


jb_Object PaymentHandlerResponse_details(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("details")));
}


void PaymentHandlerResponse_set_details(PaymentHandlerResponse* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("details"), em_Val_from(value));
}


jb_String PaymentHandlerResponse_payerName(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payerName")));
}


void PaymentHandlerResponse_set_payerName(PaymentHandlerResponse* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payerName"), em_Val_from(value));
}


jb_String PaymentHandlerResponse_payerEmail(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payerEmail")));
}


void PaymentHandlerResponse_set_payerEmail(PaymentHandlerResponse* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payerEmail"), em_Val_from(value));
}


jb_String PaymentHandlerResponse_payerPhone(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payerPhone")));
}


void PaymentHandlerResponse_set_payerPhone(PaymentHandlerResponse* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payerPhone"), em_Val_from(value));
}


AddressInit PaymentHandlerResponse_shippingAddress(const PaymentHandlerResponse *self) {
    return em_Val_as(AddressInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shippingAddress")));
}


void PaymentHandlerResponse_set_shippingAddress(PaymentHandlerResponse* self, AddressInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shippingAddress"), em_Val_from(value));
}


jb_String PaymentHandlerResponse_shippingOption(const PaymentHandlerResponse *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shippingOption")));
}


void PaymentHandlerResponse_set_shippingOption(PaymentHandlerResponse* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shippingOption"), em_Val_from(value));
}


PaymentHandlerResponse PaymentHandlerResponse_new() {
    em_Val obj = em_Val_object();
    return PaymentHandlerResponse_from_val(&obj);
}

