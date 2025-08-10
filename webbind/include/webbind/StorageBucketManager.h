#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StorageBucket StorageBucket;
typedef struct StorageBucketOptions StorageBucketOptions;

DECLARE_EMLITE_TYPE(StorageBucketManager, em_Val);

jb_Promise StorageBucketManager_open0(StorageBucketManager* self , jb_String * name);

jb_Promise StorageBucketManager_open1(StorageBucketManager* self , jb_String * name, StorageBucketOptions * options);

jb_Promise StorageBucketManager_keys(StorageBucketManager* self );

jb_Promise StorageBucketManager_delete_(StorageBucketManager* self , jb_String * name);

#ifdef __cplusplus
}
#endif
