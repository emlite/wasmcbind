#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StorageEventInit StorageEventInit;
typedef struct Storage Storage;


/**
 * @brief Interface StorageEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/StorageEvent)
 */
DECLARE_EMLITE_TYPE(StorageEvent, Event);

/**
 * @brief Creates a new `StorageEvent` object. 
*/
StorageEvent StorageEvent_new0(jb_String * type);

/**
 * @brief Creates a new `StorageEvent` object. 
*/
StorageEvent StorageEvent_new1(jb_String * type, StorageEventInit * eventInitDict);

/**
 * @brief Gets the `key` property. 
*/
jb_String StorageEvent_key(const StorageEvent *self);

/**
 * @brief Gets the `oldValue` property. 
*/
jb_String StorageEvent_oldValue(const StorageEvent *self);

/**
 * @brief Gets the `newValue` property. 
*/
jb_String StorageEvent_newValue(const StorageEvent *self);

/**
 * @brief Gets the `url` property. 
*/
jb_String StorageEvent_url(const StorageEvent *self);

/**
 * @brief Gets the `storageArea` property. 
*/
Storage StorageEvent_storageArea(const StorageEvent *self);

/**
 * @brief Calls the `initStorageEvent` method. 
*/
jb_Undefined StorageEvent_initStorageEvent0(StorageEvent* self , jb_String * type);

/**
 * @brief Calls the `initStorageEvent` method. 
*/
jb_Undefined StorageEvent_initStorageEvent1(StorageEvent* self , jb_String * type, bool bubbles);

/**
 * @brief Calls the `initStorageEvent` method. 
*/
jb_Undefined StorageEvent_initStorageEvent2(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable);

/**
 * @brief Calls the `initStorageEvent` method. 
*/
jb_Undefined StorageEvent_initStorageEvent3(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key);

/**
 * @brief Calls the `initStorageEvent` method. 
*/
jb_Undefined StorageEvent_initStorageEvent4(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key, jb_String * oldValue);

/**
 * @brief Calls the `initStorageEvent` method. 
*/
jb_Undefined StorageEvent_initStorageEvent5(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key, jb_String * oldValue, jb_String * newValue);

/**
 * @brief Calls the `initStorageEvent` method. 
*/
jb_Undefined StorageEvent_initStorageEvent6(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key, jb_String * oldValue, jb_String * newValue, jb_String * url);

/**
 * @brief Calls the `initStorageEvent` method. 
*/
jb_Undefined StorageEvent_initStorageEvent7(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key, jb_String * oldValue, jb_String * newValue, jb_String * url, Storage * storageArea);

#ifdef __cplusplus
}
#endif
