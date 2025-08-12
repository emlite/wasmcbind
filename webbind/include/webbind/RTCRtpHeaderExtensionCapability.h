#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpHeaderExtensionCapability */
DECLARE_EMLITE_TYPE(RTCRtpHeaderExtensionCapability, em_Val);

/** @brief Getter of the uri property */
jb_String RTCRtpHeaderExtensionCapability_uri(const RTCRtpHeaderExtensionCapability *self);

/** @brief Setter of the uri property */
void RTCRtpHeaderExtensionCapability_set_uri(RTCRtpHeaderExtensionCapability* self, jb_String * value);

/** @brief Constructor of the RTCRtpHeaderExtensionCapability dictionary type */
RTCRtpHeaderExtensionCapability RTCRtpHeaderExtensionCapability_new();

#ifdef __cplusplus
}
#endif
