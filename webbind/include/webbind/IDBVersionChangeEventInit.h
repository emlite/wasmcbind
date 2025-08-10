#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IDBVersionChangeEventInit, EventInit);

long long IDBVersionChangeEventInit_oldVersion(const IDBVersionChangeEventInit *self);

void IDBVersionChangeEventInit_set_oldVersion(IDBVersionChangeEventInit* self, long long value);

long long IDBVersionChangeEventInit_newVersion(const IDBVersionChangeEventInit *self);

void IDBVersionChangeEventInit_set_newVersion(IDBVersionChangeEventInit* self, long long value);

IDBVersionChangeEventInit IDBVersionChangeEventInit_new();

#ifdef __cplusplus
}
#endif
