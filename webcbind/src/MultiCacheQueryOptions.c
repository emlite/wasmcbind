#include <webcbind/MultiCacheQueryOptions.h>

DEFINE_EMLITE_TYPE(MultiCacheQueryOptions, CacheQueryOptions);


jb_String MultiCacheQueryOptions_cacheName(const MultiCacheQueryOptions *self) {
    return em_Val_as(jb_String, em_Val_get(CacheQueryOptions_as_val(self->inner), em_Val_from("cacheName")));
}


void MultiCacheQueryOptions_set_cacheName(MultiCacheQueryOptions* self, jb_String * value) {
    em_Val_set(CacheQueryOptions_as_val(self->inner), em_Val_from("cacheName"), em_Val_from(value));
}


MultiCacheQueryOptions MultiCacheQueryOptions_new() {
    em_Val obj = em_Val_object();
    return MultiCacheQueryOptions_from_val(&obj);
}

