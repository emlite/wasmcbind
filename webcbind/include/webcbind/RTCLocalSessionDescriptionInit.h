#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCLocalSessionDescriptionInit */
DECLARE_EMLITE_TYPE(RTCLocalSessionDescriptionInit, em_Val);

/** @brief Getter of the type property */
RTCSdpType RTCLocalSessionDescriptionInit_type(const RTCLocalSessionDescriptionInit *self);

/** @brief Setter of the type property */
void RTCLocalSessionDescriptionInit_set_type(RTCLocalSessionDescriptionInit* self, RTCSdpType * value);

/** @brief Getter of the sdp property */
jb_String RTCLocalSessionDescriptionInit_sdp(const RTCLocalSessionDescriptionInit *self);

/** @brief Setter of the sdp property */
void RTCLocalSessionDescriptionInit_set_sdp(RTCLocalSessionDescriptionInit* self, jb_String * value);

/** @brief Constructor of the RTCLocalSessionDescriptionInit dictionary type */
RTCLocalSessionDescriptionInit RTCLocalSessionDescriptionInit_new();

#ifdef __cplusplus
}
#endif
