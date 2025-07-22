#include <webbind/CookieStore.h>


DEFINE_EMLITE_TYPE(CookieListItem, em_Val);


jb_USVString CookieListItem_name(const CookieListItem *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void CookieListItem_set_name(CookieListItem* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}


jb_USVString CookieListItem_value(const CookieListItem *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "value"));
}


void CookieListItem_set_value(CookieListItem* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "value", value);
}


jb_USVString CookieListItem_domain(const CookieListItem *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "domain"));
}


void CookieListItem_set_domain(CookieListItem* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "domain", value);
}


jb_USVString CookieListItem_path(const CookieListItem *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "path"));
}


void CookieListItem_set_path(CookieListItem* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "path", value);
}


jb_Any CookieListItem_expires(const CookieListItem *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "expires"));
}


void CookieListItem_set_expires(CookieListItem* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "expires", value);
}


bool CookieListItem_secure(const CookieListItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "secure"));
}


void CookieListItem_set_secure(CookieListItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "secure", value);
}


CookieSameSite CookieListItem_sameSite(const CookieListItem *self) {
    return em_Val_as(CookieSameSite, em_Val_get(em_Val_as_val(self->inner), "sameSite"));
}


void CookieListItem_set_sameSite(CookieListItem* self, const CookieSameSite* value) {
    em_Val_set(em_Val_as_val(self->inner), "sameSite", value);
}


bool CookieListItem_partitioned(const CookieListItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "partitioned"));
}


void CookieListItem_set_partitioned(CookieListItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "partitioned", value);
}

DEFINE_EMLITE_TYPE(CookieStoreGetOptions, em_Val);


jb_USVString CookieStoreGetOptions_name(const CookieStoreGetOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void CookieStoreGetOptions_set_name(CookieStoreGetOptions* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}


jb_USVString CookieStoreGetOptions_url(const CookieStoreGetOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "url"));
}


void CookieStoreGetOptions_set_url(CookieStoreGetOptions* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "url", value);
}

DEFINE_EMLITE_TYPE(CookieInit, em_Val);


jb_USVString CookieInit_name(const CookieInit *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void CookieInit_set_name(CookieInit* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}


jb_USVString CookieInit_value(const CookieInit *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "value"));
}


void CookieInit_set_value(CookieInit* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "value", value);
}


jb_Any CookieInit_expires(const CookieInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "expires"));
}


void CookieInit_set_expires(CookieInit* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "expires", value);
}


jb_USVString CookieInit_domain(const CookieInit *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "domain"));
}


void CookieInit_set_domain(CookieInit* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "domain", value);
}


jb_USVString CookieInit_path(const CookieInit *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "path"));
}


void CookieInit_set_path(CookieInit* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "path", value);
}


CookieSameSite CookieInit_sameSite(const CookieInit *self) {
    return em_Val_as(CookieSameSite, em_Val_get(em_Val_as_val(self->inner), "sameSite"));
}


void CookieInit_set_sameSite(CookieInit* self, const CookieSameSite* value) {
    em_Val_set(em_Val_as_val(self->inner), "sameSite", value);
}


bool CookieInit_partitioned(const CookieInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "partitioned"));
}


void CookieInit_set_partitioned(CookieInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "partitioned", value);
}

DEFINE_EMLITE_TYPE(CookieStoreDeleteOptions, em_Val);


jb_USVString CookieStoreDeleteOptions_name(const CookieStoreDeleteOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


void CookieStoreDeleteOptions_set_name(CookieStoreDeleteOptions* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "name", value);
}


jb_USVString CookieStoreDeleteOptions_domain(const CookieStoreDeleteOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "domain"));
}


void CookieStoreDeleteOptions_set_domain(CookieStoreDeleteOptions* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "domain", value);
}


jb_USVString CookieStoreDeleteOptions_path(const CookieStoreDeleteOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "path"));
}


void CookieStoreDeleteOptions_set_path(CookieStoreDeleteOptions* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "path", value);
}


bool CookieStoreDeleteOptions_partitioned(const CookieStoreDeleteOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "partitioned"));
}


void CookieStoreDeleteOptions_set_partitioned(CookieStoreDeleteOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "partitioned", value);
}

DEFINE_EMLITE_TYPE(CookieStore, EventTarget);


jb_Promise CookieStore_get(CookieStore* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "get"));
}


jb_Promise CookieStore_get(CookieStore* self , const CookieStoreGetOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "get", em_Val_from(options)));
}


jb_Promise CookieStore_getAll(CookieStore* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getAll"));
}


jb_Promise CookieStore_getAll(CookieStore* self , const CookieStoreGetOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getAll", em_Val_from(options)));
}


jb_Promise CookieStore_set(CookieStore* self , const CookieInit* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "set", em_Val_from(options)));
}


jb_Promise CookieStore_delete_(CookieStore* self , const CookieStoreDeleteOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "delete", em_Val_from(options)));
}


jb_Any CookieStore_onchange(const CookieStore *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onchange"));
}


void CookieStore_set_onchange(CookieStore* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onchange", value);
}

