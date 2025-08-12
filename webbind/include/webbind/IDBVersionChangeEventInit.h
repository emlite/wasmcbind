#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IDBVersionChangeEventInit */
DECLARE_EMLITE_TYPE(IDBVersionChangeEventInit, EventInit);

/** @brief Getter of the oldVersion property */
long long IDBVersionChangeEventInit_oldVersion(const IDBVersionChangeEventInit *self);

/** @brief Setter of the oldVersion property */
void IDBVersionChangeEventInit_set_oldVersion(IDBVersionChangeEventInit* self, long long value);

/** @brief Getter of the newVersion property */
long long IDBVersionChangeEventInit_newVersion(const IDBVersionChangeEventInit *self);

/** @brief Setter of the newVersion property */
void IDBVersionChangeEventInit_set_newVersion(IDBVersionChangeEventInit* self, long long value);

/** @brief Constructor of the IDBVersionChangeEventInit dictionary type */
IDBVersionChangeEventInit IDBVersionChangeEventInit_new();

#ifdef __cplusplus
}
#endif
