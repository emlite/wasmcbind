#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IDBTransactionOptions */
DECLARE_EMLITE_TYPE(IDBTransactionOptions, em_Val);

/** @brief Getter of the durability property */
IDBTransactionDurability IDBTransactionOptions_durability(const IDBTransactionOptions *self);

/** @brief Setter of the durability property */
void IDBTransactionOptions_set_durability(IDBTransactionOptions* self, IDBTransactionDurability * value);

/** @brief Constructor of the IDBTransactionOptions dictionary type */
IDBTransactionOptions IDBTransactionOptions_new();

#ifdef __cplusplus
}
#endif
