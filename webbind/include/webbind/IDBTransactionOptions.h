#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IDBTransactionOptions, em_Val);

IDBTransactionDurability IDBTransactionOptions_durability(const IDBTransactionOptions *self);

void IDBTransactionOptions_set_durability(IDBTransactionOptions* self, IDBTransactionDurability * value);

IDBTransactionOptions IDBTransactionOptions_new();

#ifdef __cplusplus
}
#endif
