#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMStringList DOMStringList;
typedef struct IDBDatabase IDBDatabase;
typedef struct DOMException DOMException;
typedef struct IDBObjectStore IDBObjectStore;


/**
 * @brief Interface IDBTransaction
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransaction)
 */
DECLARE_EMLITE_TYPE(IDBTransaction, EventTarget);

/**
 * @brief Gets the `objectStoreNames` property. 
*/
DOMStringList IDBTransaction_objectStoreNames(const IDBTransaction *self);

/**
 * @brief Gets the `mode` property. 
*/
IDBTransactionMode IDBTransaction_mode(const IDBTransaction *self);

/**
 * @brief Gets the `durability` property. 
*/
IDBTransactionDurability IDBTransaction_durability(const IDBTransaction *self);

/**
 * @brief Gets the `db` property. 
*/
IDBDatabase IDBTransaction_db(const IDBTransaction *self);

/**
 * @brief Gets the `error` property. 
*/
DOMException IDBTransaction_error(const IDBTransaction *self);

/**
 * @brief Calls the `objectStore` method. 
*/
IDBObjectStore IDBTransaction_objectStore(IDBTransaction* self , jb_String * name);

/**
 * @brief Calls the `commit` method. 
*/
jb_Undefined IDBTransaction_commit(IDBTransaction* self );

/**
 * @brief Calls the `abort` method. 
*/
jb_Undefined IDBTransaction_abort(IDBTransaction* self );

/**
 * @brief Gets the `onabort` property. 
*/
jb_Any IDBTransaction_onabort(const IDBTransaction *self);

/**
 * @brief Sets the `onabort` property. 
*/
void IDBTransaction_set_onabort(IDBTransaction* self, jb_Any * value);

/**
 * @brief Gets the `oncomplete` property. 
*/
jb_Any IDBTransaction_oncomplete(const IDBTransaction *self);

/**
 * @brief Sets the `oncomplete` property. 
*/
void IDBTransaction_set_oncomplete(IDBTransaction* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any IDBTransaction_onerror(const IDBTransaction *self);

/**
 * @brief Sets the `onerror` property. 
*/
void IDBTransaction_set_onerror(IDBTransaction* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
