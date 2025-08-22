#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IDBGetAllOptions */
DECLARE_EMLITE_TYPE(IDBGetAllOptions, em_Val);

/** @brief Getter of the query property */
jb_Any IDBGetAllOptions_query(const IDBGetAllOptions *self);

/** @brief Setter of the query property */
void IDBGetAllOptions_set_query(IDBGetAllOptions* self, jb_Any * value);

/** @brief Getter of the count property */
unsigned long IDBGetAllOptions_count(const IDBGetAllOptions *self);

/** @brief Setter of the count property */
void IDBGetAllOptions_set_count(IDBGetAllOptions* self, unsigned long value);

/** @brief Getter of the direction property */
IDBCursorDirection IDBGetAllOptions_direction(const IDBGetAllOptions *self);

/** @brief Setter of the direction property */
void IDBGetAllOptions_set_direction(IDBGetAllOptions* self, IDBCursorDirection * value);

/** @brief Constructor of the IDBGetAllOptions dictionary type */
IDBGetAllOptions IDBGetAllOptions_new();

#ifdef __cplusplus
}
#endif
