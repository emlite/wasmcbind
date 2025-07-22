#include <webbind/CacheStorage.h>
#include <webbind/Cache.h>


DEFINE_EMLITE_TYPE(MultiCacheQueryOptions, em_Val);


jb_DOMString MultiCacheQueryOptions_cacheName(const MultiCacheQueryOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cacheName")));
}


void MultiCacheQueryOptions_set_cacheName(MultiCacheQueryOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cacheName"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(CacheStorage, em_Val);


jb_Promise CacheStorage_match0(CacheStorage* self , jb_Any * request) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "match", em_Val_from(request)));
}


jb_Promise CacheStorage_match1(CacheStorage* self , jb_Any * request, MultiCacheQueryOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "match", em_Val_from(request), em_Val_from(options)));
}


jb_Promise CacheStorage_has(CacheStorage* self , jb_DOMString * cacheName) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "has", em_Val_from(cacheName)));
}


jb_Promise CacheStorage_open(CacheStorage* self , jb_DOMString * cacheName) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "open", em_Val_from(cacheName)));
}


jb_Promise CacheStorage_delete_(CacheStorage* self , jb_DOMString * cacheName) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(cacheName)));
}


jb_Promise CacheStorage_keys(CacheStorage* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "keys"));
}

