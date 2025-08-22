#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCDataChannel RTCDataChannel;

/** @brief Dictionary type RTCDataChannelEventInit */
DECLARE_EMLITE_TYPE(RTCDataChannelEventInit, EventInit);

/** @brief Getter of the channel property */
RTCDataChannel RTCDataChannelEventInit_channel(const RTCDataChannelEventInit *self);

/** @brief Setter of the channel property */
void RTCDataChannelEventInit_set_channel(RTCDataChannelEventInit* self, RTCDataChannel * value);

/** @brief Constructor of the RTCDataChannelEventInit dictionary type */
RTCDataChannelEventInit RTCDataChannelEventInit_new();

#ifdef __cplusplus
}
#endif
