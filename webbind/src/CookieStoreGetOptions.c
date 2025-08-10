#include <webbind/CookieStoreGetOptions.h>

DEFINE_EMLITE_TYPE(CookieStoreGetOptions, em_Val);


jb_String CookieStoreGetOptions_name(const CookieStoreGetOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void CookieStoreGetOptions_set_name(CookieStoreGetOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String CookieStoreGetOptions_url(const CookieStoreGetOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void CookieStoreGetOptions_set_url(CookieStoreGetOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


CookieStoreGetOptions CookieStoreGetOptions_new() {
    em_Val obj = em_Val_object();
    return CookieStoreGetOptions_from_val(&obj);
}

