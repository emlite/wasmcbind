#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessagePort MessagePort;


/**
 * @brief Interface MessageChannel
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MessageChannel)
 */
DECLARE_EMLITE_TYPE(MessageChannel, em_Val);

/**
 * @brief Creates a new `MessageChannel` object. 
*/
MessageChannel MessageChannel_new();

/**
 * @brief Gets the `port1` property. 
*/
MessagePort MessageChannel_port1(const MessageChannel *self);

/**
 * @brief Gets the `port2` property. 
*/
MessagePort MessageChannel_port2(const MessageChannel *self);

#ifdef __cplusplus
}
#endif
