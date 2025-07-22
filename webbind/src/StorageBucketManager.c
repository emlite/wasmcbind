#include <webbind/StorageBucketManager.h>
#include <webbind/StorageBucket.h>


DEFINE_EMLITE_TYPE(StorageBucketOptions, em_Val);


bool StorageBucketOptions_persisted(const StorageBucketOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "persisted"));
}


void StorageBucketOptions_set_persisted(StorageBucketOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "persisted", value);
}


long long StorageBucketOptions_quota(const StorageBucketOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "quota"));
}


void StorageBucketOptions_set_quota(StorageBucketOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "quota", value);
}


jb_Any StorageBucketOptions_expires(const StorageBucketOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "expires"));
}


void StorageBucketOptions_set_expires(StorageBucketOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "expires", value);
}

DEFINE_EMLITE_TYPE(StorageBucketManager, em_Val);


jb_Promise StorageBucketManager_open(StorageBucketManager* self , const jb_DOMString* name) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "open", em_Val_from(name)));
}


jb_Promise StorageBucketManager_open(StorageBucketManager* self , const jb_DOMString* name, const StorageBucketOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "open", em_Val_from(name), em_Val_from(options)));
}


jb_Promise StorageBucketManager_keys(StorageBucketManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "keys"));
}


jb_Promise StorageBucketManager_delete_(StorageBucketManager* self , const jb_DOMString* name) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(name)));
}

