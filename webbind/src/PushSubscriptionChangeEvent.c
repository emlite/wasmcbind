#include <webbind/PushSubscriptionChangeEvent.h>
#include <webbind/PushSubscription.h>


DEFINE_EMLITE_TYPE(PushSubscriptionChangeEvent, ExtendableEvent);


PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("PushSubscriptionChangeEvent") , em_Val_from(type));
        return PushSubscriptionChangeEvent_from_val(&vv);
      }


PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PushSubscriptionChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PushSubscriptionChangeEvent_from_val(&vv);
      }


PushSubscription PushSubscriptionChangeEvent_newSubscription(const PushSubscriptionChangeEvent *self) {
    return em_Val_as(PushSubscription, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("newSubscription")));
}


PushSubscription PushSubscriptionChangeEvent_oldSubscription(const PushSubscriptionChangeEvent *self) {
    return em_Val_as(PushSubscription, em_Val_get(ExtendableEvent_as_val(self->inner), em_Val_from("oldSubscription")));
}

