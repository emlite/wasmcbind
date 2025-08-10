#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCRtpScriptTransformer RTCRtpScriptTransformer;

DECLARE_EMLITE_TYPE(RTCTransformEvent, Event);

RTCRtpScriptTransformer RTCTransformEvent_transformer(const RTCTransformEvent *self);

#ifdef __cplusplus
}
#endif
