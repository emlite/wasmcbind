#include <webcbind/CookieStoreDeleteOptions.h>

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


CookieStoreDeleteOptions CookieStoreDeleteOptions_new() {
    em_Val obj = em_Val_object();
    return CookieStoreDeleteOptions_from_val(&obj);
}

