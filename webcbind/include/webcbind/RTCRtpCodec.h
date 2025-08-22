#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpCodec */
DECLARE_EMLITE_TYPE(RTCRtpCodec, em_Val);

/** @brief Getter of the mimeType property */
jb_String RTCRtpCodec_mimeType(const RTCRtpCodec *self);

/** @brief Setter of the mimeType property */
void RTCRtpCodec_set_mimeType(RTCRtpCodec* self, jb_String * value);

/** @brief Getter of the clockRate property */
unsigned long RTCRtpCodec_clockRate(const RTCRtpCodec *self);

/** @brief Setter of the clockRate property */
void RTCRtpCodec_set_clockRate(RTCRtpCodec* self, unsigned long value);

/** @brief Getter of the channels property */
unsigned short RTCRtpCodec_channels(const RTCRtpCodec *self);

/** @brief Setter of the channels property */
void RTCRtpCodec_set_channels(RTCRtpCodec* self, unsigned short value);

/** @brief Getter of the sdpFmtpLine property */
jb_String RTCRtpCodec_sdpFmtpLine(const RTCRtpCodec *self);

/** @brief Setter of the sdpFmtpLine property */
void RTCRtpCodec_set_sdpFmtpLine(RTCRtpCodec* self, jb_String * value);

/** @brief Constructor of the RTCRtpCodec dictionary type */
RTCRtpCodec RTCRtpCodec_new();

#ifdef __cplusplus
}
#endif
