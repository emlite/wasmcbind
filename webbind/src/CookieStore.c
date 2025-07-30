#include <webbind/CookieStore.h>


DEFINE_EMLITE_TYPE(CookieListItem, em_Val);


jb_String CookieListItem_name(const CookieListItem *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void CookieListItem_set_name(CookieListItem* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String CookieListItem_value(const CookieListItem *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void CookieListItem_set_value(CookieListItem* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


jb_String CookieListItem_domain(const CookieListItem *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("domain")));
}


void CookieListItem_set_domain(CookieListItem* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("domain"), em_Val_from(value));
}


jb_String CookieListItem_path(const CookieListItem *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("path")));
}


void CookieListItem_set_path(CookieListItem* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("path"), em_Val_from(value));
}


jb_Any CookieListItem_expires(const CookieListItem *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expires")));
}


void CookieListItem_set_expires(CookieListItem* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expires"), em_Val_from(value));
}


bool CookieListItem_secure(const CookieListItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("secure")));
}


void CookieListItem_set_secure(CookieListItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("secure"), em_Val_from(value));
}


CookieSameSite CookieListItem_sameSite(const CookieListItem *self) {
    return em_Val_as(CookieSameSite, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sameSite")));
}


void CookieListItem_set_sameSite(CookieListItem* self, CookieSameSite * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sameSite"), em_Val_from(value));
}


bool CookieListItem_partitioned(const CookieListItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("partitioned")));
}


void CookieListItem_set_partitioned(CookieListItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("partitioned"), em_Val_from(value));
}

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

DEFINE_EMLITE_TYPE(CookieInit, em_Val);


jb_String CookieInit_name(const CookieInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void CookieInit_set_name(CookieInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String CookieInit_value(const CookieInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void CookieInit_set_value(CookieInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


jb_Any CookieInit_expires(const CookieInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expires")));
}


void CookieInit_set_expires(CookieInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expires"), em_Val_from(value));
}


jb_String CookieInit_domain(const CookieInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("domain")));
}


void CookieInit_set_domain(CookieInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("domain"), em_Val_from(value));
}


jb_String CookieInit_path(const CookieInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("path")));
}


void CookieInit_set_path(CookieInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("path"), em_Val_from(value));
}


CookieSameSite CookieInit_sameSite(const CookieInit *self) {
    return em_Val_as(CookieSameSite, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sameSite")));
}


void CookieInit_set_sameSite(CookieInit* self, CookieSameSite * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sameSite"), em_Val_from(value));
}


bool CookieInit_partitioned(const CookieInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("partitioned")));
}


void CookieInit_set_partitioned(CookieInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("partitioned"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(CookieStoreDeleteOptions, em_Val);


jb_String CookieStoreDeleteOptions_name(const CookieStoreDeleteOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void CookieStoreDeleteOptions_set_name(CookieStoreDeleteOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String CookieStoreDeleteOptions_domain(const CookieStoreDeleteOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("domain")));
}


void CookieStoreDeleteOptions_set_domain(CookieStoreDeleteOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("domain"), em_Val_from(value));
}


jb_String CookieStoreDeleteOptions_path(const CookieStoreDeleteOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("path")));
}


void CookieStoreDeleteOptions_set_path(CookieStoreDeleteOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("path"), em_Val_from(value));
}


bool CookieStoreDeleteOptions_partitioned(const CookieStoreDeleteOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("partitioned")));
}


void CookieStoreDeleteOptions_set_partitioned(CookieStoreDeleteOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("partitioned"), em_Val_from(value));
}

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

