#include <webbind/PaymentRequestUpdateEvent.h>
#include <webbind/PaymentRequest.h>


DEFINE_EMLITE_TYPE(PaymentRequestUpdateEvent, Event);


PaymentRequestUpdateEvent PaymentRequestUpdateEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("PaymentRequestUpdateEvent") , em_Val_from(type));
        return PaymentRequestUpdateEvent_from_val(&vv);
      }


PaymentRequestUpdateEvent PaymentRequestUpdateEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PaymentRequestUpdateEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PaymentRequestUpdateEvent_from_val(&vv);
      }


jb_Undefined PaymentRequestUpdateEvent_updateWith(PaymentRequestUpdateEvent* self , jb_Promise * detailsPromise) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "updateWith", em_Val_from(detailsPromise)));
}

