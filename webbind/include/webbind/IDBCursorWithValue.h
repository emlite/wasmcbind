#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "IDBCursor.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface IDBCursorWithValue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursorWithValue)
 */
DECLARE_EMLITE_TYPE(IDBCursorWithValue, IDBCursor);

/**
 * @brief Gets the `value` property. 
*/
jb_Any IDBCursorWithValue_value(const IDBCursorWithValue *self);

#ifdef __cplusplus
}
#endif
