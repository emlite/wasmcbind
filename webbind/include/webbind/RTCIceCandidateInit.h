#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCIceCandidateInit */
DECLARE_EMLITE_TYPE(RTCIceCandidateInit, em_Val);

/** @brief Getter of the candidate property */
jb_String RTCIceCandidateInit_candidate(const RTCIceCandidateInit *self);

/** @brief Setter of the candidate property */
void RTCIceCandidateInit_set_candidate(RTCIceCandidateInit* self, jb_String * value);

/** @brief Getter of the sdpMid property */
jb_String RTCIceCandidateInit_sdpMid(const RTCIceCandidateInit *self);

/** @brief Setter of the sdpMid property */
void RTCIceCandidateInit_set_sdpMid(RTCIceCandidateInit* self, jb_String * value);

/** @brief Getter of the sdpMLineIndex property */
unsigned short RTCIceCandidateInit_sdpMLineIndex(const RTCIceCandidateInit *self);

/** @brief Setter of the sdpMLineIndex property */
void RTCIceCandidateInit_set_sdpMLineIndex(RTCIceCandidateInit* self, unsigned short value);

/** @brief Getter of the usernameFragment property */
jb_String RTCIceCandidateInit_usernameFragment(const RTCIceCandidateInit *self);

/** @brief Setter of the usernameFragment property */
void RTCIceCandidateInit_set_usernameFragment(RTCIceCandidateInit* self, jb_String * value);

/** @brief Constructor of the RTCIceCandidateInit dictionary type */
RTCIceCandidateInit RTCIceCandidateInit_new();

#ifdef __cplusplus
}
#endif
