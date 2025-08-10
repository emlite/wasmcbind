#include <webbind/SharedStorageRunOperationMethodOptions.h>

DEFINE_EMLITE_TYPE(SharedStorageRunOperationMethodOptions, em_Val);


jb_Object SharedStorageRunOperationMethodOptions_data(const SharedStorageRunOperationMethodOptions *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void SharedStorageRunOperationMethodOptions_set_data(SharedStorageRunOperationMethodOptions* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


bool SharedStorageRunOperationMethodOptions_resolveToConfig(const SharedStorageRunOperationMethodOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resolveToConfig")));
}


void SharedStorageRunOperationMethodOptions_set_resolveToConfig(SharedStorageRunOperationMethodOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resolveToConfig"), em_Val_from(value));
}


bool SharedStorageRunOperationMethodOptions_keepAlive(const SharedStorageRunOperationMethodOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keepAlive")));
}


void SharedStorageRunOperationMethodOptions_set_keepAlive(SharedStorageRunOperationMethodOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keepAlive"), em_Val_from(value));
}


SharedStoragePrivateAggregationConfig SharedStorageRunOperationMethodOptions_privateAggregationConfig(const SharedStorageRunOperationMethodOptions *self) {
    return em_Val_as(SharedStoragePrivateAggregationConfig, em_Val_get(em_Val_as_val(self->inner), em_Val_from("privateAggregationConfig")));
}


void SharedStorageRunOperationMethodOptions_set_privateAggregationConfig(SharedStorageRunOperationMethodOptions* self, SharedStoragePrivateAggregationConfig * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("privateAggregationConfig"), em_Val_from(value));
}


jb_String SharedStorageRunOperationMethodOptions_savedQuery(const SharedStorageRunOperationMethodOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("savedQuery")));
}


void SharedStorageRunOperationMethodOptions_set_savedQuery(SharedStorageRunOperationMethodOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("savedQuery"), em_Val_from(value));
}


SharedStorageRunOperationMethodOptions SharedStorageRunOperationMethodOptions_new() {
    em_Val obj = em_Val_object();
    return SharedStorageRunOperationMethodOptions_from_val(&obj);
}

