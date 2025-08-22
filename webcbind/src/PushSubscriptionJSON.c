#include <webcbind/PushSubscriptionJSON.h>

DEFINE_EMLITE_TYPE(PushSubscriptionJSON, em_Val);


jb_String PushSubscriptionJSON_endpoint(const PushSubscriptionJSON *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endpoint")));
}


void PushSubscriptionJSON_set_endpoint(PushSubscriptionJSON* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("endpoint"), em_Val_from(value));
}


jb_Any PushSubscriptionJSON_expirationTime(const PushSubscriptionJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expirationTime")));
}


void PushSubscriptionJSON_set_expirationTime(PushSubscriptionJSON* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expirationTime"), em_Val_from(value));
}


jb_Object PushSubscriptionJSON_keys(const PushSubscriptionJSON *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keys")));
}


void PushSubscriptionJSON_set_keys(PushSubscriptionJSON* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keys"), em_Val_from(value));
}


PushSubscriptionJSON PushSubscriptionJSON_new() {
    em_Val obj = em_Val_object();
    return PushSubscriptionJSON_from_val(&obj);
}

