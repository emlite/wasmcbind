#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportSendStreamStats WebTransportSendStreamStats;

DECLARE_EMLITE_TYPE(WebTransportSendGroup, em_Val);

jb_Promise WebTransportSendGroup_getStats(WebTransportSendGroup* self );

#ifdef __cplusplus
}
#endif
