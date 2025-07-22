#include <webbind/PushSubscriptionChangeEvent.h>
#include <webbind/PushSubscription.h>


DEFINE_EMLITE_TYPE(PushSubscriptionChangeEvent, ExtendableEvent);


PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new(const jb_DOMString* type) : ExtendableEvent(em_Val_global("PushSubscriptionChangeEvent").new_(em_Val_from(type))) {
        return PushSubscriptionChangeEvent(em_Val_new(em_Val_global("PushSubscriptionChangeEvent", em_Val_from(type)));
      }


PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : ExtendableEvent(em_Val_global("PushSubscriptionChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PushSubscriptionChangeEvent(em_Val_new(em_Val_global("PushSubscriptionChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


PushSubscription PushSubscriptionChangeEvent_newSubscription(const PushSubscriptionChangeEvent *self) {
    return em_Val_as(PushSubscription, em_Val_get(ExtendableEvent_as_val(self->inner), "newSubscription"));
}


PushSubscription PushSubscriptionChangeEvent_oldSubscription(const PushSubscriptionChangeEvent *self) {
    return em_Val_as(PushSubscription, em_Val_get(ExtendableEvent_as_val(self->inner), "oldSubscription"));
}

