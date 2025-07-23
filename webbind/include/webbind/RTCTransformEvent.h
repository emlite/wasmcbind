#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct RTCRtpScriptTransformer RTCRtpScriptTransformer;


DECLARE_EMLITE_TYPE(RTCTransformEvent, Event);

RTCRtpScriptTransformer RTCTransformEvent_transformer(const RTCTransformEvent *self);
