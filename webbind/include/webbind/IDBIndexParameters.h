#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IDBIndexParameters, em_Val);

bool IDBIndexParameters_unique(const IDBIndexParameters *self);

void IDBIndexParameters_set_unique(IDBIndexParameters* self, bool value);

bool IDBIndexParameters_multiEntry(const IDBIndexParameters *self);

void IDBIndexParameters_set_multiEntry(IDBIndexParameters* self, bool value);

IDBIndexParameters IDBIndexParameters_new();

#ifdef __cplusplus
}
#endif
