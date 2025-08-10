#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IDBVersionChangeEventInit IDBVersionChangeEventInit;

DECLARE_EMLITE_TYPE(IDBVersionChangeEvent, Event);

IDBVersionChangeEvent IDBVersionChangeEvent_new0(jb_String * type);

IDBVersionChangeEvent IDBVersionChangeEvent_new1(jb_String * type, IDBVersionChangeEventInit * eventInitDict);

long long IDBVersionChangeEvent_oldVersion(const IDBVersionChangeEvent *self);

long long IDBVersionChangeEvent_newVersion(const IDBVersionChangeEvent *self);

#ifdef __cplusplus
}
#endif
