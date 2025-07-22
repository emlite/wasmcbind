#include <webbind/BackgroundFetchManager.h>
#include <webbind/BackgroundFetchRegistration.h>


DEFINE_EMLITE_TYPE(BackgroundFetchOptions, em_Val);


long long BackgroundFetchOptions_downloadTotal(const BackgroundFetchOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "downloadTotal"));
}


void BackgroundFetchOptions_set_downloadTotal(BackgroundFetchOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "downloadTotal", value);
}

DEFINE_EMLITE_TYPE(BackgroundFetchManager, em_Val);


jb_Promise BackgroundFetchManager_fetch(BackgroundFetchManager* self , const jb_DOMString* id, const jb_Any* requests) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "fetch", em_Val_from(id), em_Val_from(requests)));
}


jb_Promise BackgroundFetchManager_fetch(BackgroundFetchManager* self , const jb_DOMString* id, const jb_Any* requests, const BackgroundFetchOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "fetch", em_Val_from(id), em_Val_from(requests), em_Val_from(options)));
}


jb_Promise BackgroundFetchManager_get(BackgroundFetchManager* self , const jb_DOMString* id) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(id)));
}


jb_Promise BackgroundFetchManager_getIds(BackgroundFetchManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getIds"));
}

