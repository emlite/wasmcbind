#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCCodecStats */
DECLARE_EMLITE_TYPE(RTCCodecStats, RTCStats);

/** @brief Getter of the payloadType property */
unsigned long RTCCodecStats_payloadType(const RTCCodecStats *self);

/** @brief Setter of the payloadType property */
void RTCCodecStats_set_payloadType(RTCCodecStats* self, unsigned long value);

/** @brief Getter of the transportId property */
jb_String RTCCodecStats_transportId(const RTCCodecStats *self);

/** @brief Setter of the transportId property */
void RTCCodecStats_set_transportId(RTCCodecStats* self, jb_String * value);

/** @brief Getter of the mimeType property */
jb_String RTCCodecStats_mimeType(const RTCCodecStats *self);

/** @brief Setter of the mimeType property */
void RTCCodecStats_set_mimeType(RTCCodecStats* self, jb_String * value);

/** @brief Getter of the clockRate property */
unsigned long RTCCodecStats_clockRate(const RTCCodecStats *self);

/** @brief Setter of the clockRate property */
void RTCCodecStats_set_clockRate(RTCCodecStats* self, unsigned long value);

/** @brief Getter of the channels property */
unsigned long RTCCodecStats_channels(const RTCCodecStats *self);

/** @brief Setter of the channels property */
void RTCCodecStats_set_channels(RTCCodecStats* self, unsigned long value);

/** @brief Getter of the sdpFmtpLine property */
jb_String RTCCodecStats_sdpFmtpLine(const RTCCodecStats *self);

/** @brief Setter of the sdpFmtpLine property */
void RTCCodecStats_set_sdpFmtpLine(RTCCodecStats* self, jb_String * value);

/** @brief Constructor of the RTCCodecStats dictionary type */
RTCCodecStats RTCCodecStats_new();

#ifdef __cplusplus
}
#endif
