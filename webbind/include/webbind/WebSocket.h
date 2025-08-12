#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebSocket
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebSocket)
 */
DECLARE_EMLITE_TYPE(WebSocket, EventTarget);

/**
 * @brief Creates a new `WebSocket` object. 
*/
WebSocket WebSocket_new0(jb_String * url);

/**
 * @brief Creates a new `WebSocket` object. 
*/
WebSocket WebSocket_new1(jb_String * url, jb_Any * protocols);

/**
 * @brief Gets the `url` property. 
*/
jb_String WebSocket_url(const WebSocket *self);

/**
 * @brief Gets the `readyState` property. 
*/
unsigned short WebSocket_readyState(const WebSocket *self);

/**
 * @brief Gets the `bufferedAmount` property. 
*/
long long WebSocket_bufferedAmount(const WebSocket *self);

/**
 * @brief Gets the `onopen` property. 
*/
jb_Any WebSocket_onopen(const WebSocket *self);

/**
 * @brief Sets the `onopen` property. 
*/
void WebSocket_set_onopen(WebSocket* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any WebSocket_onerror(const WebSocket *self);

/**
 * @brief Sets the `onerror` property. 
*/
void WebSocket_set_onerror(WebSocket* self, jb_Any * value);

/**
 * @brief Gets the `onclose` property. 
*/
jb_Any WebSocket_onclose(const WebSocket *self);

/**
 * @brief Sets the `onclose` property. 
*/
void WebSocket_set_onclose(WebSocket* self, jb_Any * value);

/**
 * @brief Gets the `extensions` property. 
*/
jb_String WebSocket_extensions(const WebSocket *self);

/**
 * @brief Gets the `protocol` property. 
*/
jb_String WebSocket_protocol(const WebSocket *self);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined WebSocket_close0(WebSocket* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined WebSocket_close1(WebSocket* self , unsigned short code);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined WebSocket_close2(WebSocket* self , unsigned short code, jb_String * reason);

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any WebSocket_onmessage(const WebSocket *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void WebSocket_set_onmessage(WebSocket* self, jb_Any * value);

/**
 * @brief Gets the `binaryType` property. 
*/
BinaryType WebSocket_binaryType(const WebSocket *self);

/**
 * @brief Sets the `binaryType` property. 
*/
void WebSocket_set_binaryType(WebSocket* self, BinaryType * value);

/**
 * @brief Calls the `send` method. 
*/
jb_Undefined WebSocket_send(WebSocket* self , jb_Any * data);

#ifdef __cplusplus
}
#endif
