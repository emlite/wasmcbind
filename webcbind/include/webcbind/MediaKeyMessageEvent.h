#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaKeyMessageEventInit MediaKeyMessageEventInit;


/**
 * @brief Interface MediaKeyMessageEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyMessageEvent)
 */
DECLARE_EMLITE_TYPE(MediaKeyMessageEvent, Event);

/**
 * @brief Creates a new `MediaKeyMessageEvent` object. 
*/
MediaKeyMessageEvent MediaKeyMessageEvent_new(jb_String * type, MediaKeyMessageEventInit * eventInitDict);

/**
 * @brief Gets the `messageType` property. 
*/
MediaKeyMessageType MediaKeyMessageEvent_messageType(const MediaKeyMessageEvent *self);

/**
 * @brief Gets the `message` property. 
*/
jb_ArrayBuffer MediaKeyMessageEvent_message(const MediaKeyMessageEvent *self);

#ifdef __cplusplus
}
#endif
