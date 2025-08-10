#include <webbind/CookieStoreManager.h>

#include <webbind/CookieStoreGetOptions.h>

DEFINE_EMLITE_TYPE(CookieStoreManager, em_Val);


jb_Promise CookieStoreManager_subscribe(CookieStoreManager* self , jb_Array * subscriptions) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "subscribe", em_Val_from(subscriptions)));
}


jb_Promise CookieStoreManager_getSubscriptions(CookieStoreManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getSubscriptions"));
}


jb_Promise CookieStoreManager_unsubscribe(CookieStoreManager* self , jb_Array * subscriptions) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "unsubscribe", em_Val_from(subscriptions)));
}

