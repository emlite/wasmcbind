#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpReceiveParameters, RTCRtpParameters);

RTCRtpReceiveParameters RTCRtpReceiveParameters_new();

#ifdef __cplusplus
}
#endif
