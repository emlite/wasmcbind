#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCRtpParameters.h"
#include "RTCRtpEncodingParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpSendParameters */
DECLARE_EMLITE_TYPE(RTCRtpSendParameters, RTCRtpParameters);

/** @brief Getter of the transactionId property */
jb_String RTCRtpSendParameters_transactionId(const RTCRtpSendParameters *self);

/** @brief Setter of the transactionId property */
void RTCRtpSendParameters_set_transactionId(RTCRtpSendParameters* self, jb_String * value);

/** @brief Getter of the encodings property */
jb_Array RTCRtpSendParameters_encodings(const RTCRtpSendParameters *self);

/** @brief Setter of the encodings property */
void RTCRtpSendParameters_set_encodings(RTCRtpSendParameters* self, jb_Array * value);

/** @brief Constructor of the RTCRtpSendParameters dictionary type */
RTCRtpSendParameters RTCRtpSendParameters_new();

#ifdef __cplusplus
}
#endif
