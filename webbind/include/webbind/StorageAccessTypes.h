#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(StorageAccessTypes, em_Val);

bool StorageAccessTypes_all(const StorageAccessTypes *self);

void StorageAccessTypes_set_all(StorageAccessTypes* self, bool value);

bool StorageAccessTypes_cookies(const StorageAccessTypes *self);

void StorageAccessTypes_set_cookies(StorageAccessTypes* self, bool value);

bool StorageAccessTypes_sessionStorage(const StorageAccessTypes *self);

void StorageAccessTypes_set_sessionStorage(StorageAccessTypes* self, bool value);

bool StorageAccessTypes_localStorage(const StorageAccessTypes *self);

void StorageAccessTypes_set_localStorage(StorageAccessTypes* self, bool value);

bool StorageAccessTypes_indexedDB(const StorageAccessTypes *self);

void StorageAccessTypes_set_indexedDB(StorageAccessTypes* self, bool value);

bool StorageAccessTypes_locks(const StorageAccessTypes *self);

void StorageAccessTypes_set_locks(StorageAccessTypes* self, bool value);

bool StorageAccessTypes_caches(const StorageAccessTypes *self);

void StorageAccessTypes_set_caches(StorageAccessTypes* self, bool value);

bool StorageAccessTypes_getDirectory(const StorageAccessTypes *self);

void StorageAccessTypes_set_getDirectory(StorageAccessTypes* self, bool value);

bool StorageAccessTypes_estimate(const StorageAccessTypes *self);

void StorageAccessTypes_set_estimate(StorageAccessTypes* self, bool value);

bool StorageAccessTypes_createObjectURL(const StorageAccessTypes *self);

void StorageAccessTypes_set_createObjectURL(StorageAccessTypes* self, bool value);

bool StorageAccessTypes_revokeObjectURL(const StorageAccessTypes *self);

void StorageAccessTypes_set_revokeObjectURL(StorageAccessTypes* self, bool value);

bool StorageAccessTypes_BroadcastChannel_(const StorageAccessTypes *self);

void StorageAccessTypes_set_BroadcastChannel_(StorageAccessTypes* self, bool value);

bool StorageAccessTypes_SharedWorker_(const StorageAccessTypes *self);

void StorageAccessTypes_set_SharedWorker_(StorageAccessTypes* self, bool value);

StorageAccessTypes StorageAccessTypes_new();

#ifdef __cplusplus
}
#endif
