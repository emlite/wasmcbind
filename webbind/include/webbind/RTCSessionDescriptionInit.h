#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCSessionDescriptionInit */
DECLARE_EMLITE_TYPE(RTCSessionDescriptionInit, em_Val);

/** @brief Getter of the type property */
RTCSdpType RTCSessionDescriptionInit_type(const RTCSessionDescriptionInit *self);

/** @brief Setter of the type property */
void RTCSessionDescriptionInit_set_type(RTCSessionDescriptionInit* self, RTCSdpType * value);

/** @brief Getter of the sdp property */
jb_String RTCSessionDescriptionInit_sdp(const RTCSessionDescriptionInit *self);

/** @brief Setter of the sdp property */
void RTCSessionDescriptionInit_set_sdp(RTCSessionDescriptionInit* self, jb_String * value);

/** @brief Constructor of the RTCSessionDescriptionInit dictionary type */
RTCSessionDescriptionInit RTCSessionDescriptionInit_new();

#ifdef __cplusplus
}
#endif
