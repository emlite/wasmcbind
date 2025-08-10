#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IDBObjectStoreParameters, em_Val);

jb_Any IDBObjectStoreParameters_keyPath(const IDBObjectStoreParameters *self);

void IDBObjectStoreParameters_set_keyPath(IDBObjectStoreParameters* self, jb_Any * value);

bool IDBObjectStoreParameters_autoIncrement(const IDBObjectStoreParameters *self);

void IDBObjectStoreParameters_set_autoIncrement(IDBObjectStoreParameters* self, bool value);

IDBObjectStoreParameters IDBObjectStoreParameters_new();

#ifdef __cplusplus
}
#endif
