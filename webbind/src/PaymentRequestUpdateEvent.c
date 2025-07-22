#include <webbind/PaymentRequestUpdateEvent.h>
#include <webbind/PaymentRequest.h>


DEFINE_EMLITE_TYPE(PaymentRequestUpdateEvent, Event);


PaymentRequestUpdateEvent PaymentRequestUpdateEvent_new(const jb_DOMString* type) : Event(em_Val_global("PaymentRequestUpdateEvent").new_(em_Val_from(type))) {
        return PaymentRequestUpdateEvent(em_Val_new(em_Val_global("PaymentRequestUpdateEvent", em_Val_from(type)));
      }


PaymentRequestUpdateEvent PaymentRequestUpdateEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("PaymentRequestUpdateEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PaymentRequestUpdateEvent(em_Val_new(em_Val_global("PaymentRequestUpdateEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Undefined PaymentRequestUpdateEvent_updateWith(PaymentRequestUpdateEvent* self , const jb_Promise* detailsPromise) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "updateWith", em_Val_from(detailsPromise)));
}

