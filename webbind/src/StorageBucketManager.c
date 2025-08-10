#include <webbind/StorageBucketManager.h>

#include <webbind/StorageBucket.h>
#include <webbind/StorageBucketOptions.h>

DEFINE_EMLITE_TYPE(StorageBucketManager, em_Val);


jb_Promise StorageBucketManager_open0(StorageBucketManager* self , jb_String * name) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "open", em_Val_from(name)));
}


jb_Promise StorageBucketManager_open1(StorageBucketManager* self , jb_String * name, StorageBucketOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "open", em_Val_from(name), em_Val_from(options)));
}


jb_Promise StorageBucketManager_keys(StorageBucketManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "keys"));
}


jb_Promise StorageBucketManager_delete_(StorageBucketManager* self , jb_String * name) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(name)));
}

