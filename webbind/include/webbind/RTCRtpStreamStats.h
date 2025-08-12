#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpStreamStats */
DECLARE_EMLITE_TYPE(RTCRtpStreamStats, RTCStats);

/** @brief Getter of the ssrc property */
unsigned long RTCRtpStreamStats_ssrc(const RTCRtpStreamStats *self);

/** @brief Setter of the ssrc property */
void RTCRtpStreamStats_set_ssrc(RTCRtpStreamStats* self, unsigned long value);

/** @brief Getter of the kind property */
jb_String RTCRtpStreamStats_kind(const RTCRtpStreamStats *self);

/** @brief Setter of the kind property */
void RTCRtpStreamStats_set_kind(RTCRtpStreamStats* self, jb_String * value);

/** @brief Getter of the transportId property */
jb_String RTCRtpStreamStats_transportId(const RTCRtpStreamStats *self);

/** @brief Setter of the transportId property */
void RTCRtpStreamStats_set_transportId(RTCRtpStreamStats* self, jb_String * value);

/** @brief Getter of the codecId property */
jb_String RTCRtpStreamStats_codecId(const RTCRtpStreamStats *self);

/** @brief Setter of the codecId property */
void RTCRtpStreamStats_set_codecId(RTCRtpStreamStats* self, jb_String * value);

/** @brief Constructor of the RTCRtpStreamStats dictionary type */
RTCRtpStreamStats RTCRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
