#include <webbind/Cache.h>
#include <webbind/BackgroundFetchRegistration.h>
#include <webbind/Response.h>
#include <webbind/Request.h>


DEFINE_EMLITE_TYPE(Cache, em_Val);


jb_Promise Cache_match0(Cache* self , jb_Any * request) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "match", em_Val_from(request)));
}


jb_Promise Cache_match1(Cache* self , jb_Any * request, CacheQueryOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "match", em_Val_from(request), em_Val_from(options)));
}


jb_Promise Cache_matchAll0(Cache* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "matchAll"));
}


jb_Promise Cache_matchAll1(Cache* self , jb_Any * request) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "matchAll", em_Val_from(request)));
}


jb_Promise Cache_matchAll2(Cache* self , jb_Any * request, CacheQueryOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "matchAll", em_Val_from(request), em_Val_from(options)));
}


jb_Promise Cache_add(Cache* self , jb_Any * request) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "add", em_Val_from(request)));
}


jb_Promise Cache_addAll(Cache* self , jb_Array * requests) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "addAll", em_Val_from(requests)));
}


jb_Promise Cache_put(Cache* self , jb_Any * request, Response * response) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "put", em_Val_from(request), em_Val_from(response)));
}


jb_Promise Cache_delete_0(Cache* self , jb_Any * request) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(request)));
}


jb_Promise Cache_delete_1(Cache* self , jb_Any * request, CacheQueryOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(request), em_Val_from(options)));
}


jb_Promise Cache_keys0(Cache* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "keys"));
}


jb_Promise Cache_keys1(Cache* self , jb_Any * request) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "keys", em_Val_from(request)));
}


jb_Promise Cache_keys2(Cache* self , jb_Any * request, CacheQueryOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "keys", em_Val_from(request), em_Val_from(options)));
}

