#include <webbind/CacheQueryOptions.h>

DEFINE_EMLITE_TYPE(CacheQueryOptions, em_Val);


bool CacheQueryOptions_ignoreSearch(const CacheQueryOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreSearch")));
}


void CacheQueryOptions_set_ignoreSearch(CacheQueryOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ignoreSearch"), em_Val_from(value));
}


bool CacheQueryOptions_ignoreMethod(const CacheQueryOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreMethod")));
}


void CacheQueryOptions_set_ignoreMethod(CacheQueryOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ignoreMethod"), em_Val_from(value));
}


bool CacheQueryOptions_ignoreVary(const CacheQueryOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreVary")));
}


void CacheQueryOptions_set_ignoreVary(CacheQueryOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ignoreVary"), em_Val_from(value));
}


CacheQueryOptions CacheQueryOptions_new() {
    em_Val obj = em_Val_object();
    return CacheQueryOptions_from_val(&obj);
}

