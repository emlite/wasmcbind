#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpReceiveParameters */
DECLARE_EMLITE_TYPE(RTCRtpReceiveParameters, RTCRtpParameters);

/** @brief Constructor of the RTCRtpReceiveParameters dictionary type */
RTCRtpReceiveParameters RTCRtpReceiveParameters_new();

#ifdef __cplusplus
}
#endif
