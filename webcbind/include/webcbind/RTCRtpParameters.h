#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCRtpHeaderExtensionParameters.h"
#include "RTCRtcpParameters.h"
#include "RTCRtpCodecParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpParameters */
DECLARE_EMLITE_TYPE(RTCRtpParameters, em_Val);

/** @brief Getter of the headerExtensions property */
jb_Array RTCRtpParameters_headerExtensions(const RTCRtpParameters *self);

/** @brief Setter of the headerExtensions property */
void RTCRtpParameters_set_headerExtensions(RTCRtpParameters* self, jb_Array * value);

/** @brief Getter of the rtcp property */
RTCRtcpParameters RTCRtpParameters_rtcp(const RTCRtpParameters *self);

/** @brief Setter of the rtcp property */
void RTCRtpParameters_set_rtcp(RTCRtpParameters* self, RTCRtcpParameters * value);

/** @brief Getter of the codecs property */
jb_Array RTCRtpParameters_codecs(const RTCRtpParameters *self);

/** @brief Setter of the codecs property */
void RTCRtpParameters_set_codecs(RTCRtpParameters* self, jb_Array * value);

/** @brief Constructor of the RTCRtpParameters dictionary type */
RTCRtpParameters RTCRtpParameters_new();

#ifdef __cplusplus
}
#endif
