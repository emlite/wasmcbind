#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ExtendableMessageEventInit ExtendableMessageEventInit;
typedef struct MessagePort MessagePort;


/**
 * @brief Interface ExtendableMessageEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent)
 */
DECLARE_EMLITE_TYPE(ExtendableMessageEvent, ExtendableEvent);

/**
 * @brief Creates a new `ExtendableMessageEvent` object. 
*/
ExtendableMessageEvent ExtendableMessageEvent_new0(jb_String * type);

/**
 * @brief Creates a new `ExtendableMessageEvent` object. 
*/
ExtendableMessageEvent ExtendableMessageEvent_new1(jb_String * type, ExtendableMessageEventInit * eventInitDict);

/**
 * @brief Gets the `data` property. 
*/
jb_Any ExtendableMessageEvent_data(const ExtendableMessageEvent *self);

/**
 * @brief Gets the `origin` property. 
*/
jb_String ExtendableMessageEvent_origin(const ExtendableMessageEvent *self);

/**
 * @brief Gets the `lastEventId` property. 
*/
jb_String ExtendableMessageEvent_lastEventId(const ExtendableMessageEvent *self);

/**
 * @brief Gets the `source` property. 
*/
jb_Any ExtendableMessageEvent_source(const ExtendableMessageEvent *self);

/**
 * @brief Gets the `ports` property. 
*/
jb_Array ExtendableMessageEvent_ports(const ExtendableMessageEvent *self);

#ifdef __cplusplus
}
#endif
