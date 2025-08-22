#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "IDBRequest.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface IDBOpenDBRequest
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IDBOpenDBRequest)
 */
DECLARE_EMLITE_TYPE(IDBOpenDBRequest, IDBRequest);

/**
 * @brief Gets the `onblocked` property. 
*/
jb_Any IDBOpenDBRequest_onblocked(const IDBOpenDBRequest *self);

/**
 * @brief Sets the `onblocked` property. 
*/
void IDBOpenDBRequest_set_onblocked(IDBOpenDBRequest* self, jb_Any * value);

/**
 * @brief Gets the `onupgradeneeded` property. 
*/
jb_Any IDBOpenDBRequest_onupgradeneeded(const IDBOpenDBRequest *self);

/**
 * @brief Sets the `onupgradeneeded` property. 
*/
void IDBOpenDBRequest_set_onupgradeneeded(IDBOpenDBRequest* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
