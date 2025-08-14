#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface IDBRecord
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IDBRecord)
 */
DECLARE_EMLITE_TYPE(IDBRecord, em_Val);

/**
 * @brief Gets the `key` property. 
*/
jb_Any IDBRecord_key(const IDBRecord *self);

/**
 * @brief Gets the `primaryKey` property. 
*/
jb_Any IDBRecord_primaryKey(const IDBRecord *self);

/**
 * @brief Gets the `value` property. 
*/
jb_Any IDBRecord_value(const IDBRecord *self);

#ifdef __cplusplus
}
#endif
