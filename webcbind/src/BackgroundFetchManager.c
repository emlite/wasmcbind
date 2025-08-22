#include <webcbind/BackgroundFetchManager.h>

#include <webcbind/BackgroundFetchRegistration.h>
#include <webcbind/BackgroundFetchOptions.h>

DEFINE_EMLITE_TYPE(BackgroundFetchManager, em_Val);


jb_Promise BackgroundFetchManager_fetch0(BackgroundFetchManager* self , jb_String * id, jb_Any * requests) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "fetch", em_Val_from(id), em_Val_from(requests)));
}


jb_Promise BackgroundFetchManager_fetch1(BackgroundFetchManager* self , jb_String * id, jb_Any * requests, BackgroundFetchOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "fetch", em_Val_from(id), em_Val_from(requests), em_Val_from(options)));
}


jb_Promise BackgroundFetchManager_get(BackgroundFetchManager* self , jb_String * id) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(id)));
}


jb_Promise BackgroundFetchManager_getIds(BackgroundFetchManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getIds"));
}

