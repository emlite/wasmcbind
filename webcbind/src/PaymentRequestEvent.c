#include <webcbind/PaymentRequestEvent.h>

#include <webcbind/PaymentRequestEventInit.h>
#include <webcbind/PaymentMethodData.h>
#include <webcbind/PaymentDetailsModifier.h>
#include <webcbind/PaymentShippingOption.h>
#include <webcbind/WindowClient.h>
#include <webcbind/PaymentRequestDetailsUpdate.h>
#include <webcbind/AddressInit.h>
#include <webcbind/PaymentHandlerResponse.h>

DEFINE_EMLITE_TYPE(PaymentRequestEvent, ExtendableEvent);


PaymentRequestEvent PaymentRequestEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("PaymentRequestEvent") , em_Val_from(type));
        return PaymentRequestEvent_from_val(&vv);
      }


PaymentRequestEvent PaymentRequestEvent_new1(jb_String * type, PaymentRequestEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PaymentRequestEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PaymentRequestEvent_from_val(&vv);
      }


jb_String PaymentRequestEvent_topOrigin(const PaymentRequestEvent *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("topOrigin")));
}


jb_String PaymentRequestEvent_paymentRequestOrigin(const PaymentRequestEvent *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("paymentRequestOrigin")));
}


jb_String PaymentRequestEvent_paymentRequestId(const PaymentRequestEvent *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("paymentRequestId")));
}


jb_Array PaymentRequestEvent_methodData(const PaymentRequestEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("methodData")));
}


jb_Object PaymentRequestEvent_total(const PaymentRequestEvent *self) {
    return em_Val_as(jb_Object, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("total")));
}


jb_Array PaymentRequestEvent_modifiers(const PaymentRequestEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("modifiers")));
}


jb_Object PaymentRequestEvent_paymentOptions(const PaymentRequestEvent *self) {
    return em_Val_as(jb_Object, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("paymentOptions")));
}


jb_Array PaymentRequestEvent_shippingOptions(const PaymentRequestEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("shippingOptions")));
}


jb_Promise PaymentRequestEvent_openWindow(PaymentRequestEvent* self , jb_String * url) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "openWindow", em_Val_from(url)));
}


jb_Promise PaymentRequestEvent_changePaymentMethod0(PaymentRequestEvent* self , jb_String * methodName) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changePaymentMethod", em_Val_from(methodName)));
}


jb_Promise PaymentRequestEvent_changePaymentMethod1(PaymentRequestEvent* self , jb_String * methodName, jb_Object * methodDetails) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changePaymentMethod", em_Val_from(methodName), em_Val_from(methodDetails)));
}


jb_Promise PaymentRequestEvent_changeShippingAddress0(PaymentRequestEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changeShippingAddress"));
}


jb_Promise PaymentRequestEvent_changeShippingAddress1(PaymentRequestEvent* self , AddressInit * shippingAddress) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changeShippingAddress", em_Val_from(shippingAddress)));
}


jb_Promise PaymentRequestEvent_changeShippingOption(PaymentRequestEvent* self , jb_String * shippingOption) {
    return em_Val_as(jb_Promise, em_Val_call(ExtendableEvent_as_val(self->inner), "changeShippingOption", em_Val_from(shippingOption)));
}


jb_Undefined PaymentRequestEvent_respondWith(PaymentRequestEvent* self , jb_Promise * handlerResponsePromise) {
    return em_Val_as(jb_Undefined, em_Val_call(ExtendableEvent_as_val(self->inner), "respondWith", em_Val_from(handlerResponsePromise)));
}

