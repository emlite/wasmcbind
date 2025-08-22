#include <webcbind/SharedStoragePrivateAggregationConfig.h>

DEFINE_EMLITE_TYPE(SharedStoragePrivateAggregationConfig, em_Val);


jb_String SharedStoragePrivateAggregationConfig_aggregationCoordinatorOrigin(const SharedStoragePrivateAggregationConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("aggregationCoordinatorOrigin")));
}


void SharedStoragePrivateAggregationConfig_set_aggregationCoordinatorOrigin(SharedStoragePrivateAggregationConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("aggregationCoordinatorOrigin"), em_Val_from(value));
}


jb_String SharedStoragePrivateAggregationConfig_contextId(const SharedStoragePrivateAggregationConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contextId")));
}


void SharedStoragePrivateAggregationConfig_set_contextId(SharedStoragePrivateAggregationConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("contextId"), em_Val_from(value));
}


long long SharedStoragePrivateAggregationConfig_filteringIdMaxBytes(const SharedStoragePrivateAggregationConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filteringIdMaxBytes")));
}


void SharedStoragePrivateAggregationConfig_set_filteringIdMaxBytes(SharedStoragePrivateAggregationConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filteringIdMaxBytes"), em_Val_from(value));
}


long long SharedStoragePrivateAggregationConfig_maxContributions(const SharedStoragePrivateAggregationConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxContributions")));
}


void SharedStoragePrivateAggregationConfig_set_maxContributions(SharedStoragePrivateAggregationConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxContributions"), em_Val_from(value));
}


SharedStoragePrivateAggregationConfig SharedStoragePrivateAggregationConfig_new() {
    em_Val obj = em_Val_object();
    return SharedStoragePrivateAggregationConfig_from_val(&obj);
}

