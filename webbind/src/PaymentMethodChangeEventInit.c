#include <webbind/PaymentMethodChangeEventInit.h>

DEFINE_EMLITE_TYPE(PaymentMethodChangeEventInit, PaymentRequestUpdateEventInit);


jb_String PaymentMethodChangeEventInit_methodName(const PaymentMethodChangeEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(PaymentRequestUpdateEventInit_as_val(self->inner), em_Val_from("methodName")));
}


void PaymentMethodChangeEventInit_set_methodName(PaymentMethodChangeEventInit* self, jb_String * value) {
    em_Val_set(PaymentRequestUpdateEventInit_as_val(self->inner), em_Val_from("methodName"), em_Val_from(value));
}


jb_Object PaymentMethodChangeEventInit_methodDetails(const PaymentMethodChangeEventInit *self) {
    return em_Val_as(jb_Object, em_Val_get(PaymentRequestUpdateEventInit_as_val(self->inner), em_Val_from("methodDetails")));
}


void PaymentMethodChangeEventInit_set_methodDetails(PaymentMethodChangeEventInit* self, jb_Object * value) {
    em_Val_set(PaymentRequestUpdateEventInit_as_val(self->inner), em_Val_from("methodDetails"), em_Val_from(value));
}


PaymentMethodChangeEventInit PaymentMethodChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return PaymentMethodChangeEventInit_from_val(&obj);
}

