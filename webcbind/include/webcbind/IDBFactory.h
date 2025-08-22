#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IDBOpenDBRequest IDBOpenDBRequest;
typedef struct IDBDatabaseInfo IDBDatabaseInfo;


/**
 * @brief Interface IDBFactory
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IDBFactory)
 */
DECLARE_EMLITE_TYPE(IDBFactory, em_Val);

/**
 * @brief Calls the `open` method. 
*/
IDBOpenDBRequest IDBFactory_open0(IDBFactory* self , jb_String * name);

/**
 * @brief Calls the `open` method. 
*/
IDBOpenDBRequest IDBFactory_open1(IDBFactory* self , jb_String * name, long long version);

/**
 * @brief Calls the `deleteDatabase` method. 
*/
IDBOpenDBRequest IDBFactory_deleteDatabase(IDBFactory* self , jb_String * name);

/**
 * @brief Calls the `databases` method. 
*/
jb_Promise IDBFactory_databases(IDBFactory* self );

/**
 * @brief Calls the `cmp` method. 
*/
short IDBFactory_cmp(IDBFactory* self , jb_Any * first, jb_Any * second);

#ifdef __cplusplus
}
#endif
