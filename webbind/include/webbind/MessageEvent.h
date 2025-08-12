#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessageEventInit MessageEventInit;
typedef struct MessagePort MessagePort;


/**
 * @brief Interface MessageEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent)
 */
DECLARE_EMLITE_TYPE(MessageEvent, Event);

/**
 * @brief Creates a new `MessageEvent` object. 
*/
MessageEvent MessageEvent_new0(jb_String * type);

/**
 * @brief Creates a new `MessageEvent` object. 
*/
MessageEvent MessageEvent_new1(jb_String * type, MessageEventInit * eventInitDict);

/**
 * @brief Gets the `data` property. 
*/
jb_Any MessageEvent_data(const MessageEvent *self);

/**
 * @brief Gets the `origin` property. 
*/
jb_String MessageEvent_origin(const MessageEvent *self);

/**
 * @brief Gets the `lastEventId` property. 
*/
jb_String MessageEvent_lastEventId(const MessageEvent *self);

/**
 * @brief Gets the `source` property. 
*/
jb_Any MessageEvent_source(const MessageEvent *self);

/**
 * @brief Gets the `ports` property. 
*/
jb_Array MessageEvent_ports(const MessageEvent *self);

/**
 * @brief Calls the `initMessageEvent` method. 
*/
jb_Undefined MessageEvent_initMessageEvent0(MessageEvent* self , jb_String * type);

/**
 * @brief Calls the `initMessageEvent` method. 
*/
jb_Undefined MessageEvent_initMessageEvent1(MessageEvent* self , jb_String * type, bool bubbles);

/**
 * @brief Calls the `initMessageEvent` method. 
*/
jb_Undefined MessageEvent_initMessageEvent2(MessageEvent* self , jb_String * type, bool bubbles, bool cancelable);

/**
 * @brief Calls the `initMessageEvent` method. 
*/
jb_Undefined MessageEvent_initMessageEvent3(MessageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * data);

/**
 * @brief Calls the `initMessageEvent` method. 
*/
jb_Undefined MessageEvent_initMessageEvent4(MessageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * data, jb_String * origin);

/**
 * @brief Calls the `initMessageEvent` method. 
*/
jb_Undefined MessageEvent_initMessageEvent5(MessageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * data, jb_String * origin, jb_String * lastEventId);

/**
 * @brief Calls the `initMessageEvent` method. 
*/
jb_Undefined MessageEvent_initMessageEvent6(MessageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * data, jb_String * origin, jb_String * lastEventId, jb_Any * source);

/**
 * @brief Calls the `initMessageEvent` method. 
*/
jb_Undefined MessageEvent_initMessageEvent7(MessageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_Any * data, jb_String * origin, jb_String * lastEventId, jb_Any * source, jb_Array * ports);

#ifdef __cplusplus
}
#endif
