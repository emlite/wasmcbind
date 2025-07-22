#include <webbind/PushSubscriptionOptions.h>


DEFINE_EMLITE_TYPE(PushSubscriptionOptions, em_Val);


bool PushSubscriptionOptions_userVisibleOnly(const PushSubscriptionOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "userVisibleOnly"));
}


jb_ArrayBuffer PushSubscriptionOptions_applicationServerKey(const PushSubscriptionOptions *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), "applicationServerKey"));
}

