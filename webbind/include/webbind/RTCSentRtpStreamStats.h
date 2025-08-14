#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpStreamStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCSentRtpStreamStats */
DECLARE_EMLITE_TYPE(RTCSentRtpStreamStats, RTCRtpStreamStats);

/** @brief Getter of the packetsSent property */
long long RTCSentRtpStreamStats_packetsSent(const RTCSentRtpStreamStats *self);

/** @brief Setter of the packetsSent property */
void RTCSentRtpStreamStats_set_packetsSent(RTCSentRtpStreamStats* self, long long value);

/** @brief Getter of the bytesSent property */
long long RTCSentRtpStreamStats_bytesSent(const RTCSentRtpStreamStats *self);

/** @brief Setter of the bytesSent property */
void RTCSentRtpStreamStats_set_bytesSent(RTCSentRtpStreamStats* self, long long value);

/** @brief Constructor of the RTCSentRtpStreamStats dictionary type */
RTCSentRtpStreamStats RTCSentRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
