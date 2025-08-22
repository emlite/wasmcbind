#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IDBDatabaseInfo */
DECLARE_EMLITE_TYPE(IDBDatabaseInfo, em_Val);

/** @brief Getter of the name property */
jb_String IDBDatabaseInfo_name(const IDBDatabaseInfo *self);

/** @brief Setter of the name property */
void IDBDatabaseInfo_set_name(IDBDatabaseInfo* self, jb_String * value);

/** @brief Getter of the version property */
long long IDBDatabaseInfo_version(const IDBDatabaseInfo *self);

/** @brief Setter of the version property */
void IDBDatabaseInfo_set_version(IDBDatabaseInfo* self, long long value);

/** @brief Constructor of the IDBDatabaseInfo dictionary type */
IDBDatabaseInfo IDBDatabaseInfo_new();

#ifdef __cplusplus
}
#endif
