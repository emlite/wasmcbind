#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMException DOMException;
typedef struct IDBTransaction IDBTransaction;


/**
 * @brief Interface IDBRequest
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequest)
 */
DECLARE_EMLITE_TYPE(IDBRequest, EventTarget);

/**
 * @brief Gets the `result` property. 
*/
jb_Any IDBRequest_result(const IDBRequest *self);

/**
 * @brief Gets the `error` property. 
*/
DOMException IDBRequest_error(const IDBRequest *self);

/**
 * @brief Gets the `source` property. 
*/
jb_Any IDBRequest_source(const IDBRequest *self);

/**
 * @brief Gets the `transaction` property. 
*/
IDBTransaction IDBRequest_transaction(const IDBRequest *self);

/**
 * @brief Gets the `readyState` property. 
*/
IDBRequestReadyState IDBRequest_readyState(const IDBRequest *self);

/**
 * @brief Gets the `onsuccess` property. 
*/
jb_Any IDBRequest_onsuccess(const IDBRequest *self);

/**
 * @brief Sets the `onsuccess` property. 
*/
void IDBRequest_set_onsuccess(IDBRequest* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any IDBRequest_onerror(const IDBRequest *self);

/**
 * @brief Sets the `onerror` property. 
*/
void IDBRequest_set_onerror(IDBRequest* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
