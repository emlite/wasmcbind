#include <webbind/StorageBucketOptions.h>

DEFINE_EMLITE_TYPE(StorageBucketOptions, em_Val);


bool StorageBucketOptions_persisted(const StorageBucketOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("persisted")));
}


void StorageBucketOptions_set_persisted(StorageBucketOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("persisted"), em_Val_from(value));
}


long long StorageBucketOptions_quota(const StorageBucketOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("quota")));
}


void StorageBucketOptions_set_quota(StorageBucketOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("quota"), em_Val_from(value));
}


jb_Any StorageBucketOptions_expires(const StorageBucketOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expires")));
}


void StorageBucketOptions_set_expires(StorageBucketOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expires"), em_Val_from(value));
}


StorageBucketOptions StorageBucketOptions_new() {
    em_Val obj = em_Val_object();
    return StorageBucketOptions_from_val(&obj);
}

