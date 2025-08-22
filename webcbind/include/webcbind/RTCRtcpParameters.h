#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtcpParameters */
DECLARE_EMLITE_TYPE(RTCRtcpParameters, em_Val);

/** @brief Getter of the cname property */
jb_String RTCRtcpParameters_cname(const RTCRtcpParameters *self);

/** @brief Setter of the cname property */
void RTCRtcpParameters_set_cname(RTCRtcpParameters* self, jb_String * value);

/** @brief Getter of the reducedSize property */
bool RTCRtcpParameters_reducedSize(const RTCRtcpParameters *self);

/** @brief Setter of the reducedSize property */
void RTCRtcpParameters_set_reducedSize(RTCRtcpParameters* self, bool value);

/** @brief Constructor of the RTCRtcpParameters dictionary type */
RTCRtcpParameters RTCRtcpParameters_new();

#ifdef __cplusplus
}
#endif
