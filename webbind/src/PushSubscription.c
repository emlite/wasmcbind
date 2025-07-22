#include <webbind/PushSubscription.h>
#include <webbind/PushSubscriptionOptions.h>


DEFINE_EMLITE_TYPE(PushSubscriptionJSON, em_Val);


jb_USVString PushSubscriptionJSON_endpoint(const PushSubscriptionJSON *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "endpoint"));
}


void PushSubscriptionJSON_set_endpoint(PushSubscriptionJSON* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "endpoint", value);
}


jb_Any PushSubscriptionJSON_expirationTime(const PushSubscriptionJSON *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "expirationTime"));
}


void PushSubscriptionJSON_set_expirationTime(PushSubscriptionJSON* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "expirationTime", value);
}


jb_Record PushSubscriptionJSON_keys(const PushSubscriptionJSON *self) {
    return em_Val_as(jb_Record, em_Val_get(em_Val_as_val(self->inner), "keys"));
}


void PushSubscriptionJSON_set_keys(PushSubscriptionJSON* self, const jb_Record* value) {
    em_Val_set(em_Val_as_val(self->inner), "keys", value);
}

DEFINE_EMLITE_TYPE(PushSubscription, em_Val);


jb_USVString PushSubscription_endpoint(const PushSubscription *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "endpoint"));
}


jb_Any PushSubscription_expirationTime(const PushSubscription *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "expirationTime"));
}


PushSubscriptionOptions PushSubscription_options(const PushSubscription *self) {
    return em_Val_as(PushSubscriptionOptions, em_Val_get(em_Val_as_val(self->inner), "options"));
}


jb_ArrayBuffer PushSubscription_getKey(PushSubscription* self , const PushEncryptionKeyName* name) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "getKey", em_Val_from(name)));
}


jb_Promise PushSubscription_unsubscribe(PushSubscription* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "unsubscribe"));
}


PushSubscriptionJSON PushSubscription_toJSON(PushSubscription* self ) {
    return em_Val_as(PushSubscriptionJSON, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

