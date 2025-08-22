#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCIceCandidate RTCIceCandidate;

/** @brief Dictionary type RTCPeerConnectionIceEventInit */
DECLARE_EMLITE_TYPE(RTCPeerConnectionIceEventInit, EventInit);

/** @brief Getter of the candidate property */
RTCIceCandidate RTCPeerConnectionIceEventInit_candidate(const RTCPeerConnectionIceEventInit *self);

/** @brief Setter of the candidate property */
void RTCPeerConnectionIceEventInit_set_candidate(RTCPeerConnectionIceEventInit* self, RTCIceCandidate * value);

/** @brief Getter of the url property */
jb_String RTCPeerConnectionIceEventInit_url(const RTCPeerConnectionIceEventInit *self);

/** @brief Setter of the url property */
void RTCPeerConnectionIceEventInit_set_url(RTCPeerConnectionIceEventInit* self, jb_String * value);

/** @brief Constructor of the RTCPeerConnectionIceEventInit dictionary type */
RTCPeerConnectionIceEventInit RTCPeerConnectionIceEventInit_new();

#ifdef __cplusplus
}
#endif
