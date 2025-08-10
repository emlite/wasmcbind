#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IDBDatabaseInfo, em_Val);

jb_String IDBDatabaseInfo_name(const IDBDatabaseInfo *self);

void IDBDatabaseInfo_set_name(IDBDatabaseInfo* self, jb_String * value);

long long IDBDatabaseInfo_version(const IDBDatabaseInfo *self);

void IDBDatabaseInfo_set_version(IDBDatabaseInfo* self, long long value);

IDBDatabaseInfo IDBDatabaseInfo_new();

#ifdef __cplusplus
}
#endif
