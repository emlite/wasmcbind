#include <webbind/CanMakePaymentEvent.h>


DEFINE_EMLITE_TYPE(CanMakePaymentEvent, ExtendableEvent);


CanMakePaymentEvent CanMakePaymentEvent_new(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("CanMakePaymentEvent") , em_Val_from(type));
        return CanMakePaymentEvent_from_val(&vv);
      }


jb_Undefined CanMakePaymentEvent_respondWith(CanMakePaymentEvent* self , jb_Promise * canMakePaymentResponse) {
    return em_Val_as(jb_Undefined, em_Val_call(ExtendableEvent_as_val(self->inner), "respondWith", em_Val_from(canMakePaymentResponse)));
}

