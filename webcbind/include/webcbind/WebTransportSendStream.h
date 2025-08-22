#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WritableStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportSendGroup WebTransportSendGroup;
typedef struct WebTransportSendStreamStats WebTransportSendStreamStats;
typedef struct WebTransportWriter WebTransportWriter;


/**
 * @brief Interface WebTransportSendStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportSendStream)
 */
DECLARE_EMLITE_TYPE(WebTransportSendStream, WritableStream);

/**
 * @brief Gets the `sendGroup` property. 
*/
WebTransportSendGroup WebTransportSendStream_sendGroup(const WebTransportSendStream *self);

/**
 * @brief Sets the `sendGroup` property. 
*/
void WebTransportSendStream_set_sendGroup(WebTransportSendStream* self, WebTransportSendGroup * value);

/**
 * @brief Gets the `sendOrder` property. 
*/
long long WebTransportSendStream_sendOrder(const WebTransportSendStream *self);

/**
 * @brief Sets the `sendOrder` property. 
*/
void WebTransportSendStream_set_sendOrder(WebTransportSendStream* self, long long value);

/**
 * @brief Calls the `getStats` method. 
*/
jb_Promise WebTransportSendStream_getStats(WebTransportSendStream* self );

/**
 * @brief Calls the `getWriter` method. 
*/
WebTransportWriter WebTransportSendStream_getWriter(WebTransportSendStream* self );

#ifdef __cplusplus
}
#endif
