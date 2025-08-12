#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IDBIndexParameters */
DECLARE_EMLITE_TYPE(IDBIndexParameters, em_Val);

/** @brief Getter of the unique property */
bool IDBIndexParameters_unique(const IDBIndexParameters *self);

/** @brief Setter of the unique property */
void IDBIndexParameters_set_unique(IDBIndexParameters* self, bool value);

/** @brief Getter of the multiEntry property */
bool IDBIndexParameters_multiEntry(const IDBIndexParameters *self);

/** @brief Setter of the multiEntry property */
void IDBIndexParameters_set_multiEntry(IDBIndexParameters* self, bool value);

/** @brief Constructor of the IDBIndexParameters dictionary type */
IDBIndexParameters IDBIndexParameters_new();

#ifdef __cplusplus
}
#endif
