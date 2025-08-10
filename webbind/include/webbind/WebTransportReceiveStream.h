#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ReadableStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportReceiveStreamStats WebTransportReceiveStreamStats;

DECLARE_EMLITE_TYPE(WebTransportReceiveStream, ReadableStream);

jb_Promise WebTransportReceiveStream_getStats(WebTransportReceiveStream* self );

#ifdef __cplusplus
}
#endif
