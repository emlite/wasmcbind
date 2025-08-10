#include <webbind/StorageEstimate.h>

DEFINE_EMLITE_TYPE(StorageEstimate, em_Val);


long long StorageEstimate_usage(const StorageEstimate *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usage")));
}


void StorageEstimate_set_usage(StorageEstimate* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usage"), em_Val_from(value));
}


long long StorageEstimate_quota(const StorageEstimate *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("quota")));
}


void StorageEstimate_set_quota(StorageEstimate* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("quota"), em_Val_from(value));
}


StorageEstimate StorageEstimate_new() {
    em_Val obj = em_Val_object();
    return StorageEstimate_from_val(&obj);
}

