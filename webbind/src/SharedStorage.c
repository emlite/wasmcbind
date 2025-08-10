#include <webbind/SharedStorage.h>

#include <webbind/SharedStorageSetMethodOptions.h>
#include <webbind/SharedStorageModifierMethodOptions.h>
#include <webbind/SharedStorageModifierMethod.h>
#include <webbind/SharedStorageUrlWithMetadata.h>
#include <webbind/SharedStorageRunOperationMethodOptions.h>
#include <webbind/SharedStorageWorklet.h>
#include <webbind/SharedStorageWorkletOptions.h>

DEFINE_EMLITE_TYPE(SharedStorage, em_Val);


jb_Promise SharedStorage_get(SharedStorage* self , jb_String * key) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(key)));
}


jb_Promise SharedStorage_set0(SharedStorage* self , jb_String * key, jb_String * value) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(key), em_Val_from(value)));
}


jb_Promise SharedStorage_set1(SharedStorage* self , jb_String * key, jb_String * value, SharedStorageSetMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(key), em_Val_from(value), em_Val_from(options)));
}


jb_Promise SharedStorage_append0(SharedStorage* self , jb_String * key, jb_String * value) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "append", em_Val_from(key), em_Val_from(value)));
}


jb_Promise SharedStorage_append1(SharedStorage* self , jb_String * key, jb_String * value, SharedStorageModifierMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "append", em_Val_from(key), em_Val_from(value), em_Val_from(options)));
}


jb_Promise SharedStorage_delete_0(SharedStorage* self , jb_String * key) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(key)));
}


jb_Promise SharedStorage_delete_1(SharedStorage* self , jb_String * key, SharedStorageModifierMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(key), em_Val_from(options)));
}


jb_Promise SharedStorage_clear0(SharedStorage* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clear"));
}


jb_Promise SharedStorage_clear1(SharedStorage* self , SharedStorageModifierMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clear", em_Val_from(options)));
}


jb_Promise SharedStorage_batchUpdate0(SharedStorage* self , jb_Array * methods) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "batchUpdate", em_Val_from(methods)));
}


jb_Promise SharedStorage_batchUpdate1(SharedStorage* self , jb_Array * methods, SharedStorageModifierMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "batchUpdate", em_Val_from(methods), em_Val_from(options)));
}


jb_Promise SharedStorage_selectURL0(SharedStorage* self , jb_String * name, jb_Array * urls) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "selectURL", em_Val_from(name), em_Val_from(urls)));
}


jb_Promise SharedStorage_selectURL1(SharedStorage* self , jb_String * name, jb_Array * urls, SharedStorageRunOperationMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "selectURL", em_Val_from(name), em_Val_from(urls), em_Val_from(options)));
}


jb_Promise SharedStorage_run0(SharedStorage* self , jb_String * name) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "run", em_Val_from(name)));
}


jb_Promise SharedStorage_run1(SharedStorage* self , jb_String * name, SharedStorageRunOperationMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "run", em_Val_from(name), em_Val_from(options)));
}


jb_Promise SharedStorage_createWorklet0(SharedStorage* self , jb_String * moduleURL) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createWorklet", em_Val_from(moduleURL)));
}


jb_Promise SharedStorage_createWorklet1(SharedStorage* self , jb_String * moduleURL, SharedStorageWorkletOptions * options) {
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

