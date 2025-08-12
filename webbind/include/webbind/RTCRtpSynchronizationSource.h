#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpContributingSource.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpSynchronizationSource */
DECLARE_EMLITE_TYPE(RTCRtpSynchronizationSource, RTCRtpContributingSource);

/** @brief Constructor of the RTCRtpSynchronizationSource dictionary type */
RTCRtpSynchronizationSource RTCRtpSynchronizationSource_new();

#ifdef __cplusplus
}
#endif
