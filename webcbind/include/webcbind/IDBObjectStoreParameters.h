#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IDBObjectStoreParameters */
DECLARE_EMLITE_TYPE(IDBObjectStoreParameters, em_Val);

/** @brief Getter of the keyPath property */
jb_Any IDBObjectStoreParameters_keyPath(const IDBObjectStoreParameters *self);

/** @brief Setter of the keyPath property */
void IDBObjectStoreParameters_set_keyPath(IDBObjectStoreParameters* self, jb_Any * value);

/** @brief Getter of the autoIncrement property */
bool IDBObjectStoreParameters_autoIncrement(const IDBObjectStoreParameters *self);

/** @brief Setter of the autoIncrement property */
void IDBObjectStoreParameters_set_autoIncrement(IDBObjectStoreParameters* self, bool value);

/** @brief Constructor of the IDBObjectStoreParameters dictionary type */
IDBObjectStoreParameters IDBObjectStoreParameters_new();

#ifdef __cplusplus
}
#endif
