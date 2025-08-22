#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCPeerConnectionStats */
DECLARE_EMLITE_TYPE(RTCPeerConnectionStats, RTCStats);

/** @brief Getter of the dataChannelsOpened property */
unsigned long RTCPeerConnectionStats_dataChannelsOpened(const RTCPeerConnectionStats *self);

/** @brief Setter of the dataChannelsOpened property */
void RTCPeerConnectionStats_set_dataChannelsOpened(RTCPeerConnectionStats* self, unsigned long value);

/** @brief Getter of the dataChannelsClosed property */
unsigned long RTCPeerConnectionStats_dataChannelsClosed(const RTCPeerConnectionStats *self);

/** @brief Setter of the dataChannelsClosed property */
void RTCPeerConnectionStats_set_dataChannelsClosed(RTCPeerConnectionStats* self, unsigned long value);

/** @brief Constructor of the RTCPeerConnectionStats dictionary type */
RTCPeerConnectionStats RTCPeerConnectionStats_new();

#ifdef __cplusplus
}
#endif
