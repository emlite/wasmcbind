#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCOfferAnswerOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCAnswerOptions */
DECLARE_EMLITE_TYPE(RTCAnswerOptions, RTCOfferAnswerOptions);

/** @brief Constructor of the RTCAnswerOptions dictionary type */
RTCAnswerOptions RTCAnswerOptions_new();

#ifdef __cplusplus
}
#endif
