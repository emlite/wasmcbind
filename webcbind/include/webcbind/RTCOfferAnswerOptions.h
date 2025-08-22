#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCOfferAnswerOptions */
DECLARE_EMLITE_TYPE(RTCOfferAnswerOptions, em_Val);

/** @brief Constructor of the RTCOfferAnswerOptions dictionary type */
RTCOfferAnswerOptions RTCOfferAnswerOptions_new();

#ifdef __cplusplus
}
#endif
