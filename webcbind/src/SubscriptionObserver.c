#include <webcbind/SubscriptionObserver.h>

DEFINE_EMLITE_TYPE(SubscriptionObserver, em_Val);


jb_Function SubscriptionObserver_next(const SubscriptionObserver *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("next")));
}


void SubscriptionObserver_set_next(SubscriptionObserver* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("next"), em_Val_from(value));
}


jb_Function SubscriptionObserver_error(const SubscriptionObserver *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void SubscriptionObserver_set_error(SubscriptionObserver* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


jb_Function SubscriptionObserver_complete(const SubscriptionObserver *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("complete")));
}


void SubscriptionObserver_set_complete(SubscriptionObserver* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("complete"), em_Val_from(value));
}


SubscriptionObserver SubscriptionObserver_new() {
    em_Val obj = em_Val_object();
    return SubscriptionObserver_from_val(&obj);
}

