#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IDBRequest IDBRequest;


/**
 * @brief Interface IDBCursor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursor)
 */
DECLARE_EMLITE_TYPE(IDBCursor, em_Val);

/**
 * @brief Gets the `source` property. 
*/
jb_Any IDBCursor_source(const IDBCursor *self);

/**
 * @brief Gets the `direction` property. 
*/
IDBCursorDirection IDBCursor_direction(const IDBCursor *self);

/**
 * @brief Gets the `key` property. 
*/
jb_Any IDBCursor_key(const IDBCursor *self);

/**
 * @brief Gets the `primaryKey` property. 
*/
jb_Any IDBCursor_primaryKey(const IDBCursor *self);

/**
 * @brief Gets the `request` property. 
*/
IDBRequest IDBCursor_request(const IDBCursor *self);

/**
 * @brief Calls the `advance` method. 
*/
jb_Undefined IDBCursor_advance(IDBCursor* self , unsigned long count);

/**
 * @brief Calls the `continue` method. 
*/
jb_Undefined IDBCursor_continue_0(IDBCursor* self );

/**
 * @brief Calls the `continue` method. 
*/
jb_Undefined IDBCursor_continue_1(IDBCursor* self , jb_Any * key);

/**
 * @brief Calls the `continuePrimaryKey` method. 
*/
jb_Undefined IDBCursor_continuePrimaryKey(IDBCursor* self , jb_Any * key, jb_Any * primaryKey);

/**
 * @brief Calls the `update` method. 
*/
IDBRequest IDBCursor_update(IDBCursor* self , jb_Any * value);

/**
 * @brief Calls the `delete` method. 
*/
IDBRequest IDBCursor_delete_(IDBCursor* self );

#ifdef __cplusplus
}
#endif
