#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StructuredSerializeOptions StructuredSerializeOptions;


/**
 * @brief Interface MessagePort
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort)
 */
DECLARE_EMLITE_TYPE(MessagePort, EventTarget);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined MessagePort_postMessage0(MessagePort* self , jb_Any * message);

/**
 * @brief Calls the `postMessage` method. 
*/
jb_Undefined MessagePort_postMessage1(MessagePort* self , jb_Any * message, StructuredSerializeOptions * options);

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined MessagePort_start(MessagePort* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined MessagePort_close(MessagePort* self );

/**
 * @brief Gets the `onclose` property. 
*/
jb_Any MessagePort_onclose(const MessagePort *self);

/**
 * @brief Sets the `onclose` property. 
*/
void MessagePort_set_onclose(MessagePort* self, jb_Any * value);

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any MessagePort_onmessage(const MessagePort *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void MessagePort_set_onmessage(MessagePort* self, jb_Any * value);

/**
 * @brief Gets the `onmessageerror` property. 
*/
jb_Any MessagePort_onmessageerror(const MessagePort *self);

/**
 * @brief Sets the `onmessageerror` property. 
*/
void MessagePort_set_onmessageerror(MessagePort* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
