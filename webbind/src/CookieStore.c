#include <webbind/CookieStore.h>

#include <webbind/CookieListItem.h>
#include <webbind/CookieStoreGetOptions.h>
#include <webbind/CookieInit.h>
#include <webbind/CookieStoreDeleteOptions.h>

DEFINE_EMLITE_TYPE(CookieStore, EventTarget);


jb_Promise CookieStore_get0(CookieStore* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "get"));
}


jb_Promise CookieStore_get1(CookieStore* self , CookieStoreGetOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "get", em_Val_from(options)));
}


jb_Promise CookieStore_getAll0(CookieStore* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getAll"));
}


jb_Promise CookieStore_getAll1(CookieStore* self , CookieStoreGetOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getAll", em_Val_from(options)));
}


jb_Promise CookieStore_set(CookieStore* self , CookieInit * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "set", em_Val_from(options)));
}


jb_Promise CookieStore_delete_(CookieStore* self , CookieStoreDeleteOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "delete", em_Val_from(options)));
}


jb_Any CookieStore_onchange(const CookieStore *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchange")));
}


void CookieStore_set_onchange(CookieStore* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchange"), em_Val_from(value));
}

