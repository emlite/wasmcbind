#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface BroadcastChannel
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BroadcastChannel)
 */
DECLARE_EMLITE_TYPE(BroadcastChannel, EventTarget);

/**
 * @brief Creates a new `BroadcastChannel` object. 
*/
BroadcastChannel BroadcastChannel_new(jb_String * name);

/**
 * @brief Gets the `name` property. 
*/
jb_String BroadcastChannel_name(const BroadcastChannel *self);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined BroadcastChannel_postMessage(BroadcastChannel* self , jb_Any * message);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined BroadcastChannel_close(BroadcastChannel* self );

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any BroadcastChannel_onmessage(const BroadcastChannel *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void BroadcastChannel_set_onmessage(BroadcastChannel* self, jb_Any * value);

/**
 * @brief Gets the `onmessageerror` property. 
*/
jb_Any BroadcastChannel_onmessageerror(const BroadcastChannel *self);

/**
 * @brief Sets the `onmessageerror` property. 
*/
void BroadcastChannel_set_onmessageerror(BroadcastChannel* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
