#include <webbind/SharedStorageWorkletGlobalScope.h>
#include <webbind/SharedStorage.h>
#include <webbind/PrivateAggregation.h>
#include <webbind/SharedStorageWorkletNavigator.h>


DEFINE_EMLITE_TYPE(StorageInterestGroup, em_Val);


long long StorageInterestGroup_joinCount(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "joinCount"));
}


void StorageInterestGroup_set_joinCount(StorageInterestGroup* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "joinCount", value);
}


long long StorageInterestGroup_bidCount(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bidCount"));
}


void StorageInterestGroup_set_bidCount(StorageInterestGroup* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bidCount", value);
}


jb_Sequence StorageInterestGroup_prevWinsMs(const StorageInterestGroup *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "prevWinsMs"));
}


void StorageInterestGroup_set_prevWinsMs(StorageInterestGroup* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "prevWinsMs", value);
}


jb_USVString StorageInterestGroup_joiningOrigin(const StorageInterestGroup *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "joiningOrigin"));
}


void StorageInterestGroup_set_joiningOrigin(StorageInterestGroup* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "joiningOrigin", value);
}


long long StorageInterestGroup_timeSinceGroupJoinedMs(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "timeSinceGroupJoinedMs"));
}


void StorageInterestGroup_set_timeSinceGroupJoinedMs(StorageInterestGroup* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "timeSinceGroupJoinedMs", value);
}


long long StorageInterestGroup_lifetimeRemainingMs(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "lifetimeRemainingMs"));
}


void StorageInterestGroup_set_lifetimeRemainingMs(StorageInterestGroup* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "lifetimeRemainingMs", value);
}


long long StorageInterestGroup_timeSinceLastUpdateMs(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "timeSinceLastUpdateMs"));
}


void StorageInterestGroup_set_timeSinceLastUpdateMs(StorageInterestGroup* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "timeSinceLastUpdateMs", value);
}


long long StorageInterestGroup_timeUntilNextUpdateMs(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "timeUntilNextUpdateMs"));
}


void StorageInterestGroup_set_timeUntilNextUpdateMs(StorageInterestGroup* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "timeUntilNextUpdateMs", value);
}


long long StorageInterestGroup_estimatedSize(const StorageInterestGroup *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "estimatedSize"));
}


void StorageInterestGroup_set_estimatedSize(StorageInterestGroup* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "estimatedSize", value);
}

DEFINE_EMLITE_TYPE(SharedStorageWorkletGlobalScope, WorkletGlobalScope);


jb_Undefined SharedStorageWorkletGlobalScope_register_(SharedStorageWorkletGlobalScope* self , const jb_DOMString* name, const jb_Function* operationCtor) {
    return em_Val_as(jb_Undefined, em_Val_call(WorkletGlobalScope_as_val(self->inner), "register", em_Val_from(name), em_Val_from(operationCtor)));
}


SharedStorage SharedStorageWorkletGlobalScope_sharedStorage(const SharedStorageWorkletGlobalScope *self) {
    return em_Val_as(SharedStorage, em_Val_get(WorkletGlobalScope_as_val(self->inner), "sharedStorage"));
}


PrivateAggregation SharedStorageWorkletGlobalScope_privateAggregation(const SharedStorageWorkletGlobalScope *self) {
    return em_Val_as(PrivateAggregation, em_Val_get(WorkletGlobalScope_as_val(self->inner), "privateAggregation"));
}


jb_Promise SharedStorageWorkletGlobalScope_interestGroups(SharedStorageWorkletGlobalScope* self ) {
    return em_Val_as(jb_Promise, em_Val_call(WorkletGlobalScope_as_val(self->inner), "interestGroups"));
}


SharedStorageWorkletNavigator SharedStorageWorkletGlobalScope_navigator(const SharedStorageWorkletGlobalScope *self) {
    return em_Val_as(SharedStorageWorkletNavigator, em_Val_get(WorkletGlobalScope_as_val(self->inner), "navigator"));
}

