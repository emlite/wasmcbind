#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaEncryptedEventInit MediaEncryptedEventInit;


/**
 * @brief Interface MediaEncryptedEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaEncryptedEvent)
 */
DECLARE_EMLITE_TYPE(MediaEncryptedEvent, Event);

/**
 * @brief Creates a new `MediaEncryptedEvent` object. 
*/
MediaEncryptedEvent MediaEncryptedEvent_new0(jb_String * type);

/**
 * @brief Creates a new `MediaEncryptedEvent` object. 
*/
MediaEncryptedEvent MediaEncryptedEvent_new1(jb_String * type, MediaEncryptedEventInit * eventInitDict);

/**
 * @brief Gets the `initDataType` property. 
*/
jb_String MediaEncryptedEvent_initDataType(const MediaEncryptedEvent *self);

/**
 * @brief Gets the `initData` property. 
*/
jb_ArrayBuffer MediaEncryptedEvent_initData(const MediaEncryptedEvent *self);

#ifdef __cplusplus
}
#endif
