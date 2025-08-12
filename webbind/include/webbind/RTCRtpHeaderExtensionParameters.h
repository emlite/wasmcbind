#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCRtpHeaderExtensionParameters */
DECLARE_EMLITE_TYPE(RTCRtpHeaderExtensionParameters, em_Val);

/** @brief Getter of the uri property */
jb_String RTCRtpHeaderExtensionParameters_uri(const RTCRtpHeaderExtensionParameters *self);

/** @brief Setter of the uri property */
void RTCRtpHeaderExtensionParameters_set_uri(RTCRtpHeaderExtensionParameters* self, jb_String * value);

/** @brief Getter of the id property */
unsigned short RTCRtpHeaderExtensionParameters_id(const RTCRtpHeaderExtensionParameters *self);

/** @brief Setter of the id property */
void RTCRtpHeaderExtensionParameters_set_id(RTCRtpHeaderExtensionParameters* self, unsigned short value);

/** @brief Getter of the encrypted property */
bool RTCRtpHeaderExtensionParameters_encrypted(const RTCRtpHeaderExtensionParameters *self);

/** @brief Setter of the encrypted property */
void RTCRtpHeaderExtensionParameters_set_encrypted(RTCRtpHeaderExtensionParameters* self, bool value);

/** @brief Constructor of the RTCRtpHeaderExtensionParameters dictionary type */
RTCRtpHeaderExtensionParameters RTCRtpHeaderExtensionParameters_new();

#ifdef __cplusplus
}
#endif
