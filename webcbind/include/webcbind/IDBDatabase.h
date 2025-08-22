#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMStringList DOMStringList;
typedef struct IDBTransaction IDBTransaction;
typedef struct IDBTransactionOptions IDBTransactionOptions;
typedef struct IDBObjectStore IDBObjectStore;
typedef struct IDBObjectStoreParameters IDBObjectStoreParameters;


/**
 * @brief Interface IDBDatabase
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IDBDatabase)
 */
DECLARE_EMLITE_TYPE(IDBDatabase, EventTarget);

/**
 * @brief Gets the `name` property. 
*/
jb_String IDBDatabase_name(const IDBDatabase *self);

/**
 * @brief Gets the `version` property. 
*/
long long IDBDatabase_version(const IDBDatabase *self);

/**
 * @brief Gets the `objectStoreNames` property. 
*/
DOMStringList IDBDatabase_objectStoreNames(const IDBDatabase *self);

/**
 * @brief Calls the `transaction` method. 
*/
IDBTransaction IDBDatabase_transaction0(IDBDatabase* self , jb_Any * storeNames);

/**
 * @brief Calls the `transaction` method. 
*/
IDBTransaction IDBDatabase_transaction1(IDBDatabase* self , jb_Any * storeNames, IDBTransactionMode * mode);

/**
 * @brief Calls the `transaction` method. 
*/
IDBTransaction IDBDatabase_transaction2(IDBDatabase* self , jb_Any * storeNames, IDBTransactionMode * mode, IDBTransactionOptions * options);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined IDBDatabase_close(IDBDatabase* self );

/**
 * @brief Calls the `createObjectStore` method. 
*/
IDBObjectStore IDBDatabase_createObjectStore0(IDBDatabase* self , jb_String * name);

/**
 * @brief Calls the `createObjectStore` method. 
*/
IDBObjectStore IDBDatabase_createObjectStore1(IDBDatabase* self , jb_String * name, IDBObjectStoreParameters * options);

/**
 * @brief Calls the `deleteObjectStore` method. 
*/
jb_Undefined IDBDatabase_deleteObjectStore(IDBDatabase* self , jb_String * name);

/**
 * @brief Gets the `onabort` property. 
*/
jb_Any IDBDatabase_onabort(const IDBDatabase *self);

/**
 * @brief Sets the `onabort` property. 
*/
void IDBDatabase_set_onabort(IDBDatabase* self, jb_Any * value);

/**
 * @brief Gets the `onclose` property. 
*/
jb_Any IDBDatabase_onclose(const IDBDatabase *self);

/**
 * @brief Sets the `onclose` property. 
*/
void IDBDatabase_set_onclose(IDBDatabase* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any IDBDatabase_onerror(const IDBDatabase *self);

/**
 * @brief Sets the `onerror` property. 
*/
void IDBDatabase_set_onerror(IDBDatabase* self, jb_Any * value);

/**
 * @brief Gets the `onversionchange` property. 
*/
jb_Any IDBDatabase_onversionchange(const IDBDatabase *self);

/**
 * @brief Sets the `onversionchange` property. 
*/
void IDBDatabase_set_onversionchange(IDBDatabase* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
