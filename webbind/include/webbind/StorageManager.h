#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct StorageEstimate StorageEstimate;
typedef struct FileSystemDirectoryHandle FileSystemDirectoryHandle;


typedef struct {
  em_Val inner;
} StorageEstimate;


DECLARE_EMLITE_TYPE(StorageEstimate, em_Val);

long long StorageEstimate_usage( const StorageEstimate *self);

void StorageEstimate_set_usage(StorageEstimate* self, long long value);

long long StorageEstimate_quota( const StorageEstimate *self);

void StorageEstimate_set_quota(StorageEstimate* self, long long value);
typedef struct {
  em_Val inner;
} StorageManager;


DECLARE_EMLITE_TYPE(StorageManager, em_Val);

jb_Promise StorageManager_persisted(StorageManager* self );

jb_Promise StorageManager_persist(StorageManager* self );

jb_Promise StorageManager_estimate(StorageManager* self );

jb_Promise StorageManager_getDirectory(StorageManager* self );
