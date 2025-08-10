#include <webbind/SharedStorageWorkletGlobalScope.h>

#include <webbind/SharedStorage.h>
#include <webbind/PrivateAggregation.h>
#include <webbind/StorageInterestGroup.h>
#include <webbind/SharedStorageWorkletNavigator.h>

DEFINE_EMLITE_TYPE(SharedStorageWorkletGlobalScope, WorkletGlobalScope);


jb_Undefined SharedStorageWorkletGlobalScope_register_(SharedStorageWorkletGlobalScope* self , jb_String * name, jb_Function * operationCtor) {
    return em_Val_as(jb_Undefined, em_Val_call(WorkletGlobalScope_as_val(self->inner), "register", em_Val_from(name), em_Val_from(operationCtor)));
}


SharedStorage SharedStorageWorkletGlobalScope_sharedStorage(const SharedStorageWorkletGlobalScope *self) {
    return em_Val_as(SharedStorage, em_Val_get(WorkletGlobalScope_as_val(self->inner), em_Val_from("sharedStorage")));
}


PrivateAggregation SharedStorageWorkletGlobalScope_privateAggregation(const SharedStorageWorkletGlobalScope *self) {
    return em_Val_as(PrivateAggregation, em_Val_get(WorkletGlobalScope_as_val(self->inner), em_Val_from("privateAggregation")));
}


jb_Promise SharedStorageWorkletGlobalScope_interestGroups(SharedStorageWorkletGlobalScope* self ) {
    return em_Val_as(jb_Promise, em_Val_call(WorkletGlobalScope_as_val(self->inner), "interestGroups"));
}


SharedStorageWorkletNavigator SharedStorageWorkletGlobalScope_navigator(const SharedStorageWorkletGlobalScope *self) {
    return em_Val_as(SharedStorageWorkletNavigator, em_Val_get(WorkletGlobalScope_as_val(self->inner), em_Val_from("navigator")));
}

