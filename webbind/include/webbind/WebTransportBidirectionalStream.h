#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportReceiveStream WebTransportReceiveStream;
typedef struct WebTransportSendStream WebTransportSendStream;


/**
 * @brief Interface WebTransportBidirectionalStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportBidirectionalStream)
 */
DECLARE_EMLITE_TYPE(WebTransportBidirectionalStream, em_Val);

/**
 * @brief Gets the `readable` property. 
*/
WebTransportReceiveStream WebTransportBidirectionalStream_readable(const WebTransportBidirectionalStream *self);

/**
 * @brief Gets the `writable` property. 
*/
WebTransportSendStream WebTransportBidirectionalStream_writable(const WebTransportBidirectionalStream *self);

#ifdef __cplusplus
}
#endif
