#include <webcbind/CookieInit.h>

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


CookieInit CookieInit_new() {
    em_Val obj = em_Val_object();
    return CookieInit_from_val(&obj);
}

