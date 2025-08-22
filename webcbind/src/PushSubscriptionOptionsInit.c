#include <webcbind/PushSubscriptionOptionsInit.h>

DEFINE_EMLITE_TYPE(PushSubscriptionOptionsInit, em_Val);


bool PushSubscriptionOptionsInit_userVisibleOnly(const PushSubscriptionOptionsInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userVisibleOnly")));
}


void PushSubscriptionOptionsInit_set_userVisibleOnly(PushSubscriptionOptionsInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("userVisibleOnly"), em_Val_from(value));
}


jb_Any PushSubscriptionOptionsInit_applicationServerKey(const PushSubscriptionOptionsInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("applicationServerKey")));
}


void PushSubscriptionOptionsInit_set_applicationServerKey(PushSubscriptionOptionsInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("applicationServerKey"), em_Val_from(value));
}


PushSubscriptionOptionsInit PushSubscriptionOptionsInit_new() {
    em_Val obj = em_Val_object();
    return PushSubscriptionOptionsInit_from_val(&obj);
}

