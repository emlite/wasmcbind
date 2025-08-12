#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCSetParameterOptions */
DECLARE_EMLITE_TYPE(RTCSetParameterOptions, em_Val);

/** @brief Constructor of the RTCSetParameterOptions dictionary type */
RTCSetParameterOptions RTCSetParameterOptions_new();

#ifdef __cplusplus
}
#endif
