#include <webcbind/PushManager.h>

#include <webcbind/PushSubscription.h>
#include <webcbind/PushSubscriptionOptionsInit.h>

DEFINE_EMLITE_TYPE(PushManager, em_Val);


jb_Array PushManager_supportedContentEncodings(const PushManager *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_global("pushmanager"), em_Val_from("supportedContentEncodings")));
}


jb_Promise PushManager_subscribe0(PushManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "subscribe"));
}


jb_Promise PushManager_subscribe1(PushManager* self , PushSubscriptionOptionsInit * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "subscribe", em_Val_from(options)));
}


jb_Promise PushManager_getSubscription(PushManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getSubscription"));
}


jb_Promise PushManager_permissionState0(PushManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "permissionState"));
}


jb_Promise PushManager_permissionState1(PushManager* self , PushSubscriptionOptionsInit * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "permissionState", em_Val_from(options)));
}

