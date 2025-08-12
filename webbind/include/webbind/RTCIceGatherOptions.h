#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCIceServer.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCIceGatherOptions */
DECLARE_EMLITE_TYPE(RTCIceGatherOptions, em_Val);

/** @brief Getter of the gatherPolicy property */
RTCIceTransportPolicy RTCIceGatherOptions_gatherPolicy(const RTCIceGatherOptions *self);

/** @brief Setter of the gatherPolicy property */
void RTCIceGatherOptions_set_gatherPolicy(RTCIceGatherOptions* self, RTCIceTransportPolicy * value);

/** @brief Getter of the iceServers property */
jb_Array RTCIceGatherOptions_iceServers(const RTCIceGatherOptions *self);

/** @brief Setter of the iceServers property */
void RTCIceGatherOptions_set_iceServers(RTCIceGatherOptions* self, jb_Array * value);

/** @brief Constructor of the RTCIceGatherOptions dictionary type */
RTCIceGatherOptions RTCIceGatherOptions_new();

#ifdef __cplusplus
}
#endif
