#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMStringList DOMStringList;
typedef struct IDBTransaction IDBTransaction;
typedef struct IDBRequest IDBRequest;
typedef struct IDBGetAllOptions IDBGetAllOptions;
typedef struct IDBIndex IDBIndex;
typedef struct IDBIndexParameters IDBIndexParameters;


/**
 * @brief Interface IDBObjectStore
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IDBObjectStore)
 */
DECLARE_EMLITE_TYPE(IDBObjectStore, em_Val);

/**
 * @brief Gets the `name` property. 
*/
jb_String IDBObjectStore_name(const IDBObjectStore *self);

/**
 * @brief Sets the `name` property. 
*/
void IDBObjectStore_set_name(IDBObjectStore* self, jb_String * value);

/**
 * @brief Gets the `keyPath` property. 
*/
jb_Any IDBObjectStore_keyPath(const IDBObjectStore *self);

/**
 * @brief Gets the `indexNames` property. 
*/
DOMStringList IDBObjectStore_indexNames(const IDBObjectStore *self);

/**
 * @brief Gets the `transaction` property. 
*/
IDBTransaction IDBObjectStore_transaction(const IDBObjectStore *self);

/**
 * @brief Gets the `autoIncrement` property. 
*/
bool IDBObjectStore_autoIncrement(const IDBObjectStore *self);

/**
 * @brief Calls the `put` method. 
*/
IDBRequest IDBObjectStore_put0(IDBObjectStore* self , jb_Any * value);

/**
 * @brief Calls the `put` method. 
*/
IDBRequest IDBObjectStore_put1(IDBObjectStore* self , jb_Any * value, jb_Any * key);

/**
 * @brief Calls the `add` method. 
*/
IDBRequest IDBObjectStore_add0(IDBObjectStore* self , jb_Any * value);

/**
 * @brief Calls the `add` method. 
*/
IDBRequest IDBObjectStore_add1(IDBObjectStore* self , jb_Any * value, jb_Any * key);

/**
 * @brief Calls the `delete` method. 
*/
IDBRequest IDBObjectStore_delete_(IDBObjectStore* self , jb_Any * query);

/**
 * @brief Calls the `clear` method. 
*/
IDBRequest IDBObjectStore_clear(IDBObjectStore* self );

/**
 * @brief Calls the `get` method. 
*/
IDBRequest IDBObjectStore_get(IDBObjectStore* self , jb_Any * query);

/**
 * @brief Calls the `getKey` method. 
*/
IDBRequest IDBObjectStore_getKey(IDBObjectStore* self , jb_Any * query);

/**
 * @brief Calls the `getAll` method. 
*/
IDBRequest IDBObjectStore_getAll0(IDBObjectStore* self );

/**
 * @brief Calls the `getAll` method. 
*/
IDBRequest IDBObjectStore_getAll1(IDBObjectStore* self , jb_Any * queryOrOptions);

/**
 * @brief Calls the `getAll` method. 
*/
IDBRequest IDBObjectStore_getAll2(IDBObjectStore* self , jb_Any * queryOrOptions, unsigned long count);

/**
 * @brief Calls the `getAllKeys` method. 
*/
IDBRequest IDBObjectStore_getAllKeys0(IDBObjectStore* self );

/**
 * @brief Calls the `getAllKeys` method. 
*/
IDBRequest IDBObjectStore_getAllKeys1(IDBObjectStore* self , jb_Any * queryOrOptions);

/**
 * @brief Calls the `getAllKeys` method. 
*/
IDBRequest IDBObjectStore_getAllKeys2(IDBObjectStore* self , jb_Any * queryOrOptions, unsigned long count);

/**
 * @brief Calls the `getAllRecords` method. 
*/
IDBRequest IDBObjectStore_getAllRecords0(IDBObjectStore* self );

/**
 * @brief Calls the `getAllRecords` method. 
*/
IDBRequest IDBObjectStore_getAllRecords1(IDBObjectStore* self , IDBGetAllOptions * options);

/**
 * @brief Calls the `count` method. 
*/
IDBRequest IDBObjectStore_count0(IDBObjectStore* self );

/**
 * @brief Calls the `count` method. 
*/
IDBRequest IDBObjectStore_count1(IDBObjectStore* self , jb_Any * query);

/**
 * @brief Calls the `openCursor` method. 
*/
IDBRequest IDBObjectStore_openCursor0(IDBObjectStore* self );

/**
 * @brief Calls the `openCursor` method. 
*/
IDBRequest IDBObjectStore_openCursor1(IDBObjectStore* self , jb_Any * query);

/**
 * @brief Calls the `openCursor` method. 
*/
IDBRequest IDBObjectStore_openCursor2(IDBObjectStore* self , jb_Any * query, IDBCursorDirection * direction);

/**
 * @brief Calls the `openKeyCursor` method. 
*/
IDBRequest IDBObjectStore_openKeyCursor0(IDBObjectStore* self );

/**
 * @brief Calls the `openKeyCursor` method. 
*/
IDBRequest IDBObjectStore_openKeyCursor1(IDBObjectStore* self , jb_Any * query);

/**
 * @brief Calls the `openKeyCursor` method. 
*/
IDBRequest IDBObjectStore_openKeyCursor2(IDBObjectStore* self , jb_Any * query, IDBCursorDirection * direction);

/**
 * @brief Calls the `index` method. 
*/
IDBIndex IDBObjectStore_index(IDBObjectStore* self , jb_String * name);

/**
 * @brief Calls the `createIndex` method. 
*/
IDBIndex IDBObjectStore_createIndex0(IDBObjectStore* self , jb_String * name, jb_Any * keyPath);

/**
 * @brief Calls the `createIndex` method. 
*/
IDBIndex IDBObjectStore_createIndex1(IDBObjectStore* self , jb_String * name, jb_Any * keyPath, IDBIndexParameters * options);

/**
 * @brief Calls the `deleteIndex` method. 
*/
jb_Undefined IDBObjectStore_deleteIndex(IDBObjectStore* self , jb_String * name);

#ifdef __cplusplus
}
#endif
