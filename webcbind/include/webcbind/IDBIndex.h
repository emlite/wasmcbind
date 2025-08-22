#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IDBObjectStore IDBObjectStore;
typedef struct IDBRequest IDBRequest;
typedef struct IDBGetAllOptions IDBGetAllOptions;


/**
 * @brief Interface IDBIndex
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IDBIndex)
 */
DECLARE_EMLITE_TYPE(IDBIndex, em_Val);

/**
 * @brief Gets the `name` property. 
*/
jb_String IDBIndex_name(const IDBIndex *self);

/**
 * @brief Sets the `name` property. 
*/
void IDBIndex_set_name(IDBIndex* self, jb_String * value);

/**
 * @brief Gets the `objectStore` property. 
*/
IDBObjectStore IDBIndex_objectStore(const IDBIndex *self);

/**
 * @brief Gets the `keyPath` property. 
*/
jb_Any IDBIndex_keyPath(const IDBIndex *self);

/**
 * @brief Gets the `multiEntry` property. 
*/
bool IDBIndex_multiEntry(const IDBIndex *self);

/**
 * @brief Gets the `unique` property. 
*/
bool IDBIndex_unique(const IDBIndex *self);

/**
 * @brief Calls the `get` method. 
*/
IDBRequest IDBIndex_get(IDBIndex* self , jb_Any * query);

/**
 * @brief Calls the `getKey` method. 
*/
IDBRequest IDBIndex_getKey(IDBIndex* self , jb_Any * query);

/**
 * @brief Calls the `getAll` method. 
*/
IDBRequest IDBIndex_getAll0(IDBIndex* self );

/**
 * @brief Calls the `getAll` method. 
*/
IDBRequest IDBIndex_getAll1(IDBIndex* self , jb_Any * queryOrOptions);

/**
 * @brief Calls the `getAll` method. 
*/
IDBRequest IDBIndex_getAll2(IDBIndex* self , jb_Any * queryOrOptions, unsigned long count);

/**
 * @brief Calls the `getAllKeys` method. 
*/
IDBRequest IDBIndex_getAllKeys0(IDBIndex* self );

/**
 * @brief Calls the `getAllKeys` method. 
*/
IDBRequest IDBIndex_getAllKeys1(IDBIndex* self , jb_Any * queryOrOptions);

/**
 * @brief Calls the `getAllKeys` method. 
*/
IDBRequest IDBIndex_getAllKeys2(IDBIndex* self , jb_Any * queryOrOptions, unsigned long count);

/**
 * @brief Calls the `getAllRecords` method. 
*/
IDBRequest IDBIndex_getAllRecords0(IDBIndex* self );

/**
 * @brief Calls the `getAllRecords` method. 
*/
IDBRequest IDBIndex_getAllRecords1(IDBIndex* self , IDBGetAllOptions * options);

/**
 * @brief Calls the `count` method. 
*/
IDBRequest IDBIndex_count0(IDBIndex* self );

/**
 * @brief Calls the `count` method. 
*/
IDBRequest IDBIndex_count1(IDBIndex* self , jb_Any * query);

/**
 * @brief Calls the `openCursor` method. 
*/
IDBRequest IDBIndex_openCursor0(IDBIndex* self );

/**
 * @brief Calls the `openCursor` method. 
*/
IDBRequest IDBIndex_openCursor1(IDBIndex* self , jb_Any * query);

/**
 * @brief Calls the `openCursor` method. 
*/
IDBRequest IDBIndex_openCursor2(IDBIndex* self , jb_Any * query, IDBCursorDirection * direction);

/**
 * @brief Calls the `openKeyCursor` method. 
*/
IDBRequest IDBIndex_openKeyCursor0(IDBIndex* self );

/**
 * @brief Calls the `openKeyCursor` method. 
*/
IDBRequest IDBIndex_openKeyCursor1(IDBIndex* self , jb_Any * query);

/**
 * @brief Calls the `openKeyCursor` method. 
*/
IDBRequest IDBIndex_openKeyCursor2(IDBIndex* self , jb_Any * query, IDBCursorDirection * direction);

#ifdef __cplusplus
}
#endif
