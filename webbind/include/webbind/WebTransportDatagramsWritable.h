#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WritableStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportSendGroup WebTransportSendGroup;


/**
 * @brief Interface WebTransportDatagramsWritable
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportDatagramsWritable)
 */
DECLARE_EMLITE_TYPE(WebTransportDatagramsWritable, WritableStream);

/**
 * @brief Gets the `sendGroup` property. 
*/
WebTransportSendGroup WebTransportDatagramsWritable_sendGroup(const WebTransportDatagramsWritable *self);

/**
 * @brief Sets the `sendGroup` property. 
*/
void WebTransportDatagramsWritable_set_sendGroup(WebTransportDatagramsWritable* self, WebTransportSendGroup * value);

/**
 * @brief Gets the `sendOrder` property. 
*/
long long WebTransportDatagramsWritable_sendOrder(const WebTransportDatagramsWritable *self);

/**
 * @brief Sets the `sendOrder` property. 
*/
void WebTransportDatagramsWritable_set_sendOrder(WebTransportDatagramsWritable* self, long long value);

#ifdef __cplusplus
}
#endif
