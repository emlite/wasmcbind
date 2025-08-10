#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpContributingSource.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpSynchronizationSource, RTCRtpContributingSource);

RTCRtpSynchronizationSource RTCRtpSynchronizationSource_new();

#ifdef __cplusplus
}
#endif
