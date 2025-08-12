#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCDTMFToneChangeEventInit */
DECLARE_EMLITE_TYPE(RTCDTMFToneChangeEventInit, EventInit);

/** @brief Getter of the tone property */
jb_String RTCDTMFToneChangeEventInit_tone(const RTCDTMFToneChangeEventInit *self);

/** @brief Setter of the tone property */
void RTCDTMFToneChangeEventInit_set_tone(RTCDTMFToneChangeEventInit* self, jb_String * value);

/** @brief Constructor of the RTCDTMFToneChangeEventInit dictionary type */
RTCDTMFToneChangeEventInit RTCDTMFToneChangeEventInit_new();

#ifdef __cplusplus
}
#endif
