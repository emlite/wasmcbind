#include <webbind/PushManager.h>
#include <webbind/PushSubscription.h>


DEFINE_EMLITE_TYPE(PushSubscriptionOptionsInit, em_Val);


bool PushSubscriptionOptionsInit_userVisibleOnly(const PushSubscriptionOptionsInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "userVisibleOnly"));
}


void PushSubscriptionOptionsInit_set_userVisibleOnly(PushSubscriptionOptionsInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "userVisibleOnly", value);
}


jb_Any PushSubscriptionOptionsInit_applicationServerKey(const PushSubscriptionOptionsInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "applicationServerKey"));
}


void PushSubscriptionOptionsInit_set_applicationServerKey(PushSubscriptionOptionsInit* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "applicationServerKey", value);
}

DEFINE_EMLITE_TYPE(PushManager, em_Val);


jb_FrozenArray PushManager_supportedContentEncodings() {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_global("pushmanager", "supportedContentEncodings")));
}


jb_Promise PushManager_subscribe(PushManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "subscribe"));
}


jb_Promise PushManager_subscribe(PushManager* self , const PushSubscriptionOptionsInit* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "subscribe", em_Val_from(options)));
}


jb_Promise PushManager_getSubscription(PushManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getSubscription"));
}


jb_Promise PushManager_permissionState(PushManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "permissionState"));
}


jb_Promise PushManager_permissionState(PushManager* self , const PushSubscriptionOptionsInit* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "permissionState", em_Val_from(options)));
}

