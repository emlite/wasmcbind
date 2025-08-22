#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IDBVersionChangeEventInit IDBVersionChangeEventInit;


/**
 * @brief Interface IDBVersionChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IDBVersionChangeEvent)
 */
DECLARE_EMLITE_TYPE(IDBVersionChangeEvent, Event);

/**
 * @brief Creates a new `IDBVersionChangeEvent` object. 
*/
IDBVersionChangeEvent IDBVersionChangeEvent_new0(jb_String * type);

/**
 * @brief Creates a new `IDBVersionChangeEvent` object. 
*/
IDBVersionChangeEvent IDBVersionChangeEvent_new1(jb_String * type, IDBVersionChangeEventInit * eventInitDict);

/**
 * @brief Gets the `oldVersion` property. 
*/
long long IDBVersionChangeEvent_oldVersion(const IDBVersionChangeEvent *self);

/**
 * @brief Gets the `newVersion` property. 
*/
long long IDBVersionChangeEvent_newVersion(const IDBVersionChangeEvent *self);

#ifdef __cplusplus
}
#endif
