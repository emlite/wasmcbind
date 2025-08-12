#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpCodec.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpCodecParameters */
DECLARE_EMLITE_TYPE(RTCRtpCodecParameters, RTCRtpCodec);

/** @brief Getter of the payloadType property */
unsigned char RTCRtpCodecParameters_payloadType(const RTCRtpCodecParameters *self);

/** @brief Setter of the payloadType property */
void RTCRtpCodecParameters_set_payloadType(RTCRtpCodecParameters* self, unsigned char value);

/** @brief Constructor of the RTCRtpCodecParameters dictionary type */
RTCRtpCodecParameters RTCRtpCodecParameters_new();

#ifdef __cplusplus
}
#endif
