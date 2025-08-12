#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpContributingSource */
DECLARE_EMLITE_TYPE(RTCRtpContributingSource, em_Val);

/** @brief Getter of the timestamp property */
jb_Any RTCRtpContributingSource_timestamp(const RTCRtpContributingSource *self);

/** @brief Setter of the timestamp property */
void RTCRtpContributingSource_set_timestamp(RTCRtpContributingSource* self, jb_Any * value);

/** @brief Getter of the source property */
unsigned long RTCRtpContributingSource_source(const RTCRtpContributingSource *self);

/** @brief Setter of the source property */
void RTCRtpContributingSource_set_source(RTCRtpContributingSource* self, unsigned long value);

/** @brief Getter of the audioLevel property */
double RTCRtpContributingSource_audioLevel(const RTCRtpContributingSource *self);

/** @brief Setter of the audioLevel property */
void RTCRtpContributingSource_set_audioLevel(RTCRtpContributingSource* self, double value);

/** @brief Getter of the rtpTimestamp property */
unsigned long RTCRtpContributingSource_rtpTimestamp(const RTCRtpContributingSource *self);

/** @brief Setter of the rtpTimestamp property */
void RTCRtpContributingSource_set_rtpTimestamp(RTCRtpContributingSource* self, unsigned long value);

/** @brief Constructor of the RTCRtpContributingSource dictionary type */
RTCRtpContributingSource RTCRtpContributingSource_new();

#ifdef __cplusplus
}
#endif
