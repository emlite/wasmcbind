#include <webcbind/CookieListItem.h>

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


CookieListItem CookieListItem_new() {
    em_Val obj = em_Val_object();
    return CookieListItem_from_val(&obj);
}

