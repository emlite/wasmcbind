#include <webbind/PushSubscriptionChangeEventInit.h>

#include <webbind/PushSubscription.h>

DEFINE_EMLITE_TYPE(PushSubscriptionChangeEventInit, ExtendableEventInit);


PushSubscription PushSubscriptionChangeEventInit_newSubscription(const PushSubscriptionChangeEventInit *self) {
    return em_Val_as(PushSubscription, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("newSubscription")));
}


void PushSubscriptionChangeEventInit_set_newSubscription(PushSubscriptionChangeEventInit* self, PushSubscription * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("newSubscription"), em_Val_from(value));
}


PushSubscription PushSubscriptionChangeEventInit_oldSubscription(const PushSubscriptionChangeEventInit *self) {
    return em_Val_as(PushSubscription, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("oldSubscription")));
}


void PushSubscriptionChangeEventInit_set_oldSubscription(PushSubscriptionChangeEventInit* self, PushSubscription * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("oldSubscription"), em_Val_from(value));
}


PushSubscriptionChangeEventInit PushSubscriptionChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return PushSubscriptionChangeEventInit_from_val(&obj);
}

