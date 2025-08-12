#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpCodingParameters */
DECLARE_EMLITE_TYPE(RTCRtpCodingParameters, em_Val);

/** @brief Getter of the rid property */
jb_String RTCRtpCodingParameters_rid(const RTCRtpCodingParameters *self);

/** @brief Setter of the rid property */
void RTCRtpCodingParameters_set_rid(RTCRtpCodingParameters* self, jb_String * value);

/** @brief Constructor of the RTCRtpCodingParameters dictionary type */
RTCRtpCodingParameters RTCRtpCodingParameters_new();

#ifdef __cplusplus
}
#endif
