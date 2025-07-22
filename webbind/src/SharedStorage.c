#include <webbind/SharedStorage.h>
#include <webbind/SharedStorageModifierMethod.h>
#include <webbind/SharedStorageWorklet.h>


DEFINE_EMLITE_TYPE(SharedStorageSetMethodOptions, em_Val);


bool SharedStorageSetMethodOptions_ignoreIfPresent(const SharedStorageSetMethodOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreIfPresent")));
}


void SharedStorageSetMethodOptions_set_ignoreIfPresent(SharedStorageSetMethodOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ignoreIfPresent"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SharedStorageModifierMethodOptions, em_Val);


jb_DOMString SharedStorageModifierMethodOptions_withLock(const SharedStorageModifierMethodOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("withLock")));
}


void SharedStorageModifierMethodOptions_set_withLock(SharedStorageModifierMethodOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("withLock"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SharedStorageWorkletOptions, em_Val);


jb_USVString SharedStorageWorkletOptions_dataOrigin(const SharedStorageWorkletOptions *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataOrigin")));
}


void SharedStorageWorkletOptions_set_dataOrigin(SharedStorageWorkletOptions* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataOrigin"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SharedStorage, em_Val);


jb_Promise SharedStorage_get(SharedStorage* self , jb_DOMString * key) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(key)));
}


jb_Promise SharedStorage_set0(SharedStorage* self , jb_DOMString * key, jb_DOMString * value) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(key), em_Val_from(value)));
}


jb_Promise SharedStorage_set1(SharedStorage* self , jb_DOMString * key, jb_DOMString * value, SharedStorageSetMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(key), em_Val_from(value), em_Val_from(options)));
}


jb_Promise SharedStorage_append0(SharedStorage* self , jb_DOMString * key, jb_DOMString * value) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "append", em_Val_from(key), em_Val_from(value)));
}


jb_Promise SharedStorage_append1(SharedStorage* self , jb_DOMString * key, jb_DOMString * value, SharedStorageModifierMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "append", em_Val_from(key), em_Val_from(value), em_Val_from(options)));
}


jb_Promise SharedStorage_delete_0(SharedStorage* self , jb_DOMString * key) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(key)));
}


jb_Promise SharedStorage_delete_1(SharedStorage* self , jb_DOMString * key, SharedStorageModifierMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(key), em_Val_from(options)));
}


jb_Promise SharedStorage_clear0(SharedStorage* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clear"));
}


jb_Promise SharedStorage_clear1(SharedStorage* self , SharedStorageModifierMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clear", em_Val_from(options)));
}


jb_Promise SharedStorage_batchUpdate0(SharedStorage* self , jb_Sequence * methods) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "batchUpdate", em_Val_from(methods)));
}


jb_Promise SharedStorage_batchUpdate1(SharedStorage* self , jb_Sequence * methods, SharedStorageModifierMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "batchUpdate", em_Val_from(methods), em_Val_from(options)));
}


jb_Promise SharedStorage_selectURL0(SharedStorage* self , jb_DOMString * name, jb_Sequence * urls) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "selectURL", em_Val_from(name), em_Val_from(urls)));
}


jb_Promise SharedStorage_selectURL1(SharedStorage* self , jb_DOMString * name, jb_Sequence * urls, SharedStorageRunOperationMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "selectURL", em_Val_from(name), em_Val_from(urls), em_Val_from(options)));
}


jb_Promise SharedStorage_run0(SharedStorage* self , jb_DOMString * name) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "run", em_Val_from(name)));
}


jb_Promise SharedStorage_run1(SharedStorage* self , jb_DOMString * name, SharedStorageRunOperationMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "run", em_Val_from(name), em_Val_from(options)));
}


jb_Promise SharedStorage_createWorklet0(SharedStorage* self , jb_USVString * moduleURL) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createWorklet", em_Val_from(moduleURL)));
}


jb_Promise SharedStorage_createWorklet1(SharedStorage* self , jb_USVString * moduleURL, SharedStorageWorkletOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createWorklet", em_Val_from(moduleURL), em_Val_from(options)));
}


SharedStorageWorklet SharedStorage_worklet(const SharedStorage *self) {
    return em_Val_as(SharedStorageWorklet, em_Val_get(em_Val_as_val(self->inner), em_Val_from("worklet")));
}


jb_Promise SharedStorage_length(SharedStorage* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "length"));
}


jb_Promise SharedStorage_remainingBudget(SharedStorage* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "remainingBudget"));
}

