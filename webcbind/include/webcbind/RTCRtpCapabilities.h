#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCRtpCodec.h"
#include "RTCRtpHeaderExtensionCapability.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpCapabilities */
DECLARE_EMLITE_TYPE(RTCRtpCapabilities, em_Val);

/** @brief Getter of the codecs property */
jb_Array RTCRtpCapabilities_codecs(const RTCRtpCapabilities *self);

/** @brief Setter of the codecs property */
void RTCRtpCapabilities_set_codecs(RTCRtpCapabilities* self, jb_Array * value);

/** @brief Getter of the headerExtensions property */
jb_Array RTCRtpCapabilities_headerExtensions(const RTCRtpCapabilities *self);

/** @brief Setter of the headerExtensions property */
void RTCRtpCapabilities_set_headerExtensions(RTCRtpCapabilities* self, jb_Array * value);

/** @brief Constructor of the RTCRtpCapabilities dictionary type */
RTCRtpCapabilities RTCRtpCapabilities_new();

#ifdef __cplusplus
}
#endif
