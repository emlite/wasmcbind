#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCOfferAnswerOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCAnswerOptions, RTCOfferAnswerOptions);

RTCAnswerOptions RTCAnswerOptions_new();

#ifdef __cplusplus
}
#endif
