#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkletGlobalScope.h"
#include "enums.h"

typedef struct SharedStorage SharedStorage;
typedef struct PrivateAggregation PrivateAggregation;
typedef struct StorageInterestGroup StorageInterestGroup;
typedef struct SharedStorageWorkletNavigator SharedStorageWorkletNavigator;


typedef struct {
  em_Val inner;
} StorageInterestGroup;


DECLARE_EMLITE_TYPE(StorageInterestGroup, em_Val);

long long StorageInterestGroup_joinCount( const StorageInterestGroup *self);

void StorageInterestGroup_set_joinCount(StorageInterestGroup* self, long long value);

long long StorageInterestGroup_bidCount( const StorageInterestGroup *self);

void StorageInterestGroup_set_bidCount(StorageInterestGroup* self, long long value);

jb_Sequence StorageInterestGroup_prevWinsMs( const StorageInterestGroup *self);

void StorageInterestGroup_set_prevWinsMs(StorageInterestGroup* self, const jb_Sequence* value);

jb_USVString StorageInterestGroup_joiningOrigin( const StorageInterestGroup *self);

void StorageInterestGroup_set_joiningOrigin(StorageInterestGroup* self, const jb_USVString* value);

long long StorageInterestGroup_timeSinceGroupJoinedMs( const StorageInterestGroup *self);

void StorageInterestGroup_set_timeSinceGroupJoinedMs(StorageInterestGroup* self, long long value);

long long StorageInterestGroup_lifetimeRemainingMs( const StorageInterestGroup *self);

void StorageInterestGroup_set_lifetimeRemainingMs(StorageInterestGroup* self, long long value);

long long StorageInterestGroup_timeSinceLastUpdateMs( const StorageInterestGroup *self);

void StorageInterestGroup_set_timeSinceLastUpdateMs(StorageInterestGroup* self, long long value);

long long StorageInterestGroup_timeUntilNextUpdateMs( const StorageInterestGroup *self);

void StorageInterestGroup_set_timeUntilNextUpdateMs(StorageInterestGroup* self, long long value);

long long StorageInterestGroup_estimatedSize( const StorageInterestGroup *self);

void StorageInterestGroup_set_estimatedSize(StorageInterestGroup* self, long long value);
typedef struct {
  WorkletGlobalScope inner;
} SharedStorageWorkletGlobalScope;


DECLARE_EMLITE_TYPE(SharedStorageWorkletGlobalScope, WorkletGlobalScope);

jb_Undefined SharedStorageWorkletGlobalScope_register_(SharedStorageWorkletGlobalScope* self , const jb_DOMString* name, const jb_Function* operationCtor);

SharedStorage SharedStorageWorkletGlobalScope_sharedStorage( const SharedStorageWorkletGlobalScope *self);

PrivateAggregation SharedStorageWorkletGlobalScope_privateAggregation( const SharedStorageWorkletGlobalScope *self);

jb_Promise SharedStorageWorkletGlobalScope_interestGroups(SharedStorageWorkletGlobalScope* self );

SharedStorageWorkletNavigator SharedStorageWorkletGlobalScope_navigator( const SharedStorageWorkletGlobalScope *self);
