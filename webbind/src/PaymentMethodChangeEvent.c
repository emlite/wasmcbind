#include <webbind/PaymentMethodChangeEvent.h>


DEFINE_EMLITE_TYPE(PaymentMethodChangeEvent, PaymentRequestUpdateEvent);


PaymentMethodChangeEvent PaymentMethodChangeEvent_new(const jb_DOMString* type) : PaymentRequestUpdateEvent(em_Val_global("PaymentMethodChangeEvent").new_(em_Val_from(type))) {
        return PaymentMethodChangeEvent(em_Val_new(em_Val_global("PaymentMethodChangeEvent", em_Val_from(type)));
      }


PaymentMethodChangeEvent PaymentMethodChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : PaymentRequestUpdateEvent(em_Val_global("PaymentMethodChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PaymentMethodChangeEvent(em_Val_new(em_Val_global("PaymentMethodChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_DOMString PaymentMethodChangeEvent_methodName(const PaymentMethodChangeEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(PaymentRequestUpdateEvent_as_val(self->inner), "methodName"));
}


jb_Object PaymentMethodChangeEvent_methodDetails(const PaymentMethodChangeEvent *self) {
    return em_Val_as(jb_Object, em_Val_get(PaymentRequestUpdateEvent_as_val(self->inner), "methodDetails"));
}

