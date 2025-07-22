#include <webbind/Cache.h>
#include <webbind/BackgroundFetchRegistration.h>
#include <webbind/Response.h>
#include <webbind/Request.h>


DEFINE_EMLITE_TYPE(Cache, em_Val);


jb_Promise Cache_match(Cache* self , const jb_Any* request) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "match", em_Val_from(request)));
}


jb_Promise Cache_match(Cache* self , const jb_Any* request, const CacheQueryOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "match", em_Val_from(request), em_Val_from(options)));
}


jb_Promise Cache_matchAll(Cache* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "matchAll"));
}


jb_Promise Cache_matchAll(Cache* self , const jb_Any* request) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "matchAll", em_Val_from(request)));
}


jb_Promise Cache_matchAll(Cache* self , const jb_Any* request, const CacheQueryOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "matchAll", em_Val_from(request), em_Val_from(options)));
}


jb_Promise Cache_add(Cache* self , const jb_Any* request) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(request)));
}


jb_Promise Cache_addAll(Cache* self , const jb_Sequence* requests) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "addAll", em_Val_from(requests)));
}


jb_Promise Cache_put(Cache* self , const jb_Any* request, const Response* response) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "put", em_Val_from(request), em_Val_from(response)));
}


jb_Promise Cache_delete_(Cache* self , const jb_Any* request) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(request)));
}


jb_Promise Cache_delete_(Cache* self , const jb_Any* request, const CacheQueryOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(request), em_Val_from(options)));
}


jb_Promise Cache_keys(Cache* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "keys"));
}


jb_Promise Cache_keys(Cache* self , const jb_Any* request) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "keys", em_Val_from(request)));
}


jb_Promise Cache_keys(Cache* self , const jb_Any* request, const CacheQueryOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "keys", em_Val_from(request), em_Val_from(options)));
}

