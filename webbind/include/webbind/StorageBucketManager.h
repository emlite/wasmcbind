#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct StorageBucket StorageBucket;
typedef struct StorageBucketOptions StorageBucketOptions;


typedef struct {
  em_Val inner;
} StorageBucketOptions;


DECLARE_EMLITE_TYPE(StorageBucketOptions, em_Val);

bool StorageBucketOptions_persisted( const StorageBucketOptions *self);

void StorageBucketOptions_set_persisted(StorageBucketOptions* self, bool value);

long long StorageBucketOptions_quota( const StorageBucketOptions *self);

void StorageBucketOptions_set_quota(StorageBucketOptions* self, long long value);

jb_Any StorageBucketOptions_expires( const StorageBucketOptions *self);

void StorageBucketOptions_set_expires(StorageBucketOptions* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} StorageBucketManager;


DECLARE_EMLITE_TYPE(StorageBucketManager, em_Val);

jb_Promise StorageBucketManager_open(StorageBucketManager* self , const jb_DOMString* name);

jb_Promise StorageBucketManager_open(StorageBucketManager* self , const jb_DOMString* name, const StorageBucketOptions* options);

jb_Promise StorageBucketManager_keys(StorageBucketManager* self );

jb_Promise StorageBucketManager_delete_(StorageBucketManager* self , const jb_DOMString* name);
