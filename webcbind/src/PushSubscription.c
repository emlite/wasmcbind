#include <webcbind/PushSubscription.h>

#include <webcbind/PushSubscriptionOptions.h>
#include <webcbind/PushSubscriptionJSON.h>

DEFINE_EMLITE_TYPE(PushSubscription, em_Val);


jb_String PushSubscription_endpoint(const PushSubscription *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endpoint")));
}


jb_Any PushSubscription_expirationTime(const PushSubscription *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expirationTime")));
}


PushSubscriptionOptions PushSubscription_options(const PushSubscription *self) {
    return em_Val_as(PushSubscriptionOptions, em_Val_get(em_Val_as_val(self->inner), em_Val_from("options")));
}


jb_ArrayBuffer PushSubscription_getKey(PushSubscription* self , PushEncryptionKeyName * name) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "getKey", em_Val_from(name)));
}


jb_Promise PushSubscription_unsubscribe(PushSubscription* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "unsubscribe"));
}


PushSubscriptionJSON PushSubscription_toJSON(PushSubscription* self ) {
    return em_Val_as(PushSubscriptionJSON, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

