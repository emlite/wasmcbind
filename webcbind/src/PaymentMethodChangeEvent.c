#include <webcbind/PaymentMethodChangeEvent.h>

#include <webcbind/PaymentMethodChangeEventInit.h>

DEFINE_EMLITE_TYPE(PaymentMethodChangeEvent, PaymentRequestUpdateEvent);


PaymentMethodChangeEvent PaymentMethodChangeEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("PaymentMethodChangeEvent") , em_Val_from(type));
        return PaymentMethodChangeEvent_from_val(&vv);
      }


PaymentMethodChangeEvent PaymentMethodChangeEvent_new1(jb_String * type, PaymentMethodChangeEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PaymentMethodChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PaymentMethodChangeEvent_from_val(&vv);
      }


jb_String PaymentMethodChangeEvent_methodName(const PaymentMethodChangeEvent *self) {
    return em_Val_as(jb_String, em_Val_get(PaymentRequestUpdateEvent_as_val(self->inner), em_Val_from("methodName")));
}


jb_Object PaymentMethodChangeEvent_methodDetails(const PaymentMethodChangeEvent *self) {
    return em_Val_as(jb_Object, em_Val_get(PaymentRequestUpdateEvent_as_val(self->inner), em_Val_from("methodDetails")));
}

