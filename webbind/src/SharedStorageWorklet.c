#include <webbind/SharedStorageWorklet.h>


DEFINE_EMLITE_TYPE(SharedStorageUrlWithMetadata, em_Val);


jb_USVString SharedStorageUrlWithMetadata_url(const SharedStorageUrlWithMetadata *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void SharedStorageUrlWithMetadata_set_url(SharedStorageUrlWithMetadata* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


jb_Object SharedStorageUrlWithMetadata_reportingMetadata(const SharedStorageUrlWithMetadata *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reportingMetadata")));
}


void SharedStorageUrlWithMetadata_set_reportingMetadata(SharedStorageUrlWithMetadata* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reportingMetadata"), em_Val_from(value));
}

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


jb_Any SharedStorageRunOperationMethodOptions_privateAggregationConfig(const SharedStorageRunOperationMethodOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("privateAggregationConfig")));
}


void SharedStorageRunOperationMethodOptions_set_privateAggregationConfig(SharedStorageRunOperationMethodOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("privateAggregationConfig"), em_Val_from(value));
}


jb_DOMString SharedStorageRunOperationMethodOptions_savedQuery(const SharedStorageRunOperationMethodOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("savedQuery")));
}


void SharedStorageRunOperationMethodOptions_set_savedQuery(SharedStorageRunOperationMethodOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("savedQuery"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SharedStorageWorklet, Worklet);


jb_Promise SharedStorageWorklet_selectURL0(SharedStorageWorklet* self , jb_DOMString * name, jb_Sequence * urls) {
    return em_Val_as(jb_Promise, em_Val_call(Worklet_as_val(self->inner), "selectURL", em_Val_from(name), em_Val_from(urls)));
}


jb_Promise SharedStorageWorklet_selectURL1(SharedStorageWorklet* self , jb_DOMString * name, jb_Sequence * urls, SharedStorageRunOperationMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(Worklet_as_val(self->inner), "selectURL", em_Val_from(name), em_Val_from(urls), em_Val_from(options)));
}


jb_Promise SharedStorageWorklet_run0(SharedStorageWorklet* self , jb_DOMString * name) {
    return em_Val_as(jb_Promise, em_Val_call(Worklet_as_val(self->inner), "run", em_Val_from(name)));
}


jb_Promise SharedStorageWorklet_run1(SharedStorageWorklet* self , jb_DOMString * name, SharedStorageRunOperationMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(Worklet_as_val(self->inner), "run", em_Val_from(name), em_Val_from(options)));
}

