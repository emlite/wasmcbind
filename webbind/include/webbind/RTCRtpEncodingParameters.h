#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpCodingParameters.h"
#include "RTCRtpCodec.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpEncodingParameters */
DECLARE_EMLITE_TYPE(RTCRtpEncodingParameters, RTCRtpCodingParameters);

/** @brief Getter of the active property */
bool RTCRtpEncodingParameters_active(const RTCRtpEncodingParameters *self);

/** @brief Setter of the active property */
void RTCRtpEncodingParameters_set_active(RTCRtpEncodingParameters* self, bool value);

/** @brief Getter of the codec property */
RTCRtpCodec RTCRtpEncodingParameters_codec(const RTCRtpEncodingParameters *self);

/** @brief Setter of the codec property */
void RTCRtpEncodingParameters_set_codec(RTCRtpEncodingParameters* self, RTCRtpCodec * value);

/** @brief Getter of the maxBitrate property */
unsigned long RTCRtpEncodingParameters_maxBitrate(const RTCRtpEncodingParameters *self);

/** @brief Setter of the maxBitrate property */
void RTCRtpEncodingParameters_set_maxBitrate(RTCRtpEncodingParameters* self, unsigned long value);

/** @brief Getter of the maxFramerate property */
double RTCRtpEncodingParameters_maxFramerate(const RTCRtpEncodingParameters *self);

/** @brief Setter of the maxFramerate property */
void RTCRtpEncodingParameters_set_maxFramerate(RTCRtpEncodingParameters* self, double value);

/** @brief Getter of the scaleResolutionDownBy property */
double RTCRtpEncodingParameters_scaleResolutionDownBy(const RTCRtpEncodingParameters *self);

/** @brief Setter of the scaleResolutionDownBy property */
void RTCRtpEncodingParameters_set_scaleResolutionDownBy(RTCRtpEncodingParameters* self, double value);

/** @brief Constructor of the RTCRtpEncodingParameters dictionary type */
RTCRtpEncodingParameters RTCRtpEncodingParameters_new();

#ifdef __cplusplus
}
#endif
