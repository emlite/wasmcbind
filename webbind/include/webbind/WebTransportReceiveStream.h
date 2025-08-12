#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReadableStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportReceiveStreamStats WebTransportReceiveStreamStats;


/**
 * @brief Interface WebTransportReceiveStream
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportReceiveStream)
 */
DECLARE_EMLITE_TYPE(WebTransportReceiveStream, ReadableStream);

/**
 * @brief Calls the `getStats` method. 
*/
jb_Promise WebTransportReceiveStream_getStats(WebTransportReceiveStream* self );

#ifdef __cplusplus
}
#endif
